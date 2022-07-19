# ISSSort

A code for sorting raw data from the ISOLDE Solendoidal Spectrometer in MIDAS format.


## Compile

```bash
make clean
make
```


## Execute

```
iss_sort
```
if you add the ISSSort/bin to your PATH variable. You can also add ISSSort/lib to your (DY)LD_LIBRARY_PATH too.

or
```
./bin/iss_sort
```

If you start the code without any flags, it will launch the GUI. To run in batch mode, simple pass at least one file to the programme with the -i flag.

The input options are described below.

```
use iss_sort with following flags:
        
        [-spy     <vector<string>>: List of input dataspy files]
        [-i       <vector<string>>: List of input files]
        [-m       <int           >: Monitor input file every X seconds]
        [-p       <int           >: Port number for web server (default 8030)]
        [-o       <string        >: Output file for histogram file]
        [-d       <string        >: Data directory to add to the monitor]
        [-f                       : Flag to force new ROOT conversion]
        [-e                       : Flag to force new event builder (new calibration)]
        [-source                  : Flag to define an source only run]
        [-autocal                 : Flag to perform automatic calibration of alpha source data]
        [-s       <string        >: Settings file]
        [-c       <string        >: Calibration file]
        [-r       <string        >: Reaction file]
        [-g                       : Launch the GUI]
        [-h                       : Print this help]
```

