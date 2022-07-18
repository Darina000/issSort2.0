/*******************************************************************************
* dataspy.h     function declarations for data spy library   
*/
#ifndef INClibspyH
#define INClibspyH



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#if (defined SOLARIS || defined POSIX)

#include <unistd.h>
#include <sys/mman.h>
#include <fcntl.h>

#ifndef MACOSX
#ifdef __cplusplus
extern "C" {
#endif
   int shm_open(const char *, int, mode_t);
#ifdef __cplusplus
}
#endif
#endif

#else
#include <sys/types.h>
#include <sys/shm.h>
#endif

//#include "dataspy.hh"

#define MAX_ID  8
#define MAX_BUFFER_SIZE  64*1024

#define SHMSIZE  0x401000
#define SHM_KEY  110205   /* base Key */


#define NBLOCKS 64        /*  current number of buffers used - must be 2**n */
#define MAX_BUFFERS  128   /*  unchangeable max because of header structure */

typedef struct s_buffer_header {
    int buffer_offset;                 //    offset to first buffer
    int buffer_number;                 //    number of buffers
    int buffer_length;                 //    length of buffers
    int buffer_next;                   //    next buffer to be written
    int buffer_max;                    //    MAX_BUFFERS
    int buffer_spare1;
    int buffer_spare2;
    int buffer_spare3;
#ifdef WIN32
    int buffer_currentage;
    int padding1;
    int buffer_age[MAX_BUFFERS];
    int padding2[MAX_BUFFERS];
#else
    long long buffer_currentage;
    long long buffer_age[MAX_BUFFERS];
#endif
    int buffer_status[MAX_BUFFERS];
}  BUFFER_HEADER;

#endif







class DataSpy{
public:
    
    DataSpy(){};
    ~DataSpy(){};
    
    
#if (defined SOLARIS || defined POSIX)
 int shmkey = SHM_KEY;
 char object_name[16];
#else
 key_t shmkey = SHM_KEY;
#endif

void * shm_bufferarea[MAX_ID];
 int shmid[MAX_ID];
BUFFER_HEADER * baseaddress;

int number_of_buffers[MAX_ID];
int buffers_offset[MAX_ID];
int next_index[MAX_ID];
unsigned long long current_age[MAX_ID];
    
    int verbose;
    
    
    int dataSpyOpen (int id){
        
        
        if (id < 0 || id >= MAX_ID)
          {
            perror ("dataSpyOpen - id number out of range");
            return -1;
          }

       #if (defined SOLARIS || defined POSIX)

       //    create a file mapped object (MASTER) or obtain ID of existing object

          sprintf(object_name,"/SHM_%d", shmkey+id);

          shmid[id] = shm_open(object_name, O_RDONLY, (mode_t) 0);
          if (shmid[id] == -1)  {
              perror("shm_open");
              exit(1);
          }

       #else

        shmid[id] = shmget(shmkey+id, 0, SHM_R);
        if (shmid[id] == -1) {perror("shmget"); return -1;}
        
       #endif

       #if (defined SOLARIS || defined POSIX)

       //    attach the memory segment

          shm_bufferarea[id] = mmap((void *) NULL, (size_t) SHMSIZE, PROT_READ, MAP_SHARED, shmid[id], (off_t) 0);
          if (shm_bufferarea[id] == (void *) MAP_FAILED) {
              perror("mmap");
              exit(1);
          }

          close(shmid[id]);

       #else

          shm_bufferarea[id] = shmat(shmid[id], (void *) 0, SHM_RDONLY);
          if (shm_bufferarea[id] == (void *) -1) {
               perror("shmat");
               exit(1);
          }

       #endif

        printf("dataSpy Shared buffer area %d (/SHM_%d) located at 0x%x\n", id, shmkey+id, (unsigned int)(size_t) shm_bufferarea[id]);
        
        baseaddress = (BUFFER_HEADER *) shm_bufferarea[id];

        number_of_buffers[id] = baseaddress->buffer_number;
        buffers_offset[id] = baseaddress->buffer_offset;

        // Flush all old buffers by setting current index ...

        next_index[id] = baseaddress->buffer_next;
        current_age[id] = baseaddress->buffer_currentage;

        printf("dataSpy Current age %lld index %d\n", current_age[id], next_index[id]);
        
        return 0;
       }


    
    int dataSpyClose (int id)
    {
      int ret;

      if (id < 0 || id >= MAX_ID)
        {
          perror ("dataSpyClose - id number out of range");
          return -1;
        }

    #if (defined SOLARIS || defined POSIX)

    /*    detach the memory segment */

        (void) munmap(shm_bufferarea[id], (size_t) SHMSIZE);

    #else

        (void) shmdt(shm_bufferarea[id]);

    #endif


      
      printf("dataSpy Shared buffer area %d located at 0x%x detached\n",id,(unsigned int)(size_t)shm_bufferarea[id]);
      
      return 0;
    }
    
    
    
    
    
    
    int dataSpyRead (int id, char *data, int length) {
       int seq;
       return dataSpyReadWithSeq (id, data, length, &seq);
    }

    
    
    
    
    
    
    int dataSpyReadWithSeq(int id, char *data, int length, int *seq)
    {
      int next,index;
      int * bufferaddress;
      int i,len;
      int *ptr;


        if (id < 0 || id >= MAX_ID)
        {
          perror ("dataSpyRead - id number out of range");
          return -1;
        }

        len = 0;
        baseaddress = (BUFFER_HEADER *) shm_bufferarea[id];

     retry:

        if(baseaddress->buffer_age[next_index[id]] != 0)
        {
            if(baseaddress->buffer_age[next_index[id]] >= current_age[id])
        {
           current_age[id] = baseaddress->buffer_age[next_index[id]];
          
           len = baseaddress->buffer_length;
           if (!len) len = MAX_BUFFER_SIZE;

           bufferaddress = (int *) ((char *)shm_bufferarea[id] + buffers_offset[id] + (len * next_index[id]));

           if(length < len) len = length;

           if(verbose)
              printf ("dataSpyRead id %d: Age %lld Index %d Buffer length %d\n",
                id,current_age[id],next_index[id],len);

    /*    copy data from shared memory to user buffer  */

           ptr = (int *)data;
           for (i = 0; i < (len >> 2); i++)
           {
               ptr[i] = bufferaddress[i];
           }
               *seq = (int) current_age[id];

    /*    check if the entry could have changed while copying (can happen) and if so retry   */
          
           if (current_age[id] != baseaddress->buffer_age[next_index[id]])
           {
                if(verbose)
                    printf ("dataSpyRead id %d: Copied oldage %lld newage %lld\n", id, current_age[id], baseaddress->buffer_age[next_index[id]]);
              
               goto retry;
           }

           next_index[id] = ++next_index[id] & (number_of_buffers[id] -1);
        }
        }
        else
        {
           if(verbose)
              printf ("dataSpyRead - id %d has no data\n",id);
        }

        if(verbose)
           printf("dataSpyRead - id %d length %d\n",id,len);
      
        return len;                      /* return actual length of data block */
    }
    
    
    
    
    
    
    
    
    void dataSpyVerbose (int opt){verbose = opt;};
    
    
    
   // int ConvertFile( std::string input_file_name, unsigned long start_block = 0, long end_block = -1);
};
