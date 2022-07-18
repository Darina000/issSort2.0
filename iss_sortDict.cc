// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME iss_sortDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "./include/AutoCalibrator.hh"
#include "./include/Calibration.hh"
#include "./include/CommandLineInterface.hh"
#include "./include/Converter.hh"
#include "./include/DataPackets.hh"
#include "./include/Histogrammer.hh"
#include "./include/ISSEvts.hh"
#include "./include/ISSGUI.hh"
#include "./include/Reaction.hh"
#include "./include/Settings.hh"
#include "./include/TimeSorter.hh"
#include "./include/EventBuilder.hh"
#include "./include/FitFunctions.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *ISSSettings_Dictionary();
   static void ISSSettings_TClassManip(TClass*);
   static void delete_ISSSettings(void *p);
   static void deleteArray_ISSSettings(void *p);
   static void destruct_ISSSettings(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSSettings*)
   {
      ::ISSSettings *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ISSSettings));
      static ::ROOT::TGenericClassInfo 
         instance("ISSSettings", "Settings.hh", 15,
                  typeid(::ISSSettings), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ISSSettings_Dictionary, isa_proxy, 4,
                  sizeof(::ISSSettings) );
      instance.SetDelete(&delete_ISSSettings);
      instance.SetDeleteArray(&deleteArray_ISSSettings);
      instance.SetDestructor(&destruct_ISSSettings);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSSettings*)
   {
      return GenerateInitInstanceLocal((::ISSSettings*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSSettings*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ISSSettings_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ISSSettings*)nullptr)->GetClass();
      ISSSettings_TClassManip(theClass);
   return theClass;
   }

   static void ISSSettings_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ISSCalibration_Dictionary();
   static void ISSCalibration_TClassManip(TClass*);
   static void delete_ISSCalibration(void *p);
   static void deleteArray_ISSCalibration(void *p);
   static void destruct_ISSCalibration(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSCalibration*)
   {
      ::ISSCalibration *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ISSCalibration));
      static ::ROOT::TGenericClassInfo 
         instance("ISSCalibration", "Calibration.hh", 26,
                  typeid(::ISSCalibration), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ISSCalibration_Dictionary, isa_proxy, 4,
                  sizeof(::ISSCalibration) );
      instance.SetDelete(&delete_ISSCalibration);
      instance.SetDeleteArray(&deleteArray_ISSCalibration);
      instance.SetDestructor(&destruct_ISSCalibration);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSCalibration*)
   {
      return GenerateInitInstanceLocal((::ISSCalibration*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSCalibration*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ISSCalibration_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ISSCalibration*)nullptr)->GetClass();
      ISSCalibration_TClassManip(theClass);
   return theClass;
   }

   static void ISSCalibration_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ISSParticle(void *p = nullptr);
   static void *newArray_ISSParticle(Long_t size, void *p);
   static void delete_ISSParticle(void *p);
   static void deleteArray_ISSParticle(void *p);
   static void destruct_ISSParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSParticle*)
   {
      ::ISSParticle *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ISSParticle >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ISSParticle", ::ISSParticle::Class_Version(), "Reaction.hh", 64,
                  typeid(::ISSParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ISSParticle::Dictionary, isa_proxy, 4,
                  sizeof(::ISSParticle) );
      instance.SetNew(&new_ISSParticle);
      instance.SetNewArray(&newArray_ISSParticle);
      instance.SetDelete(&delete_ISSParticle);
      instance.SetDeleteArray(&deleteArray_ISSParticle);
      instance.SetDestructor(&destruct_ISSParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSParticle*)
   {
      return GenerateInitInstanceLocal((::ISSParticle*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSParticle*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ISSReaction_Dictionary();
   static void ISSReaction_TClassManip(TClass*);
   static void delete_ISSReaction(void *p);
   static void deleteArray_ISSReaction(void *p);
   static void destruct_ISSReaction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSReaction*)
   {
      ::ISSReaction *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ISSReaction));
      static ::ROOT::TGenericClassInfo 
         instance("ISSReaction", "Reaction.hh", 138,
                  typeid(::ISSReaction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ISSReaction_Dictionary, isa_proxy, 4,
                  sizeof(::ISSReaction) );
      instance.SetDelete(&delete_ISSReaction);
      instance.SetDeleteArray(&deleteArray_ISSReaction);
      instance.SetDestructor(&destruct_ISSReaction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSReaction*)
   {
      return GenerateInitInstanceLocal((::ISSReaction*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSReaction*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ISSReaction_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ISSReaction*)nullptr)->GetClass();
      ISSReaction_TClassManip(theClass);
   return theClass;
   }

   static void ISSReaction_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ISSAsicData(void *p = nullptr);
   static void *newArray_ISSAsicData(Long_t size, void *p);
   static void delete_ISSAsicData(void *p);
   static void deleteArray_ISSAsicData(void *p);
   static void destruct_ISSAsicData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSAsicData*)
   {
      ::ISSAsicData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ISSAsicData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ISSAsicData", ::ISSAsicData::Class_Version(), "DataPackets.hh", 6,
                  typeid(::ISSAsicData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ISSAsicData::Dictionary, isa_proxy, 4,
                  sizeof(::ISSAsicData) );
      instance.SetNew(&new_ISSAsicData);
      instance.SetNewArray(&newArray_ISSAsicData);
      instance.SetDelete(&delete_ISSAsicData);
      instance.SetDeleteArray(&deleteArray_ISSAsicData);
      instance.SetDestructor(&destruct_ISSAsicData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSAsicData*)
   {
      return GenerateInitInstanceLocal((::ISSAsicData*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSAsicData*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ISSCaenData(void *p = nullptr);
   static void *newArray_ISSCaenData(Long_t size, void *p);
   static void delete_ISSCaenData(void *p);
   static void deleteArray_ISSCaenData(void *p);
   static void destruct_ISSCaenData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSCaenData*)
   {
      ::ISSCaenData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ISSCaenData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ISSCaenData", ::ISSCaenData::Class_Version(), "DataPackets.hh", 56,
                  typeid(::ISSCaenData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ISSCaenData::Dictionary, isa_proxy, 4,
                  sizeof(::ISSCaenData) );
      instance.SetNew(&new_ISSCaenData);
      instance.SetNewArray(&newArray_ISSCaenData);
      instance.SetDelete(&delete_ISSCaenData);
      instance.SetDeleteArray(&deleteArray_ISSCaenData);
      instance.SetDestructor(&destruct_ISSCaenData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSCaenData*)
   {
      return GenerateInitInstanceLocal((::ISSCaenData*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSCaenData*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ISSInfoData(void *p = nullptr);
   static void *newArray_ISSInfoData(Long_t size, void *p);
   static void delete_ISSInfoData(void *p);
   static void deleteArray_ISSInfoData(void *p);
   static void destruct_ISSInfoData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSInfoData*)
   {
      ::ISSInfoData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ISSInfoData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ISSInfoData", ::ISSInfoData::Class_Version(), "DataPackets.hh", 115,
                  typeid(::ISSInfoData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ISSInfoData::Dictionary, isa_proxy, 4,
                  sizeof(::ISSInfoData) );
      instance.SetNew(&new_ISSInfoData);
      instance.SetNewArray(&newArray_ISSInfoData);
      instance.SetDelete(&delete_ISSInfoData);
      instance.SetDeleteArray(&deleteArray_ISSInfoData);
      instance.SetDestructor(&destruct_ISSInfoData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSInfoData*)
   {
      return GenerateInitInstanceLocal((::ISSInfoData*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSInfoData*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ISSDataPackets(void *p = nullptr);
   static void *newArray_ISSDataPackets(Long_t size, void *p);
   static void delete_ISSDataPackets(void *p);
   static void deleteArray_ISSDataPackets(void *p);
   static void destruct_ISSDataPackets(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSDataPackets*)
   {
      ::ISSDataPackets *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ISSDataPackets >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ISSDataPackets", ::ISSDataPackets::Class_Version(), "DataPackets.hh", 149,
                  typeid(::ISSDataPackets), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ISSDataPackets::Dictionary, isa_proxy, 4,
                  sizeof(::ISSDataPackets) );
      instance.SetNew(&new_ISSDataPackets);
      instance.SetNewArray(&newArray_ISSDataPackets);
      instance.SetDelete(&delete_ISSDataPackets);
      instance.SetDeleteArray(&deleteArray_ISSDataPackets);
      instance.SetDestructor(&destruct_ISSDataPackets);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSDataPackets*)
   {
      return GenerateInitInstanceLocal((::ISSDataPackets*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSDataPackets*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ISSConverter_Dictionary();
   static void ISSConverter_TClassManip(TClass*);
   static void delete_ISSConverter(void *p);
   static void deleteArray_ISSConverter(void *p);
   static void destruct_ISSConverter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSConverter*)
   {
      ::ISSConverter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ISSConverter));
      static ::ROOT::TGenericClassInfo 
         instance("ISSConverter", "Converter.hh", 42,
                  typeid(::ISSConverter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ISSConverter_Dictionary, isa_proxy, 4,
                  sizeof(::ISSConverter) );
      instance.SetDelete(&delete_ISSConverter);
      instance.SetDeleteArray(&deleteArray_ISSConverter);
      instance.SetDestructor(&destruct_ISSConverter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSConverter*)
   {
      return GenerateInitInstanceLocal((::ISSConverter*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSConverter*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ISSConverter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ISSConverter*)nullptr)->GetClass();
      ISSConverter_TClassManip(theClass);
   return theClass;
   }

   static void ISSConverter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_ISSArrayEvt(void *p = nullptr);
   static void *newArray_ISSArrayEvt(Long_t size, void *p);
   static void delete_ISSArrayEvt(void *p);
   static void deleteArray_ISSArrayEvt(void *p);
   static void destruct_ISSArrayEvt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSArrayEvt*)
   {
      ::ISSArrayEvt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ISSArrayEvt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ISSArrayEvt", ::ISSArrayEvt::Class_Version(), "ISSEvts.hh", 12,
                  typeid(::ISSArrayEvt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ISSArrayEvt::Dictionary, isa_proxy, 4,
                  sizeof(::ISSArrayEvt) );
      instance.SetNew(&new_ISSArrayEvt);
      instance.SetNewArray(&newArray_ISSArrayEvt);
      instance.SetDelete(&delete_ISSArrayEvt);
      instance.SetDeleteArray(&deleteArray_ISSArrayEvt);
      instance.SetDestructor(&destruct_ISSArrayEvt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSArrayEvt*)
   {
      return GenerateInitInstanceLocal((::ISSArrayEvt*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSArrayEvt*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ISSArrayPEvt(void *p = nullptr);
   static void *newArray_ISSArrayPEvt(Long_t size, void *p);
   static void delete_ISSArrayPEvt(void *p);
   static void deleteArray_ISSArrayPEvt(void *p);
   static void destruct_ISSArrayPEvt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSArrayPEvt*)
   {
      ::ISSArrayPEvt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ISSArrayPEvt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ISSArrayPEvt", ::ISSArrayPEvt::Class_Version(), "ISSEvts.hh", 66,
                  typeid(::ISSArrayPEvt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ISSArrayPEvt::Dictionary, isa_proxy, 4,
                  sizeof(::ISSArrayPEvt) );
      instance.SetNew(&new_ISSArrayPEvt);
      instance.SetNewArray(&newArray_ISSArrayPEvt);
      instance.SetDelete(&delete_ISSArrayPEvt);
      instance.SetDeleteArray(&deleteArray_ISSArrayPEvt);
      instance.SetDestructor(&destruct_ISSArrayPEvt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSArrayPEvt*)
   {
      return GenerateInitInstanceLocal((::ISSArrayPEvt*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSArrayPEvt*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ISSRecoilEvt(void *p = nullptr);
   static void *newArray_ISSRecoilEvt(Long_t size, void *p);
   static void delete_ISSRecoilEvt(void *p);
   static void deleteArray_ISSRecoilEvt(void *p);
   static void destruct_ISSRecoilEvt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSRecoilEvt*)
   {
      ::ISSRecoilEvt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ISSRecoilEvt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ISSRecoilEvt", ::ISSRecoilEvt::Class_Version(), "ISSEvts.hh", 81,
                  typeid(::ISSRecoilEvt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ISSRecoilEvt::Dictionary, isa_proxy, 4,
                  sizeof(::ISSRecoilEvt) );
      instance.SetNew(&new_ISSRecoilEvt);
      instance.SetNewArray(&newArray_ISSRecoilEvt);
      instance.SetDelete(&delete_ISSRecoilEvt);
      instance.SetDeleteArray(&deleteArray_ISSRecoilEvt);
      instance.SetDestructor(&destruct_ISSRecoilEvt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSRecoilEvt*)
   {
      return GenerateInitInstanceLocal((::ISSRecoilEvt*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSRecoilEvt*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ISSMwpcEvt(void *p = nullptr);
   static void *newArray_ISSMwpcEvt(Long_t size, void *p);
   static void delete_ISSMwpcEvt(void *p);
   static void deleteArray_ISSMwpcEvt(void *p);
   static void destruct_ISSMwpcEvt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSMwpcEvt*)
   {
      ::ISSMwpcEvt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ISSMwpcEvt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ISSMwpcEvt", ::ISSMwpcEvt::Class_Version(), "ISSEvts.hh", 162,
                  typeid(::ISSMwpcEvt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ISSMwpcEvt::Dictionary, isa_proxy, 4,
                  sizeof(::ISSMwpcEvt) );
      instance.SetNew(&new_ISSMwpcEvt);
      instance.SetNewArray(&newArray_ISSMwpcEvt);
      instance.SetDelete(&delete_ISSMwpcEvt);
      instance.SetDeleteArray(&deleteArray_ISSMwpcEvt);
      instance.SetDestructor(&destruct_ISSMwpcEvt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSMwpcEvt*)
   {
      return GenerateInitInstanceLocal((::ISSMwpcEvt*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSMwpcEvt*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ISSElumEvt(void *p = nullptr);
   static void *newArray_ISSElumEvt(Long_t size, void *p);
   static void delete_ISSElumEvt(void *p);
   static void deleteArray_ISSElumEvt(void *p);
   static void destruct_ISSElumEvt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSElumEvt*)
   {
      ::ISSElumEvt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ISSElumEvt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ISSElumEvt", ::ISSElumEvt::Class_Version(), "ISSEvts.hh", 193,
                  typeid(::ISSElumEvt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ISSElumEvt::Dictionary, isa_proxy, 4,
                  sizeof(::ISSElumEvt) );
      instance.SetNew(&new_ISSElumEvt);
      instance.SetNewArray(&newArray_ISSElumEvt);
      instance.SetDelete(&delete_ISSElumEvt);
      instance.SetDeleteArray(&deleteArray_ISSElumEvt);
      instance.SetDestructor(&destruct_ISSElumEvt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSElumEvt*)
   {
      return GenerateInitInstanceLocal((::ISSElumEvt*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSElumEvt*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ISSZeroDegreeEvt(void *p = nullptr);
   static void *newArray_ISSZeroDegreeEvt(Long_t size, void *p);
   static void delete_ISSZeroDegreeEvt(void *p);
   static void deleteArray_ISSZeroDegreeEvt(void *p);
   static void destruct_ISSZeroDegreeEvt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSZeroDegreeEvt*)
   {
      ::ISSZeroDegreeEvt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ISSZeroDegreeEvt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ISSZeroDegreeEvt", ::ISSZeroDegreeEvt::Class_Version(), "ISSEvts.hh", 227,
                  typeid(::ISSZeroDegreeEvt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ISSZeroDegreeEvt::Dictionary, isa_proxy, 4,
                  sizeof(::ISSZeroDegreeEvt) );
      instance.SetNew(&new_ISSZeroDegreeEvt);
      instance.SetNewArray(&newArray_ISSZeroDegreeEvt);
      instance.SetDelete(&delete_ISSZeroDegreeEvt);
      instance.SetDeleteArray(&deleteArray_ISSZeroDegreeEvt);
      instance.SetDestructor(&destruct_ISSZeroDegreeEvt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSZeroDegreeEvt*)
   {
      return GenerateInitInstanceLocal((::ISSZeroDegreeEvt*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSZeroDegreeEvt*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ISSEvts(void *p = nullptr);
   static void *newArray_ISSEvts(Long_t size, void *p);
   static void delete_ISSEvts(void *p);
   static void deleteArray_ISSEvts(void *p);
   static void destruct_ISSEvts(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSEvts*)
   {
      ::ISSEvts *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ISSEvts >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ISSEvts", ::ISSEvts::Class_Version(), "ISSEvts.hh", 305,
                  typeid(::ISSEvts), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ISSEvts::Dictionary, isa_proxy, 4,
                  sizeof(::ISSEvts) );
      instance.SetNew(&new_ISSEvts);
      instance.SetNewArray(&newArray_ISSEvts);
      instance.SetDelete(&delete_ISSEvts);
      instance.SetDeleteArray(&deleteArray_ISSEvts);
      instance.SetDestructor(&destruct_ISSEvts);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSEvts*)
   {
      return GenerateInitInstanceLocal((::ISSEvts*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSEvts*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *ISSTimeSorter_Dictionary();
   static void ISSTimeSorter_TClassManip(TClass*);
   static void *new_ISSTimeSorter(void *p = nullptr);
   static void *newArray_ISSTimeSorter(Long_t size, void *p);
   static void delete_ISSTimeSorter(void *p);
   static void deleteArray_ISSTimeSorter(void *p);
   static void destruct_ISSTimeSorter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSTimeSorter*)
   {
      ::ISSTimeSorter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ISSTimeSorter));
      static ::ROOT::TGenericClassInfo 
         instance("ISSTimeSorter", "TimeSorter.hh", 23,
                  typeid(::ISSTimeSorter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ISSTimeSorter_Dictionary, isa_proxy, 4,
                  sizeof(::ISSTimeSorter) );
      instance.SetNew(&new_ISSTimeSorter);
      instance.SetNewArray(&newArray_ISSTimeSorter);
      instance.SetDelete(&delete_ISSTimeSorter);
      instance.SetDeleteArray(&deleteArray_ISSTimeSorter);
      instance.SetDestructor(&destruct_ISSTimeSorter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSTimeSorter*)
   {
      return GenerateInitInstanceLocal((::ISSTimeSorter*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSTimeSorter*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ISSTimeSorter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ISSTimeSorter*)nullptr)->GetClass();
      ISSTimeSorter_TClassManip(theClass);
   return theClass;
   }

   static void ISSTimeSorter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ISSEventBuilder_Dictionary();
   static void ISSEventBuilder_TClassManip(TClass*);
   static void delete_ISSEventBuilder(void *p);
   static void deleteArray_ISSEventBuilder(void *p);
   static void destruct_ISSEventBuilder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSEventBuilder*)
   {
      ::ISSEventBuilder *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ISSEventBuilder));
      static ::ROOT::TGenericClassInfo 
         instance("ISSEventBuilder", "EventBuilder.hh", 64,
                  typeid(::ISSEventBuilder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ISSEventBuilder_Dictionary, isa_proxy, 4,
                  sizeof(::ISSEventBuilder) );
      instance.SetDelete(&delete_ISSEventBuilder);
      instance.SetDeleteArray(&deleteArray_ISSEventBuilder);
      instance.SetDestructor(&destruct_ISSEventBuilder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSEventBuilder*)
   {
      return GenerateInitInstanceLocal((::ISSEventBuilder*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSEventBuilder*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ISSEventBuilder_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ISSEventBuilder*)nullptr)->GetClass();
      ISSEventBuilder_TClassManip(theClass);
   return theClass;
   }

   static void ISSEventBuilder_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_ISSDialog(void *p);
   static void deleteArray_ISSDialog(void *p);
   static void destruct_ISSDialog(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSDialog*)
   {
      ::ISSDialog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ISSDialog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ISSDialog", ::ISSDialog::Class_Version(), "ISSGUI.hh", 50,
                  typeid(::ISSDialog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ISSDialog::Dictionary, isa_proxy, 4,
                  sizeof(::ISSDialog) );
      instance.SetDelete(&delete_ISSDialog);
      instance.SetDeleteArray(&deleteArray_ISSDialog);
      instance.SetDestructor(&destruct_ISSDialog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSDialog*)
   {
      return GenerateInitInstanceLocal((::ISSDialog*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSDialog*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ISSGUI(void *p = nullptr);
   static void *newArray_ISSGUI(Long_t size, void *p);
   static void delete_ISSGUI(void *p);
   static void deleteArray_ISSGUI(void *p);
   static void destruct_ISSGUI(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ISSGUI*)
   {
      ::ISSGUI *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ISSGUI >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ISSGUI", ::ISSGUI::Class_Version(), "ISSGUI.hh", 79,
                  typeid(::ISSGUI), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ISSGUI::Dictionary, isa_proxy, 4,
                  sizeof(::ISSGUI) );
      instance.SetNew(&new_ISSGUI);
      instance.SetNewArray(&newArray_ISSGUI);
      instance.SetDelete(&delete_ISSGUI);
      instance.SetDeleteArray(&deleteArray_ISSGUI);
      instance.SetDestructor(&destruct_ISSGUI);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ISSGUI*)
   {
      return GenerateInitInstanceLocal((::ISSGUI*)nullptr);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ISSGUI*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ISSParticle::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ISSParticle::Class_Name()
{
   return "ISSParticle";
}

//______________________________________________________________________________
const char *ISSParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSParticle*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ISSParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSParticle*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ISSParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSParticle*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ISSParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSParticle*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ISSAsicData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ISSAsicData::Class_Name()
{
   return "ISSAsicData";
}

//______________________________________________________________________________
const char *ISSAsicData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSAsicData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ISSAsicData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSAsicData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ISSAsicData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSAsicData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ISSAsicData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSAsicData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ISSCaenData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ISSCaenData::Class_Name()
{
   return "ISSCaenData";
}

//______________________________________________________________________________
const char *ISSCaenData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSCaenData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ISSCaenData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSCaenData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ISSCaenData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSCaenData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ISSCaenData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSCaenData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ISSInfoData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ISSInfoData::Class_Name()
{
   return "ISSInfoData";
}

//______________________________________________________________________________
const char *ISSInfoData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSInfoData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ISSInfoData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSInfoData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ISSInfoData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSInfoData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ISSInfoData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSInfoData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ISSDataPackets::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ISSDataPackets::Class_Name()
{
   return "ISSDataPackets";
}

//______________________________________________________________________________
const char *ISSDataPackets::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSDataPackets*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ISSDataPackets::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSDataPackets*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ISSDataPackets::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSDataPackets*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ISSDataPackets::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSDataPackets*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ISSArrayEvt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ISSArrayEvt::Class_Name()
{
   return "ISSArrayEvt";
}

//______________________________________________________________________________
const char *ISSArrayEvt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSArrayEvt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ISSArrayEvt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSArrayEvt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ISSArrayEvt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSArrayEvt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ISSArrayEvt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSArrayEvt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ISSArrayPEvt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ISSArrayPEvt::Class_Name()
{
   return "ISSArrayPEvt";
}

//______________________________________________________________________________
const char *ISSArrayPEvt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSArrayPEvt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ISSArrayPEvt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSArrayPEvt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ISSArrayPEvt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSArrayPEvt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ISSArrayPEvt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSArrayPEvt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ISSRecoilEvt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ISSRecoilEvt::Class_Name()
{
   return "ISSRecoilEvt";
}

//______________________________________________________________________________
const char *ISSRecoilEvt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSRecoilEvt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ISSRecoilEvt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSRecoilEvt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ISSRecoilEvt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSRecoilEvt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ISSRecoilEvt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSRecoilEvt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ISSMwpcEvt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ISSMwpcEvt::Class_Name()
{
   return "ISSMwpcEvt";
}

//______________________________________________________________________________
const char *ISSMwpcEvt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSMwpcEvt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ISSMwpcEvt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSMwpcEvt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ISSMwpcEvt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSMwpcEvt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ISSMwpcEvt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSMwpcEvt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ISSElumEvt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ISSElumEvt::Class_Name()
{
   return "ISSElumEvt";
}

//______________________________________________________________________________
const char *ISSElumEvt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSElumEvt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ISSElumEvt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSElumEvt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ISSElumEvt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSElumEvt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ISSElumEvt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSElumEvt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ISSZeroDegreeEvt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ISSZeroDegreeEvt::Class_Name()
{
   return "ISSZeroDegreeEvt";
}

//______________________________________________________________________________
const char *ISSZeroDegreeEvt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSZeroDegreeEvt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ISSZeroDegreeEvt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSZeroDegreeEvt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ISSZeroDegreeEvt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSZeroDegreeEvt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ISSZeroDegreeEvt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSZeroDegreeEvt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ISSEvts::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ISSEvts::Class_Name()
{
   return "ISSEvts";
}

//______________________________________________________________________________
const char *ISSEvts::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSEvts*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ISSEvts::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSEvts*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ISSEvts::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSEvts*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ISSEvts::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSEvts*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ISSDialog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ISSDialog::Class_Name()
{
   return "ISSDialog";
}

//______________________________________________________________________________
const char *ISSDialog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSDialog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ISSDialog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSDialog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ISSDialog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSDialog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ISSDialog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSDialog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ISSGUI::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ISSGUI::Class_Name()
{
   return "ISSGUI";
}

//______________________________________________________________________________
const char *ISSGUI::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSGUI*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ISSGUI::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ISSGUI*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ISSGUI::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSGUI*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ISSGUI::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ISSGUI*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ISSSettings(void *p) {
      delete ((::ISSSettings*)p);
   }
   static void deleteArray_ISSSettings(void *p) {
      delete [] ((::ISSSettings*)p);
   }
   static void destruct_ISSSettings(void *p) {
      typedef ::ISSSettings current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSSettings

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ISSCalibration(void *p) {
      delete ((::ISSCalibration*)p);
   }
   static void deleteArray_ISSCalibration(void *p) {
      delete [] ((::ISSCalibration*)p);
   }
   static void destruct_ISSCalibration(void *p) {
      typedef ::ISSCalibration current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSCalibration

//______________________________________________________________________________
void ISSParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class ISSParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ISSParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(ISSParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ISSParticle(void *p) {
      return  p ? new(p) ::ISSParticle : new ::ISSParticle;
   }
   static void *newArray_ISSParticle(Long_t nElements, void *p) {
      return p ? new(p) ::ISSParticle[nElements] : new ::ISSParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_ISSParticle(void *p) {
      delete ((::ISSParticle*)p);
   }
   static void deleteArray_ISSParticle(void *p) {
      delete [] ((::ISSParticle*)p);
   }
   static void destruct_ISSParticle(void *p) {
      typedef ::ISSParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSParticle

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ISSReaction(void *p) {
      delete ((::ISSReaction*)p);
   }
   static void deleteArray_ISSReaction(void *p) {
      delete [] ((::ISSReaction*)p);
   }
   static void destruct_ISSReaction(void *p) {
      typedef ::ISSReaction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSReaction

//______________________________________________________________________________
void ISSAsicData::Streamer(TBuffer &R__b)
{
   // Stream an object of class ISSAsicData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ISSAsicData::Class(),this);
   } else {
      R__b.WriteClassBuffer(ISSAsicData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ISSAsicData(void *p) {
      return  p ? new(p) ::ISSAsicData : new ::ISSAsicData;
   }
   static void *newArray_ISSAsicData(Long_t nElements, void *p) {
      return p ? new(p) ::ISSAsicData[nElements] : new ::ISSAsicData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ISSAsicData(void *p) {
      delete ((::ISSAsicData*)p);
   }
   static void deleteArray_ISSAsicData(void *p) {
      delete [] ((::ISSAsicData*)p);
   }
   static void destruct_ISSAsicData(void *p) {
      typedef ::ISSAsicData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSAsicData

//______________________________________________________________________________
void ISSCaenData::Streamer(TBuffer &R__b)
{
   // Stream an object of class ISSCaenData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ISSCaenData::Class(),this);
   } else {
      R__b.WriteClassBuffer(ISSCaenData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ISSCaenData(void *p) {
      return  p ? new(p) ::ISSCaenData : new ::ISSCaenData;
   }
   static void *newArray_ISSCaenData(Long_t nElements, void *p) {
      return p ? new(p) ::ISSCaenData[nElements] : new ::ISSCaenData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ISSCaenData(void *p) {
      delete ((::ISSCaenData*)p);
   }
   static void deleteArray_ISSCaenData(void *p) {
      delete [] ((::ISSCaenData*)p);
   }
   static void destruct_ISSCaenData(void *p) {
      typedef ::ISSCaenData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSCaenData

//______________________________________________________________________________
void ISSInfoData::Streamer(TBuffer &R__b)
{
   // Stream an object of class ISSInfoData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ISSInfoData::Class(),this);
   } else {
      R__b.WriteClassBuffer(ISSInfoData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ISSInfoData(void *p) {
      return  p ? new(p) ::ISSInfoData : new ::ISSInfoData;
   }
   static void *newArray_ISSInfoData(Long_t nElements, void *p) {
      return p ? new(p) ::ISSInfoData[nElements] : new ::ISSInfoData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ISSInfoData(void *p) {
      delete ((::ISSInfoData*)p);
   }
   static void deleteArray_ISSInfoData(void *p) {
      delete [] ((::ISSInfoData*)p);
   }
   static void destruct_ISSInfoData(void *p) {
      typedef ::ISSInfoData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSInfoData

//______________________________________________________________________________
void ISSDataPackets::Streamer(TBuffer &R__b)
{
   // Stream an object of class ISSDataPackets.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ISSDataPackets::Class(),this);
   } else {
      R__b.WriteClassBuffer(ISSDataPackets::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ISSDataPackets(void *p) {
      return  p ? new(p) ::ISSDataPackets : new ::ISSDataPackets;
   }
   static void *newArray_ISSDataPackets(Long_t nElements, void *p) {
      return p ? new(p) ::ISSDataPackets[nElements] : new ::ISSDataPackets[nElements];
   }
   // Wrapper around operator delete
   static void delete_ISSDataPackets(void *p) {
      delete ((::ISSDataPackets*)p);
   }
   static void deleteArray_ISSDataPackets(void *p) {
      delete [] ((::ISSDataPackets*)p);
   }
   static void destruct_ISSDataPackets(void *p) {
      typedef ::ISSDataPackets current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSDataPackets

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ISSConverter(void *p) {
      delete ((::ISSConverter*)p);
   }
   static void deleteArray_ISSConverter(void *p) {
      delete [] ((::ISSConverter*)p);
   }
   static void destruct_ISSConverter(void *p) {
      typedef ::ISSConverter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSConverter

//______________________________________________________________________________
void ISSArrayEvt::Streamer(TBuffer &R__b)
{
   // Stream an object of class ISSArrayEvt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ISSArrayEvt::Class(),this);
   } else {
      R__b.WriteClassBuffer(ISSArrayEvt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ISSArrayEvt(void *p) {
      return  p ? new(p) ::ISSArrayEvt : new ::ISSArrayEvt;
   }
   static void *newArray_ISSArrayEvt(Long_t nElements, void *p) {
      return p ? new(p) ::ISSArrayEvt[nElements] : new ::ISSArrayEvt[nElements];
   }
   // Wrapper around operator delete
   static void delete_ISSArrayEvt(void *p) {
      delete ((::ISSArrayEvt*)p);
   }
   static void deleteArray_ISSArrayEvt(void *p) {
      delete [] ((::ISSArrayEvt*)p);
   }
   static void destruct_ISSArrayEvt(void *p) {
      typedef ::ISSArrayEvt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSArrayEvt

//______________________________________________________________________________
void ISSArrayPEvt::Streamer(TBuffer &R__b)
{
   // Stream an object of class ISSArrayPEvt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ISSArrayPEvt::Class(),this);
   } else {
      R__b.WriteClassBuffer(ISSArrayPEvt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ISSArrayPEvt(void *p) {
      return  p ? new(p) ::ISSArrayPEvt : new ::ISSArrayPEvt;
   }
   static void *newArray_ISSArrayPEvt(Long_t nElements, void *p) {
      return p ? new(p) ::ISSArrayPEvt[nElements] : new ::ISSArrayPEvt[nElements];
   }
   // Wrapper around operator delete
   static void delete_ISSArrayPEvt(void *p) {
      delete ((::ISSArrayPEvt*)p);
   }
   static void deleteArray_ISSArrayPEvt(void *p) {
      delete [] ((::ISSArrayPEvt*)p);
   }
   static void destruct_ISSArrayPEvt(void *p) {
      typedef ::ISSArrayPEvt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSArrayPEvt

//______________________________________________________________________________
void ISSRecoilEvt::Streamer(TBuffer &R__b)
{
   // Stream an object of class ISSRecoilEvt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ISSRecoilEvt::Class(),this);
   } else {
      R__b.WriteClassBuffer(ISSRecoilEvt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ISSRecoilEvt(void *p) {
      return  p ? new(p) ::ISSRecoilEvt : new ::ISSRecoilEvt;
   }
   static void *newArray_ISSRecoilEvt(Long_t nElements, void *p) {
      return p ? new(p) ::ISSRecoilEvt[nElements] : new ::ISSRecoilEvt[nElements];
   }
   // Wrapper around operator delete
   static void delete_ISSRecoilEvt(void *p) {
      delete ((::ISSRecoilEvt*)p);
   }
   static void deleteArray_ISSRecoilEvt(void *p) {
      delete [] ((::ISSRecoilEvt*)p);
   }
   static void destruct_ISSRecoilEvt(void *p) {
      typedef ::ISSRecoilEvt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSRecoilEvt

//______________________________________________________________________________
void ISSMwpcEvt::Streamer(TBuffer &R__b)
{
   // Stream an object of class ISSMwpcEvt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ISSMwpcEvt::Class(),this);
   } else {
      R__b.WriteClassBuffer(ISSMwpcEvt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ISSMwpcEvt(void *p) {
      return  p ? new(p) ::ISSMwpcEvt : new ::ISSMwpcEvt;
   }
   static void *newArray_ISSMwpcEvt(Long_t nElements, void *p) {
      return p ? new(p) ::ISSMwpcEvt[nElements] : new ::ISSMwpcEvt[nElements];
   }
   // Wrapper around operator delete
   static void delete_ISSMwpcEvt(void *p) {
      delete ((::ISSMwpcEvt*)p);
   }
   static void deleteArray_ISSMwpcEvt(void *p) {
      delete [] ((::ISSMwpcEvt*)p);
   }
   static void destruct_ISSMwpcEvt(void *p) {
      typedef ::ISSMwpcEvt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSMwpcEvt

//______________________________________________________________________________
void ISSElumEvt::Streamer(TBuffer &R__b)
{
   // Stream an object of class ISSElumEvt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ISSElumEvt::Class(),this);
   } else {
      R__b.WriteClassBuffer(ISSElumEvt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ISSElumEvt(void *p) {
      return  p ? new(p) ::ISSElumEvt : new ::ISSElumEvt;
   }
   static void *newArray_ISSElumEvt(Long_t nElements, void *p) {
      return p ? new(p) ::ISSElumEvt[nElements] : new ::ISSElumEvt[nElements];
   }
   // Wrapper around operator delete
   static void delete_ISSElumEvt(void *p) {
      delete ((::ISSElumEvt*)p);
   }
   static void deleteArray_ISSElumEvt(void *p) {
      delete [] ((::ISSElumEvt*)p);
   }
   static void destruct_ISSElumEvt(void *p) {
      typedef ::ISSElumEvt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSElumEvt

//______________________________________________________________________________
void ISSZeroDegreeEvt::Streamer(TBuffer &R__b)
{
   // Stream an object of class ISSZeroDegreeEvt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ISSZeroDegreeEvt::Class(),this);
   } else {
      R__b.WriteClassBuffer(ISSZeroDegreeEvt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ISSZeroDegreeEvt(void *p) {
      return  p ? new(p) ::ISSZeroDegreeEvt : new ::ISSZeroDegreeEvt;
   }
   static void *newArray_ISSZeroDegreeEvt(Long_t nElements, void *p) {
      return p ? new(p) ::ISSZeroDegreeEvt[nElements] : new ::ISSZeroDegreeEvt[nElements];
   }
   // Wrapper around operator delete
   static void delete_ISSZeroDegreeEvt(void *p) {
      delete ((::ISSZeroDegreeEvt*)p);
   }
   static void deleteArray_ISSZeroDegreeEvt(void *p) {
      delete [] ((::ISSZeroDegreeEvt*)p);
   }
   static void destruct_ISSZeroDegreeEvt(void *p) {
      typedef ::ISSZeroDegreeEvt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSZeroDegreeEvt

//______________________________________________________________________________
void ISSEvts::Streamer(TBuffer &R__b)
{
   // Stream an object of class ISSEvts.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ISSEvts::Class(),this);
   } else {
      R__b.WriteClassBuffer(ISSEvts::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ISSEvts(void *p) {
      return  p ? new(p) ::ISSEvts : new ::ISSEvts;
   }
   static void *newArray_ISSEvts(Long_t nElements, void *p) {
      return p ? new(p) ::ISSEvts[nElements] : new ::ISSEvts[nElements];
   }
   // Wrapper around operator delete
   static void delete_ISSEvts(void *p) {
      delete ((::ISSEvts*)p);
   }
   static void deleteArray_ISSEvts(void *p) {
      delete [] ((::ISSEvts*)p);
   }
   static void destruct_ISSEvts(void *p) {
      typedef ::ISSEvts current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSEvts

namespace ROOT {
   // Wrappers around operator new
   static void *new_ISSTimeSorter(void *p) {
      return  p ? new(p) ::ISSTimeSorter : new ::ISSTimeSorter;
   }
   static void *newArray_ISSTimeSorter(Long_t nElements, void *p) {
      return p ? new(p) ::ISSTimeSorter[nElements] : new ::ISSTimeSorter[nElements];
   }
   // Wrapper around operator delete
   static void delete_ISSTimeSorter(void *p) {
      delete ((::ISSTimeSorter*)p);
   }
   static void deleteArray_ISSTimeSorter(void *p) {
      delete [] ((::ISSTimeSorter*)p);
   }
   static void destruct_ISSTimeSorter(void *p) {
      typedef ::ISSTimeSorter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSTimeSorter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ISSEventBuilder(void *p) {
      delete ((::ISSEventBuilder*)p);
   }
   static void deleteArray_ISSEventBuilder(void *p) {
      delete [] ((::ISSEventBuilder*)p);
   }
   static void destruct_ISSEventBuilder(void *p) {
      typedef ::ISSEventBuilder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSEventBuilder

//______________________________________________________________________________
void ISSDialog::Streamer(TBuffer &R__b)
{
   // Stream an object of class ISSDialog.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ISSDialog::Class(),this);
   } else {
      R__b.WriteClassBuffer(ISSDialog::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_ISSDialog(void *p) {
      delete ((::ISSDialog*)p);
   }
   static void deleteArray_ISSDialog(void *p) {
      delete [] ((::ISSDialog*)p);
   }
   static void destruct_ISSDialog(void *p) {
      typedef ::ISSDialog current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSDialog

//______________________________________________________________________________
void ISSGUI::Streamer(TBuffer &R__b)
{
   // Stream an object of class ISSGUI.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ISSGUI::Class(),this);
   } else {
      R__b.WriteClassBuffer(ISSGUI::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ISSGUI(void *p) {
      return  p ? new(p) ::ISSGUI : new ::ISSGUI;
   }
   static void *newArray_ISSGUI(Long_t nElements, void *p) {
      return p ? new(p) ::ISSGUI[nElements] : new ::ISSGUI[nElements];
   }
   // Wrapper around operator delete
   static void delete_ISSGUI(void *p) {
      delete ((::ISSGUI*)p);
   }
   static void deleteArray_ISSGUI(void *p) {
      delete [] ((::ISSGUI*)p);
   }
   static void destruct_ISSGUI(void *p) {
      typedef ::ISSGUI current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ISSGUI

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<unsigned int> > >*)
   {
      vector<vector<vector<unsigned int> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<unsigned int> > >", -2, "vector", 471,
                  typeid(vector<vector<vector<unsigned int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<vector<unsigned int> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<unsigned int> > > >()));

      ::ROOT::AddClassAlternate("vector<vector<vector<unsigned int> > >","std::__1::vector<std::__1::vector<std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >, std::__1::allocator<std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >, std::__1::allocator<std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<unsigned int> > >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<unsigned int> > >*)nullptr)->GetClass();
      vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<unsigned int> > > : new vector<vector<vector<unsigned int> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<unsigned int> > >[nElements] : new vector<vector<vector<unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<unsigned int> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<unsigned int> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<unsigned int> > >

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlEfloatgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlEfloatgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlEfloatgRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEvectorlEfloatgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlEfloatgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlEfloatgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlEfloatgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<float> > >*)
   {
      vector<vector<vector<float> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<float> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<float> > >", -2, "vector", 471,
                  typeid(vector<vector<vector<float> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlEfloatgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<vector<float> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlEfloatgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlEfloatgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlEfloatgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlEfloatgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlEfloatgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<float> > > >()));

      ::ROOT::AddClassAlternate("vector<vector<vector<float> > >","std::__1::vector<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<float> > >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlEfloatgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<float> > >*)nullptr)->GetClass();
      vectorlEvectorlEvectorlEfloatgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlEfloatgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlEfloatgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<float> > > : new vector<vector<vector<float> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlEfloatgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<float> > >[nElements] : new vector<vector<vector<float> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlEfloatgRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<float> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlEfloatgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<float> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlEfloatgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<float> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<float> > >

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlEdoublegRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlEdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<double> > >*)
   {
      vector<vector<vector<double> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<double> > >", -2, "vector", 471,
                  typeid(vector<vector<vector<double> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlEdoublegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<vector<double> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<double> > > >()));

      ::ROOT::AddClassAlternate("vector<vector<vector<double> > >","std::__1::vector<std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >, std::__1::allocator<std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<double> > >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlEdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<double> > >*)nullptr)->GetClass();
      vectorlEvectorlEvectorlEdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlEdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<double> > > : new vector<vector<vector<double> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<double> > >[nElements] : new vector<vector<vector<double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<double> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<double> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      typedef vector<vector<vector<double> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<double> > >

namespace ROOT {
   static TClass *vectorlEvectorlEunsignedsPintgRsPgR_Dictionary();
   static void vectorlEvectorlEunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEunsignedsPintgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEunsignedsPintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEunsignedsPintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<unsigned int> >*)
   {
      vector<vector<unsigned int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<unsigned int> >", -2, "vector", 471,
                  typeid(vector<vector<unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEunsignedsPintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<unsigned int> >) );
      instance.SetNew(&new_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<unsigned int> > >()));

      ::ROOT::AddClassAlternate("vector<vector<unsigned int> >","std::__1::vector<std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >, std::__1::allocator<std::__1::vector<unsigned int, std::__1::allocator<unsigned int> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<unsigned int> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<unsigned int> >*)nullptr)->GetClass();
      vectorlEvectorlEunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<unsigned int> > : new vector<vector<unsigned int> >;
   }
   static void *newArray_vectorlEvectorlEunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<unsigned int> >[nElements] : new vector<vector<unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEunsignedsPintgRsPgR(void *p) {
      delete ((vector<vector<unsigned int> >*)p);
   }
   static void deleteArray_vectorlEvectorlEunsignedsPintgRsPgR(void *p) {
      delete [] ((vector<vector<unsigned int> >*)p);
   }
   static void destruct_vectorlEvectorlEunsignedsPintgRsPgR(void *p) {
      typedef vector<vector<unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<unsigned int> >

namespace ROOT {
   static TClass *vectorlEvectorlEunsignedsPchargRsPgR_Dictionary();
   static void vectorlEvectorlEunsignedsPchargRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEunsignedsPchargRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEunsignedsPchargRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEunsignedsPchargRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEunsignedsPchargRsPgR(void *p);
   static void destruct_vectorlEvectorlEunsignedsPchargRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<unsigned char> >*)
   {
      vector<vector<unsigned char> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<unsigned char> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<unsigned char> >", -2, "vector", 471,
                  typeid(vector<vector<unsigned char> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEunsignedsPchargRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<unsigned char> >) );
      instance.SetNew(&new_vectorlEvectorlEunsignedsPchargRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEunsignedsPchargRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEunsignedsPchargRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEunsignedsPchargRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEunsignedsPchargRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<unsigned char> > >()));

      ::ROOT::AddClassAlternate("vector<vector<unsigned char> >","std::__1::vector<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >, std::__1::allocator<std::__1::vector<unsigned char, std::__1::allocator<unsigned char> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<unsigned char> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEunsignedsPchargRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<unsigned char> >*)nullptr)->GetClass();
      vectorlEvectorlEunsignedsPchargRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEunsignedsPchargRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEunsignedsPchargRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<unsigned char> > : new vector<vector<unsigned char> >;
   }
   static void *newArray_vectorlEvectorlEunsignedsPchargRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<unsigned char> >[nElements] : new vector<vector<unsigned char> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEunsignedsPchargRsPgR(void *p) {
      delete ((vector<vector<unsigned char> >*)p);
   }
   static void deleteArray_vectorlEvectorlEunsignedsPchargRsPgR(void *p) {
      delete [] ((vector<vector<unsigned char> >*)p);
   }
   static void destruct_vectorlEvectorlEunsignedsPchargRsPgR(void *p) {
      typedef vector<vector<unsigned char> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<unsigned char> >

namespace ROOT {
   static TClass *vectorlEvectorlElonggRsPgR_Dictionary();
   static void vectorlEvectorlElonggRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlElonggRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlElonggRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlElonggRsPgR(void *p);
   static void deleteArray_vectorlEvectorlElonggRsPgR(void *p);
   static void destruct_vectorlEvectorlElonggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<long> >*)
   {
      vector<vector<long> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<long> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<long> >", -2, "vector", 471,
                  typeid(vector<vector<long> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlElonggRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<long> >) );
      instance.SetNew(&new_vectorlEvectorlElonggRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlElonggRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlElonggRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlElonggRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlElonggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<long> > >()));

      ::ROOT::AddClassAlternate("vector<vector<long> >","std::__1::vector<std::__1::vector<long, std::__1::allocator<long> >, std::__1::allocator<std::__1::vector<long, std::__1::allocator<long> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<long> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlElonggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<long> >*)nullptr)->GetClass();
      vectorlEvectorlElonggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlElonggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlElonggRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<long> > : new vector<vector<long> >;
   }
   static void *newArray_vectorlEvectorlElonggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<long> >[nElements] : new vector<vector<long> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlElonggRsPgR(void *p) {
      delete ((vector<vector<long> >*)p);
   }
   static void deleteArray_vectorlEvectorlElonggRsPgR(void *p) {
      delete [] ((vector<vector<long> >*)p);
   }
   static void destruct_vectorlEvectorlElonggRsPgR(void *p) {
      typedef vector<vector<long> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<long> >

namespace ROOT {
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary();
   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEintgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<int> >*)
   {
      vector<vector<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<int> >", -2, "vector", 471,
                  typeid(vector<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<int> >) );
      instance.SetNew(&new_vectorlEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int> > >()));

      ::ROOT::AddClassAlternate("vector<vector<int> >","std::__1::vector<std::__1::vector<int, std::__1::allocator<int> >, std::__1::allocator<std::__1::vector<int, std::__1::allocator<int> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<int> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<int> >*)nullptr)->GetClass();
      vectorlEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> > : new vector<vector<int> >;
   }
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> >[nElements] : new vector<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintgRsPgR(void *p) {
      delete ((vector<vector<int> >*)p);
   }
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p) {
      delete [] ((vector<vector<int> >*)p);
   }
   static void destruct_vectorlEvectorlEintgRsPgR(void *p) {
      typedef vector<vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int> >

namespace ROOT {
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary();
   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p);
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<float> >*)
   {
      vector<vector<float> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<float> >", -2, "vector", 471,
                  typeid(vector<vector<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<float> >) );
      instance.SetNew(&new_vectorlEvectorlEfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<float> > >()));

      ::ROOT::AddClassAlternate("vector<vector<float> >","std::__1::vector<std::__1::vector<float, std::__1::allocator<float> >, std::__1::allocator<std::__1::vector<float, std::__1::allocator<float> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<float> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<float> >*)nullptr)->GetClass();
      vectorlEvectorlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<float> > : new vector<vector<float> >;
   }
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<float> >[nElements] : new vector<vector<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete ((vector<vector<float> >*)p);
   }
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete [] ((vector<vector<float> >*)p);
   }
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p) {
      typedef vector<vector<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<float> >

namespace ROOT {
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary();
   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p);
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<double> >*)
   {
      vector<vector<double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<double> >", -2, "vector", 471,
                  typeid(vector<vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<double> >) );
      instance.SetNew(&new_vectorlEvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<double> > >()));

      ::ROOT::AddClassAlternate("vector<vector<double> >","std::__1::vector<std::__1::vector<double, std::__1::allocator<double> >, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<double> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<double> >*)nullptr)->GetClass();
      vectorlEvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<double> > : new vector<vector<double> >;
   }
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<double> >[nElements] : new vector<vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete ((vector<vector<double> >*)p);
   }
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete [] ((vector<vector<double> >*)p);
   }
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p) {
      typedef vector<vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<double> >

namespace ROOT {
   static TClass *vectorlEvectorlEboolgRsPgR_Dictionary();
   static void vectorlEvectorlEboolgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEboolgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEboolgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEboolgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEboolgRsPgR(void *p);
   static void destruct_vectorlEvectorlEboolgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<bool> >*)
   {
      vector<vector<bool> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<bool> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<bool> >", -2, "vector", 471,
                  typeid(vector<vector<bool> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEboolgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<bool> >) );
      instance.SetNew(&new_vectorlEvectorlEboolgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEboolgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEboolgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEboolgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEboolgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<bool> > >()));

      ::ROOT::AddClassAlternate("vector<vector<bool> >","std::__1::vector<std::__1::vector<bool, std::__1::allocator<bool> >, std::__1::allocator<std::__1::vector<bool, std::__1::allocator<bool> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<bool> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEboolgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<bool> >*)nullptr)->GetClass();
      vectorlEvectorlEboolgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEboolgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEboolgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<bool> > : new vector<vector<bool> >;
   }
   static void *newArray_vectorlEvectorlEboolgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<bool> >[nElements] : new vector<vector<bool> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEboolgRsPgR(void *p) {
      delete ((vector<vector<bool> >*)p);
   }
   static void deleteArray_vectorlEvectorlEboolgRsPgR(void *p) {
      delete [] ((vector<vector<bool> >*)p);
   }
   static void destruct_vectorlEvectorlEboolgRsPgR(void *p) {
      typedef vector<vector<bool> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<bool> >

namespace ROOT {
   static TClass *vectorlEvectorlETH2FmUgRsPgR_Dictionary();
   static void vectorlEvectorlETH2FmUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETH2FmUgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlETH2FmUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETH2FmUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETH2FmUgRsPgR(void *p);
   static void destruct_vectorlEvectorlETH2FmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TH2F*> >*)
   {
      vector<vector<TH2F*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TH2F*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TH2F*> >", -2, "vector", 471,
                  typeid(vector<vector<TH2F*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETH2FmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<TH2F*> >) );
      instance.SetNew(&new_vectorlEvectorlETH2FmUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETH2FmUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETH2FmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETH2FmUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETH2FmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TH2F*> > >()));

      ::ROOT::AddClassAlternate("vector<vector<TH2F*> >","std::__1::vector<std::__1::vector<TH2F*, std::__1::allocator<TH2F*> >, std::__1::allocator<std::__1::vector<TH2F*, std::__1::allocator<TH2F*> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<TH2F*> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETH2FmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TH2F*> >*)nullptr)->GetClass();
      vectorlEvectorlETH2FmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETH2FmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETH2FmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH2F*> > : new vector<vector<TH2F*> >;
   }
   static void *newArray_vectorlEvectorlETH2FmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH2F*> >[nElements] : new vector<vector<TH2F*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETH2FmUgRsPgR(void *p) {
      delete ((vector<vector<TH2F*> >*)p);
   }
   static void deleteArray_vectorlEvectorlETH2FmUgRsPgR(void *p) {
      delete [] ((vector<vector<TH2F*> >*)p);
   }
   static void destruct_vectorlEvectorlETH2FmUgRsPgR(void *p) {
      typedef vector<vector<TH2F*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TH2F*> >

namespace ROOT {
   static TClass *vectorlEvectorlETH1FmUgRsPgR_Dictionary();
   static void vectorlEvectorlETH1FmUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETH1FmUgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlETH1FmUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETH1FmUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETH1FmUgRsPgR(void *p);
   static void destruct_vectorlEvectorlETH1FmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TH1F*> >*)
   {
      vector<vector<TH1F*> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TH1F*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TH1F*> >", -2, "vector", 471,
                  typeid(vector<vector<TH1F*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETH1FmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<TH1F*> >) );
      instance.SetNew(&new_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETH1FmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TH1F*> > >()));

      ::ROOT::AddClassAlternate("vector<vector<TH1F*> >","std::__1::vector<std::__1::vector<TH1F*, std::__1::allocator<TH1F*> >, std::__1::allocator<std::__1::vector<TH1F*, std::__1::allocator<TH1F*> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<TH1F*> >*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETH1FmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TH1F*> >*)nullptr)->GetClass();
      vectorlEvectorlETH1FmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETH1FmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH1F*> > : new vector<vector<TH1F*> >;
   }
   static void *newArray_vectorlEvectorlETH1FmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH1F*> >[nElements] : new vector<vector<TH1F*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      delete ((vector<vector<TH1F*> >*)p);
   }
   static void deleteArray_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      delete [] ((vector<vector<TH1F*> >*)p);
   }
   static void destruct_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      typedef vector<vector<TH1F*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TH1F*> >

namespace ROOT {
   static TClass *vectorlEunsignedsPshortgR_Dictionary();
   static void vectorlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPshortgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPshortgR(void *p);
   static void deleteArray_vectorlEunsignedsPshortgR(void *p);
   static void destruct_vectorlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned short>*)
   {
      vector<unsigned short> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned short>", -2, "vector", 471,
                  typeid(vector<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned short>) );
      instance.SetNew(&new_vectorlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPshortgR);
      instance.SetDelete(&delete_vectorlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned short> >()));

      ::ROOT::AddClassAlternate("vector<unsigned short>","std::__1::vector<unsigned short, std::__1::allocator<unsigned short> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned short>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned short>*)nullptr)->GetClass();
      vectorlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned short> : new vector<unsigned short>;
   }
   static void *newArray_vectorlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned short>[nElements] : new vector<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPshortgR(void *p) {
      delete ((vector<unsigned short>*)p);
   }
   static void deleteArray_vectorlEunsignedsPshortgR(void *p) {
      delete [] ((vector<unsigned short>*)p);
   }
   static void destruct_vectorlEunsignedsPshortgR(void *p) {
      typedef vector<unsigned short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned short>

namespace ROOT {
   static TClass *vectorlEunsignedsPlonggR_Dictionary();
   static void vectorlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPlonggR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPlonggR(void *p);
   static void deleteArray_vectorlEunsignedsPlonggR(void *p);
   static void destruct_vectorlEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned long>*)
   {
      vector<unsigned long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned long>", -2, "vector", 471,
                  typeid(vector<unsigned long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPlonggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned long>) );
      instance.SetNew(&new_vectorlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPlonggR);
      instance.SetDelete(&delete_vectorlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned long> >()));

      ::ROOT::AddClassAlternate("vector<unsigned long>","std::__1::vector<unsigned long, std::__1::allocator<unsigned long> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned long>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned long>*)nullptr)->GetClass();
      vectorlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned long> : new vector<unsigned long>;
   }
   static void *newArray_vectorlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned long>[nElements] : new vector<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPlonggR(void *p) {
      delete ((vector<unsigned long>*)p);
   }
   static void deleteArray_vectorlEunsignedsPlonggR(void *p) {
      delete [] ((vector<unsigned long>*)p);
   }
   static void destruct_vectorlEunsignedsPlonggR(void *p) {
      typedef vector<unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned long>

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 471,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      ::ROOT::AddClassAlternate("vector<unsigned int>","std::__1::vector<unsigned int, std::__1::allocator<unsigned int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)nullptr)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEunsignedsPchargR_Dictionary();
   static void vectorlEunsignedsPchargR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPchargR(void *p = nullptr);
   static void *newArray_vectorlEunsignedsPchargR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPchargR(void *p);
   static void deleteArray_vectorlEunsignedsPchargR(void *p);
   static void destruct_vectorlEunsignedsPchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned char>*)
   {
      vector<unsigned char> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned char>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned char>", -2, "vector", 471,
                  typeid(vector<unsigned char>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPchargR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned char>) );
      instance.SetNew(&new_vectorlEunsignedsPchargR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPchargR);
      instance.SetDelete(&delete_vectorlEunsignedsPchargR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPchargR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPchargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned char> >()));

      ::ROOT::AddClassAlternate("vector<unsigned char>","std::__1::vector<unsigned char, std::__1::allocator<unsigned char> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned char>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned char>*)nullptr)->GetClass();
      vectorlEunsignedsPchargR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPchargR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned char> : new vector<unsigned char>;
   }
   static void *newArray_vectorlEunsignedsPchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned char>[nElements] : new vector<unsigned char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPchargR(void *p) {
      delete ((vector<unsigned char>*)p);
   }
   static void deleteArray_vectorlEunsignedsPchargR(void *p) {
      delete [] ((vector<unsigned char>*)p);
   }
   static void destruct_vectorlEunsignedsPchargR(void *p) {
      typedef vector<unsigned char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned char>

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = nullptr);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 471,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));

      ::ROOT::AddClassAlternate("vector<string>","std::__1::vector<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, std::__1::allocator<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<string>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)nullptr)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlElonggR_Dictionary();
   static void vectorlElonggR_TClassManip(TClass*);
   static void *new_vectorlElonggR(void *p = nullptr);
   static void *newArray_vectorlElonggR(Long_t size, void *p);
   static void delete_vectorlElonggR(void *p);
   static void deleteArray_vectorlElonggR(void *p);
   static void destruct_vectorlElonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<long>*)
   {
      vector<long> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<long>", -2, "vector", 471,
                  typeid(vector<long>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElonggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<long>) );
      instance.SetNew(&new_vectorlElonggR);
      instance.SetNewArray(&newArray_vectorlElonggR);
      instance.SetDelete(&delete_vectorlElonggR);
      instance.SetDeleteArray(&deleteArray_vectorlElonggR);
      instance.SetDestructor(&destruct_vectorlElonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<long> >()));

      ::ROOT::AddClassAlternate("vector<long>","std::__1::vector<long, std::__1::allocator<long> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<long>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<long>*)nullptr)->GetClass();
      vectorlElonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElonggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<long> : new vector<long>;
   }
   static void *newArray_vectorlElonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<long>[nElements] : new vector<long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElonggR(void *p) {
      delete ((vector<long>*)p);
   }
   static void deleteArray_vectorlElonggR(void *p) {
      delete [] ((vector<long>*)p);
   }
   static void destruct_vectorlElonggR(void *p) {
      typedef vector<long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<long>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 471,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      ::ROOT::AddClassAlternate("vector<int>","std::__1::vector<int, std::__1::allocator<int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)nullptr)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = nullptr);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 471,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));

      ::ROOT::AddClassAlternate("vector<float>","std::__1::vector<float, std::__1::allocator<float> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<float>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)nullptr)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 471,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      ::ROOT::AddClassAlternate("vector<double>","std::__1::vector<double, std::__1::allocator<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)nullptr)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = nullptr);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 2167,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));

      ::ROOT::AddClassAlternate("vector<bool>","std::__1::vector<bool, std::__1::allocator<bool> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<bool>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bool>*)nullptr)->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete ((vector<bool>*)p);
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] ((vector<bool>*)p);
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace ROOT {
   static TClass *vectorlEULong64_tgR_Dictionary();
   static void vectorlEULong64_tgR_TClassManip(TClass*);
   static void *new_vectorlEULong64_tgR(void *p = nullptr);
   static void *newArray_vectorlEULong64_tgR(Long_t size, void *p);
   static void delete_vectorlEULong64_tgR(void *p);
   static void deleteArray_vectorlEULong64_tgR(void *p);
   static void destruct_vectorlEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ULong64_t>*)
   {
      vector<ULong64_t> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ULong64_t>", -2, "vector", 471,
                  typeid(vector<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEULong64_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ULong64_t>) );
      instance.SetNew(&new_vectorlEULong64_tgR);
      instance.SetNewArray(&newArray_vectorlEULong64_tgR);
      instance.SetDelete(&delete_vectorlEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEULong64_tgR);
      instance.SetDestructor(&destruct_vectorlEULong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ULong64_t> >()));

      ::ROOT::AddClassAlternate("vector<ULong64_t>","std::__1::vector<unsigned long long, std::__1::allocator<unsigned long long> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ULong64_t>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ULong64_t>*)nullptr)->GetClass();
      vectorlEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEULong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ULong64_t> : new vector<ULong64_t>;
   }
   static void *newArray_vectorlEULong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ULong64_t>[nElements] : new vector<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEULong64_tgR(void *p) {
      delete ((vector<ULong64_t>*)p);
   }
   static void deleteArray_vectorlEULong64_tgR(void *p) {
      delete [] ((vector<ULong64_t>*)p);
   }
   static void destruct_vectorlEULong64_tgR(void *p) {
      typedef vector<ULong64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ULong64_t>

namespace ROOT {
   static TClass *vectorlETProfilemUgR_Dictionary();
   static void vectorlETProfilemUgR_TClassManip(TClass*);
   static void *new_vectorlETProfilemUgR(void *p = nullptr);
   static void *newArray_vectorlETProfilemUgR(Long_t size, void *p);
   static void delete_vectorlETProfilemUgR(void *p);
   static void deleteArray_vectorlETProfilemUgR(void *p);
   static void destruct_vectorlETProfilemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TProfile*>*)
   {
      vector<TProfile*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TProfile*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TProfile*>", -2, "vector", 471,
                  typeid(vector<TProfile*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETProfilemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TProfile*>) );
      instance.SetNew(&new_vectorlETProfilemUgR);
      instance.SetNewArray(&newArray_vectorlETProfilemUgR);
      instance.SetDelete(&delete_vectorlETProfilemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETProfilemUgR);
      instance.SetDestructor(&destruct_vectorlETProfilemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TProfile*> >()));

      ::ROOT::AddClassAlternate("vector<TProfile*>","std::__1::vector<TProfile*, std::__1::allocator<TProfile*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TProfile*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETProfilemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TProfile*>*)nullptr)->GetClass();
      vectorlETProfilemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETProfilemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETProfilemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TProfile*> : new vector<TProfile*>;
   }
   static void *newArray_vectorlETProfilemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TProfile*>[nElements] : new vector<TProfile*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETProfilemUgR(void *p) {
      delete ((vector<TProfile*>*)p);
   }
   static void deleteArray_vectorlETProfilemUgR(void *p) {
      delete [] ((vector<TProfile*>*)p);
   }
   static void destruct_vectorlETProfilemUgR(void *p) {
      typedef vector<TProfile*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TProfile*>

namespace ROOT {
   static TClass *vectorlETH2FmUgR_Dictionary();
   static void vectorlETH2FmUgR_TClassManip(TClass*);
   static void *new_vectorlETH2FmUgR(void *p = nullptr);
   static void *newArray_vectorlETH2FmUgR(Long_t size, void *p);
   static void delete_vectorlETH2FmUgR(void *p);
   static void deleteArray_vectorlETH2FmUgR(void *p);
   static void destruct_vectorlETH2FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH2F*>*)
   {
      vector<TH2F*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH2F*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH2F*>", -2, "vector", 471,
                  typeid(vector<TH2F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH2FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH2F*>) );
      instance.SetNew(&new_vectorlETH2FmUgR);
      instance.SetNewArray(&newArray_vectorlETH2FmUgR);
      instance.SetDelete(&delete_vectorlETH2FmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH2FmUgR);
      instance.SetDestructor(&destruct_vectorlETH2FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH2F*> >()));

      ::ROOT::AddClassAlternate("vector<TH2F*>","std::__1::vector<TH2F*, std::__1::allocator<TH2F*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH2F*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH2FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH2F*>*)nullptr)->GetClass();
      vectorlETH2FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH2FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH2FmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH2F*> : new vector<TH2F*>;
   }
   static void *newArray_vectorlETH2FmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH2F*>[nElements] : new vector<TH2F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH2FmUgR(void *p) {
      delete ((vector<TH2F*>*)p);
   }
   static void deleteArray_vectorlETH2FmUgR(void *p) {
      delete [] ((vector<TH2F*>*)p);
   }
   static void destruct_vectorlETH2FmUgR(void *p) {
      typedef vector<TH2F*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH2F*>

namespace ROOT {
   static TClass *vectorlETH1FmUgR_Dictionary();
   static void vectorlETH1FmUgR_TClassManip(TClass*);
   static void *new_vectorlETH1FmUgR(void *p = nullptr);
   static void *newArray_vectorlETH1FmUgR(Long_t size, void *p);
   static void delete_vectorlETH1FmUgR(void *p);
   static void deleteArray_vectorlETH1FmUgR(void *p);
   static void destruct_vectorlETH1FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1F*>*)
   {
      vector<TH1F*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1F*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1F*>", -2, "vector", 471,
                  typeid(vector<TH1F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH1F*>) );
      instance.SetNew(&new_vectorlETH1FmUgR);
      instance.SetNewArray(&newArray_vectorlETH1FmUgR);
      instance.SetDelete(&delete_vectorlETH1FmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1FmUgR);
      instance.SetDestructor(&destruct_vectorlETH1FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1F*> >()));

      ::ROOT::AddClassAlternate("vector<TH1F*>","std::__1::vector<TH1F*, std::__1::allocator<TH1F*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH1F*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1F*>*)nullptr)->GetClass();
      vectorlETH1FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1FmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F*> : new vector<TH1F*>;
   }
   static void *newArray_vectorlETH1FmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F*>[nElements] : new vector<TH1F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1FmUgR(void *p) {
      delete ((vector<TH1F*>*)p);
   }
   static void deleteArray_vectorlETH1FmUgR(void *p) {
      delete [] ((vector<TH1F*>*)p);
   }
   static void destruct_vectorlETH1FmUgR(void *p) {
      typedef vector<TH1F*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1F*>

namespace ROOT {
   static TClass *vectorlETGraphmUgR_Dictionary();
   static void vectorlETGraphmUgR_TClassManip(TClass*);
   static void *new_vectorlETGraphmUgR(void *p = nullptr);
   static void *newArray_vectorlETGraphmUgR(Long_t size, void *p);
   static void delete_vectorlETGraphmUgR(void *p);
   static void deleteArray_vectorlETGraphmUgR(void *p);
   static void destruct_vectorlETGraphmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TGraph*>*)
   {
      vector<TGraph*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TGraph*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TGraph*>", -2, "vector", 471,
                  typeid(vector<TGraph*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETGraphmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TGraph*>) );
      instance.SetNew(&new_vectorlETGraphmUgR);
      instance.SetNewArray(&newArray_vectorlETGraphmUgR);
      instance.SetDelete(&delete_vectorlETGraphmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETGraphmUgR);
      instance.SetDestructor(&destruct_vectorlETGraphmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TGraph*> >()));

      ::ROOT::AddClassAlternate("vector<TGraph*>","std::__1::vector<TGraph*, std::__1::allocator<TGraph*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TGraph*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETGraphmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TGraph*>*)nullptr)->GetClass();
      vectorlETGraphmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETGraphmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETGraphmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TGraph*> : new vector<TGraph*>;
   }
   static void *newArray_vectorlETGraphmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TGraph*>[nElements] : new vector<TGraph*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETGraphmUgR(void *p) {
      delete ((vector<TGraph*>*)p);
   }
   static void deleteArray_vectorlETGraphmUgR(void *p) {
      delete [] ((vector<TGraph*>*)p);
   }
   static void destruct_vectorlETGraphmUgR(void *p) {
      typedef vector<TGraph*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TGraph*>

namespace ROOT {
   static TClass *vectorlETCutGmUgR_Dictionary();
   static void vectorlETCutGmUgR_TClassManip(TClass*);
   static void *new_vectorlETCutGmUgR(void *p = nullptr);
   static void *newArray_vectorlETCutGmUgR(Long_t size, void *p);
   static void delete_vectorlETCutGmUgR(void *p);
   static void deleteArray_vectorlETCutGmUgR(void *p);
   static void destruct_vectorlETCutGmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TCutG*>*)
   {
      vector<TCutG*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TCutG*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TCutG*>", -2, "vector", 471,
                  typeid(vector<TCutG*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETCutGmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TCutG*>) );
      instance.SetNew(&new_vectorlETCutGmUgR);
      instance.SetNewArray(&newArray_vectorlETCutGmUgR);
      instance.SetDelete(&delete_vectorlETCutGmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETCutGmUgR);
      instance.SetDestructor(&destruct_vectorlETCutGmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TCutG*> >()));

      ::ROOT::AddClassAlternate("vector<TCutG*>","std::__1::vector<TCutG*, std::__1::allocator<TCutG*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TCutG*>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETCutGmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TCutG*>*)nullptr)->GetClass();
      vectorlETCutGmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETCutGmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETCutGmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TCutG*> : new vector<TCutG*>;
   }
   static void *newArray_vectorlETCutGmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TCutG*>[nElements] : new vector<TCutG*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETCutGmUgR(void *p) {
      delete ((vector<TCutG*>*)p);
   }
   static void deleteArray_vectorlETCutGmUgR(void *p) {
      delete [] ((vector<TCutG*>*)p);
   }
   static void destruct_vectorlETCutGmUgR(void *p) {
      typedef vector<TCutG*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TCutG*>

namespace ROOT {
   static TClass *vectorlEISSZeroDegreeEvtgR_Dictionary();
   static void vectorlEISSZeroDegreeEvtgR_TClassManip(TClass*);
   static void *new_vectorlEISSZeroDegreeEvtgR(void *p = nullptr);
   static void *newArray_vectorlEISSZeroDegreeEvtgR(Long_t size, void *p);
   static void delete_vectorlEISSZeroDegreeEvtgR(void *p);
   static void deleteArray_vectorlEISSZeroDegreeEvtgR(void *p);
   static void destruct_vectorlEISSZeroDegreeEvtgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ISSZeroDegreeEvt>*)
   {
      vector<ISSZeroDegreeEvt> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ISSZeroDegreeEvt>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ISSZeroDegreeEvt>", -2, "vector", 471,
                  typeid(vector<ISSZeroDegreeEvt>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEISSZeroDegreeEvtgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ISSZeroDegreeEvt>) );
      instance.SetNew(&new_vectorlEISSZeroDegreeEvtgR);
      instance.SetNewArray(&newArray_vectorlEISSZeroDegreeEvtgR);
      instance.SetDelete(&delete_vectorlEISSZeroDegreeEvtgR);
      instance.SetDeleteArray(&deleteArray_vectorlEISSZeroDegreeEvtgR);
      instance.SetDestructor(&destruct_vectorlEISSZeroDegreeEvtgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ISSZeroDegreeEvt> >()));

      ::ROOT::AddClassAlternate("vector<ISSZeroDegreeEvt>","std::__1::vector<ISSZeroDegreeEvt, std::__1::allocator<ISSZeroDegreeEvt> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ISSZeroDegreeEvt>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEISSZeroDegreeEvtgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ISSZeroDegreeEvt>*)nullptr)->GetClass();
      vectorlEISSZeroDegreeEvtgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEISSZeroDegreeEvtgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEISSZeroDegreeEvtgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSZeroDegreeEvt> : new vector<ISSZeroDegreeEvt>;
   }
   static void *newArray_vectorlEISSZeroDegreeEvtgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSZeroDegreeEvt>[nElements] : new vector<ISSZeroDegreeEvt>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEISSZeroDegreeEvtgR(void *p) {
      delete ((vector<ISSZeroDegreeEvt>*)p);
   }
   static void deleteArray_vectorlEISSZeroDegreeEvtgR(void *p) {
      delete [] ((vector<ISSZeroDegreeEvt>*)p);
   }
   static void destruct_vectorlEISSZeroDegreeEvtgR(void *p) {
      typedef vector<ISSZeroDegreeEvt> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ISSZeroDegreeEvt>

namespace ROOT {
   static TClass *vectorlEISSRecoilEvtgR_Dictionary();
   static void vectorlEISSRecoilEvtgR_TClassManip(TClass*);
   static void *new_vectorlEISSRecoilEvtgR(void *p = nullptr);
   static void *newArray_vectorlEISSRecoilEvtgR(Long_t size, void *p);
   static void delete_vectorlEISSRecoilEvtgR(void *p);
   static void deleteArray_vectorlEISSRecoilEvtgR(void *p);
   static void destruct_vectorlEISSRecoilEvtgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ISSRecoilEvt>*)
   {
      vector<ISSRecoilEvt> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ISSRecoilEvt>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ISSRecoilEvt>", -2, "vector", 471,
                  typeid(vector<ISSRecoilEvt>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEISSRecoilEvtgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ISSRecoilEvt>) );
      instance.SetNew(&new_vectorlEISSRecoilEvtgR);
      instance.SetNewArray(&newArray_vectorlEISSRecoilEvtgR);
      instance.SetDelete(&delete_vectorlEISSRecoilEvtgR);
      instance.SetDeleteArray(&deleteArray_vectorlEISSRecoilEvtgR);
      instance.SetDestructor(&destruct_vectorlEISSRecoilEvtgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ISSRecoilEvt> >()));

      ::ROOT::AddClassAlternate("vector<ISSRecoilEvt>","std::__1::vector<ISSRecoilEvt, std::__1::allocator<ISSRecoilEvt> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ISSRecoilEvt>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEISSRecoilEvtgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ISSRecoilEvt>*)nullptr)->GetClass();
      vectorlEISSRecoilEvtgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEISSRecoilEvtgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEISSRecoilEvtgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSRecoilEvt> : new vector<ISSRecoilEvt>;
   }
   static void *newArray_vectorlEISSRecoilEvtgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSRecoilEvt>[nElements] : new vector<ISSRecoilEvt>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEISSRecoilEvtgR(void *p) {
      delete ((vector<ISSRecoilEvt>*)p);
   }
   static void deleteArray_vectorlEISSRecoilEvtgR(void *p) {
      delete [] ((vector<ISSRecoilEvt>*)p);
   }
   static void destruct_vectorlEISSRecoilEvtgR(void *p) {
      typedef vector<ISSRecoilEvt> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ISSRecoilEvt>

namespace ROOT {
   static TClass *vectorlEISSMwpcEvtgR_Dictionary();
   static void vectorlEISSMwpcEvtgR_TClassManip(TClass*);
   static void *new_vectorlEISSMwpcEvtgR(void *p = nullptr);
   static void *newArray_vectorlEISSMwpcEvtgR(Long_t size, void *p);
   static void delete_vectorlEISSMwpcEvtgR(void *p);
   static void deleteArray_vectorlEISSMwpcEvtgR(void *p);
   static void destruct_vectorlEISSMwpcEvtgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ISSMwpcEvt>*)
   {
      vector<ISSMwpcEvt> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ISSMwpcEvt>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ISSMwpcEvt>", -2, "vector", 471,
                  typeid(vector<ISSMwpcEvt>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEISSMwpcEvtgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ISSMwpcEvt>) );
      instance.SetNew(&new_vectorlEISSMwpcEvtgR);
      instance.SetNewArray(&newArray_vectorlEISSMwpcEvtgR);
      instance.SetDelete(&delete_vectorlEISSMwpcEvtgR);
      instance.SetDeleteArray(&deleteArray_vectorlEISSMwpcEvtgR);
      instance.SetDestructor(&destruct_vectorlEISSMwpcEvtgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ISSMwpcEvt> >()));

      ::ROOT::AddClassAlternate("vector<ISSMwpcEvt>","std::__1::vector<ISSMwpcEvt, std::__1::allocator<ISSMwpcEvt> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ISSMwpcEvt>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEISSMwpcEvtgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ISSMwpcEvt>*)nullptr)->GetClass();
      vectorlEISSMwpcEvtgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEISSMwpcEvtgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEISSMwpcEvtgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSMwpcEvt> : new vector<ISSMwpcEvt>;
   }
   static void *newArray_vectorlEISSMwpcEvtgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSMwpcEvt>[nElements] : new vector<ISSMwpcEvt>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEISSMwpcEvtgR(void *p) {
      delete ((vector<ISSMwpcEvt>*)p);
   }
   static void deleteArray_vectorlEISSMwpcEvtgR(void *p) {
      delete [] ((vector<ISSMwpcEvt>*)p);
   }
   static void destruct_vectorlEISSMwpcEvtgR(void *p) {
      typedef vector<ISSMwpcEvt> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ISSMwpcEvt>

namespace ROOT {
   static TClass *vectorlEISSInfoDatagR_Dictionary();
   static void vectorlEISSInfoDatagR_TClassManip(TClass*);
   static void *new_vectorlEISSInfoDatagR(void *p = nullptr);
   static void *newArray_vectorlEISSInfoDatagR(Long_t size, void *p);
   static void delete_vectorlEISSInfoDatagR(void *p);
   static void deleteArray_vectorlEISSInfoDatagR(void *p);
   static void destruct_vectorlEISSInfoDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ISSInfoData>*)
   {
      vector<ISSInfoData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ISSInfoData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ISSInfoData>", -2, "vector", 471,
                  typeid(vector<ISSInfoData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEISSInfoDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ISSInfoData>) );
      instance.SetNew(&new_vectorlEISSInfoDatagR);
      instance.SetNewArray(&newArray_vectorlEISSInfoDatagR);
      instance.SetDelete(&delete_vectorlEISSInfoDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEISSInfoDatagR);
      instance.SetDestructor(&destruct_vectorlEISSInfoDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ISSInfoData> >()));

      ::ROOT::AddClassAlternate("vector<ISSInfoData>","std::__1::vector<ISSInfoData, std::__1::allocator<ISSInfoData> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ISSInfoData>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEISSInfoDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ISSInfoData>*)nullptr)->GetClass();
      vectorlEISSInfoDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEISSInfoDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEISSInfoDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSInfoData> : new vector<ISSInfoData>;
   }
   static void *newArray_vectorlEISSInfoDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSInfoData>[nElements] : new vector<ISSInfoData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEISSInfoDatagR(void *p) {
      delete ((vector<ISSInfoData>*)p);
   }
   static void deleteArray_vectorlEISSInfoDatagR(void *p) {
      delete [] ((vector<ISSInfoData>*)p);
   }
   static void destruct_vectorlEISSInfoDatagR(void *p) {
      typedef vector<ISSInfoData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ISSInfoData>

namespace ROOT {
   static TClass *vectorlEISSElumEvtgR_Dictionary();
   static void vectorlEISSElumEvtgR_TClassManip(TClass*);
   static void *new_vectorlEISSElumEvtgR(void *p = nullptr);
   static void *newArray_vectorlEISSElumEvtgR(Long_t size, void *p);
   static void delete_vectorlEISSElumEvtgR(void *p);
   static void deleteArray_vectorlEISSElumEvtgR(void *p);
   static void destruct_vectorlEISSElumEvtgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ISSElumEvt>*)
   {
      vector<ISSElumEvt> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ISSElumEvt>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ISSElumEvt>", -2, "vector", 471,
                  typeid(vector<ISSElumEvt>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEISSElumEvtgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ISSElumEvt>) );
      instance.SetNew(&new_vectorlEISSElumEvtgR);
      instance.SetNewArray(&newArray_vectorlEISSElumEvtgR);
      instance.SetDelete(&delete_vectorlEISSElumEvtgR);
      instance.SetDeleteArray(&deleteArray_vectorlEISSElumEvtgR);
      instance.SetDestructor(&destruct_vectorlEISSElumEvtgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ISSElumEvt> >()));

      ::ROOT::AddClassAlternate("vector<ISSElumEvt>","std::__1::vector<ISSElumEvt, std::__1::allocator<ISSElumEvt> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ISSElumEvt>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEISSElumEvtgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ISSElumEvt>*)nullptr)->GetClass();
      vectorlEISSElumEvtgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEISSElumEvtgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEISSElumEvtgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSElumEvt> : new vector<ISSElumEvt>;
   }
   static void *newArray_vectorlEISSElumEvtgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSElumEvt>[nElements] : new vector<ISSElumEvt>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEISSElumEvtgR(void *p) {
      delete ((vector<ISSElumEvt>*)p);
   }
   static void deleteArray_vectorlEISSElumEvtgR(void *p) {
      delete [] ((vector<ISSElumEvt>*)p);
   }
   static void destruct_vectorlEISSElumEvtgR(void *p) {
      typedef vector<ISSElumEvt> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ISSElumEvt>

namespace ROOT {
   static TClass *vectorlEISSCaenDatagR_Dictionary();
   static void vectorlEISSCaenDatagR_TClassManip(TClass*);
   static void *new_vectorlEISSCaenDatagR(void *p = nullptr);
   static void *newArray_vectorlEISSCaenDatagR(Long_t size, void *p);
   static void delete_vectorlEISSCaenDatagR(void *p);
   static void deleteArray_vectorlEISSCaenDatagR(void *p);
   static void destruct_vectorlEISSCaenDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ISSCaenData>*)
   {
      vector<ISSCaenData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ISSCaenData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ISSCaenData>", -2, "vector", 471,
                  typeid(vector<ISSCaenData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEISSCaenDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ISSCaenData>) );
      instance.SetNew(&new_vectorlEISSCaenDatagR);
      instance.SetNewArray(&newArray_vectorlEISSCaenDatagR);
      instance.SetDelete(&delete_vectorlEISSCaenDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEISSCaenDatagR);
      instance.SetDestructor(&destruct_vectorlEISSCaenDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ISSCaenData> >()));

      ::ROOT::AddClassAlternate("vector<ISSCaenData>","std::__1::vector<ISSCaenData, std::__1::allocator<ISSCaenData> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ISSCaenData>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEISSCaenDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ISSCaenData>*)nullptr)->GetClass();
      vectorlEISSCaenDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEISSCaenDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEISSCaenDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSCaenData> : new vector<ISSCaenData>;
   }
   static void *newArray_vectorlEISSCaenDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSCaenData>[nElements] : new vector<ISSCaenData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEISSCaenDatagR(void *p) {
      delete ((vector<ISSCaenData>*)p);
   }
   static void deleteArray_vectorlEISSCaenDatagR(void *p) {
      delete [] ((vector<ISSCaenData>*)p);
   }
   static void destruct_vectorlEISSCaenDatagR(void *p) {
      typedef vector<ISSCaenData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ISSCaenData>

namespace ROOT {
   static TClass *vectorlEISSAsicDatagR_Dictionary();
   static void vectorlEISSAsicDatagR_TClassManip(TClass*);
   static void *new_vectorlEISSAsicDatagR(void *p = nullptr);
   static void *newArray_vectorlEISSAsicDatagR(Long_t size, void *p);
   static void delete_vectorlEISSAsicDatagR(void *p);
   static void deleteArray_vectorlEISSAsicDatagR(void *p);
   static void destruct_vectorlEISSAsicDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ISSAsicData>*)
   {
      vector<ISSAsicData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ISSAsicData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ISSAsicData>", -2, "vector", 471,
                  typeid(vector<ISSAsicData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEISSAsicDatagR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ISSAsicData>) );
      instance.SetNew(&new_vectorlEISSAsicDatagR);
      instance.SetNewArray(&newArray_vectorlEISSAsicDatagR);
      instance.SetDelete(&delete_vectorlEISSAsicDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEISSAsicDatagR);
      instance.SetDestructor(&destruct_vectorlEISSAsicDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ISSAsicData> >()));

      ::ROOT::AddClassAlternate("vector<ISSAsicData>","std::__1::vector<ISSAsicData, std::__1::allocator<ISSAsicData> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ISSAsicData>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEISSAsicDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ISSAsicData>*)nullptr)->GetClass();
      vectorlEISSAsicDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEISSAsicDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEISSAsicDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSAsicData> : new vector<ISSAsicData>;
   }
   static void *newArray_vectorlEISSAsicDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSAsicData>[nElements] : new vector<ISSAsicData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEISSAsicDatagR(void *p) {
      delete ((vector<ISSAsicData>*)p);
   }
   static void deleteArray_vectorlEISSAsicDatagR(void *p) {
      delete [] ((vector<ISSAsicData>*)p);
   }
   static void destruct_vectorlEISSAsicDatagR(void *p) {
      typedef vector<ISSAsicData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ISSAsicData>

namespace ROOT {
   static TClass *vectorlEISSArrayPEvtgR_Dictionary();
   static void vectorlEISSArrayPEvtgR_TClassManip(TClass*);
   static void *new_vectorlEISSArrayPEvtgR(void *p = nullptr);
   static void *newArray_vectorlEISSArrayPEvtgR(Long_t size, void *p);
   static void delete_vectorlEISSArrayPEvtgR(void *p);
   static void deleteArray_vectorlEISSArrayPEvtgR(void *p);
   static void destruct_vectorlEISSArrayPEvtgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ISSArrayPEvt>*)
   {
      vector<ISSArrayPEvt> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ISSArrayPEvt>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ISSArrayPEvt>", -2, "vector", 471,
                  typeid(vector<ISSArrayPEvt>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEISSArrayPEvtgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ISSArrayPEvt>) );
      instance.SetNew(&new_vectorlEISSArrayPEvtgR);
      instance.SetNewArray(&newArray_vectorlEISSArrayPEvtgR);
      instance.SetDelete(&delete_vectorlEISSArrayPEvtgR);
      instance.SetDeleteArray(&deleteArray_vectorlEISSArrayPEvtgR);
      instance.SetDestructor(&destruct_vectorlEISSArrayPEvtgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ISSArrayPEvt> >()));

      ::ROOT::AddClassAlternate("vector<ISSArrayPEvt>","std::__1::vector<ISSArrayPEvt, std::__1::allocator<ISSArrayPEvt> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ISSArrayPEvt>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEISSArrayPEvtgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ISSArrayPEvt>*)nullptr)->GetClass();
      vectorlEISSArrayPEvtgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEISSArrayPEvtgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEISSArrayPEvtgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSArrayPEvt> : new vector<ISSArrayPEvt>;
   }
   static void *newArray_vectorlEISSArrayPEvtgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSArrayPEvt>[nElements] : new vector<ISSArrayPEvt>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEISSArrayPEvtgR(void *p) {
      delete ((vector<ISSArrayPEvt>*)p);
   }
   static void deleteArray_vectorlEISSArrayPEvtgR(void *p) {
      delete [] ((vector<ISSArrayPEvt>*)p);
   }
   static void destruct_vectorlEISSArrayPEvtgR(void *p) {
      typedef vector<ISSArrayPEvt> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ISSArrayPEvt>

namespace ROOT {
   static TClass *vectorlEISSArrayEvtgR_Dictionary();
   static void vectorlEISSArrayEvtgR_TClassManip(TClass*);
   static void *new_vectorlEISSArrayEvtgR(void *p = nullptr);
   static void *newArray_vectorlEISSArrayEvtgR(Long_t size, void *p);
   static void delete_vectorlEISSArrayEvtgR(void *p);
   static void deleteArray_vectorlEISSArrayEvtgR(void *p);
   static void destruct_vectorlEISSArrayEvtgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ISSArrayEvt>*)
   {
      vector<ISSArrayEvt> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ISSArrayEvt>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ISSArrayEvt>", -2, "vector", 471,
                  typeid(vector<ISSArrayEvt>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEISSArrayEvtgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ISSArrayEvt>) );
      instance.SetNew(&new_vectorlEISSArrayEvtgR);
      instance.SetNewArray(&newArray_vectorlEISSArrayEvtgR);
      instance.SetDelete(&delete_vectorlEISSArrayEvtgR);
      instance.SetDeleteArray(&deleteArray_vectorlEISSArrayEvtgR);
      instance.SetDestructor(&destruct_vectorlEISSArrayEvtgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ISSArrayEvt> >()));

      ::ROOT::AddClassAlternate("vector<ISSArrayEvt>","std::__1::vector<ISSArrayEvt, std::__1::allocator<ISSArrayEvt> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ISSArrayEvt>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEISSArrayEvtgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ISSArrayEvt>*)nullptr)->GetClass();
      vectorlEISSArrayEvtgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEISSArrayEvtgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEISSArrayEvtgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSArrayEvt> : new vector<ISSArrayEvt>;
   }
   static void *newArray_vectorlEISSArrayEvtgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ISSArrayEvt>[nElements] : new vector<ISSArrayEvt>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEISSArrayEvtgR(void *p) {
      delete ((vector<ISSArrayEvt>*)p);
   }
   static void deleteArray_vectorlEISSArrayEvtgR(void *p) {
      delete [] ((vector<ISSArrayEvt>*)p);
   }
   static void destruct_vectorlEISSArrayEvtgR(void *p) {
      typedef vector<ISSArrayEvt> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ISSArrayEvt>

namespace ROOT {
   static TClass *maplEstringcOdoublegR_Dictionary();
   static void maplEstringcOdoublegR_TClassManip(TClass*);
   static void *new_maplEstringcOdoublegR(void *p = nullptr);
   static void *newArray_maplEstringcOdoublegR(Long_t size, void *p);
   static void delete_maplEstringcOdoublegR(void *p);
   static void deleteArray_maplEstringcOdoublegR(void *p);
   static void destruct_maplEstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,double>*)
   {
      map<string,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,double>", -2, "map", 900,
                  typeid(map<string,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,double>) );
      instance.SetNew(&new_maplEstringcOdoublegR);
      instance.SetNewArray(&newArray_maplEstringcOdoublegR);
      instance.SetDelete(&delete_maplEstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOdoublegR);
      instance.SetDestructor(&destruct_maplEstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,double> >()));

      ::ROOT::AddClassAlternate("map<string,double>","std::__1::map<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >, double, std::__1::less<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > >, std::__1::allocator<std::__1::pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > const, double> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,double>*)nullptr); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,double>*)nullptr)->GetClass();
      maplEstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,double> : new map<string,double>;
   }
   static void *newArray_maplEstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,double>[nElements] : new map<string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOdoublegR(void *p) {
      delete ((map<string,double>*)p);
   }
   static void deleteArray_maplEstringcOdoublegR(void *p) {
      delete [] ((map<string,double>*)p);
   }
   static void destruct_maplEstringcOdoublegR(void *p) {
      typedef map<string,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,double>

namespace {
  void TriggerDictionaryInitialization_iss_sortDict_Impl() {
    static const char* headers[] = {
"./include/AutoCalibrator.hh",
"./include/Calibration.hh",
"./include/CommandLineInterface.hh",
"./include/Converter.hh",
"./include/DataPackets.hh",
"./include/Histogrammer.hh",
"./include/ISSEvts.hh",
"./include/ISSGUI.hh",
"./include/Reaction.hh",
"./include/Settings.hh",
"./include/TimeSorter.hh",
"./include/EventBuilder.hh",
"./include/FitFunctions.hh",
nullptr
    };
    static const char* includePaths[] = {
"./include",
"/usr/local/Cellar/root/6.26.04_1/include/root",
"/Users/daria/Documents/iss/ISSSort/ISSSort_2.0/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "iss_sortDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$Settings.hh")))  __attribute__((annotate("$clingAutoload$./include/AutoCalibrator.hh")))  ISSSettings;
class __attribute__((annotate("$clingAutoload$Calibration.hh")))  __attribute__((annotate("$clingAutoload$./include/AutoCalibrator.hh")))  ISSCalibration;
class __attribute__((annotate("$clingAutoload$Reaction.hh")))  __attribute__((annotate("$clingAutoload$./include/AutoCalibrator.hh")))  ISSParticle;
class __attribute__((annotate("$clingAutoload$Reaction.hh")))  __attribute__((annotate("$clingAutoload$./include/AutoCalibrator.hh")))  ISSReaction;
class __attribute__((annotate("$clingAutoload$DataPackets.hh")))  __attribute__((annotate("$clingAutoload$./include/Converter.hh")))  ISSAsicData;
class __attribute__((annotate("$clingAutoload$DataPackets.hh")))  __attribute__((annotate("$clingAutoload$./include/Converter.hh")))  ISSCaenData;
class __attribute__((annotate("$clingAutoload$DataPackets.hh")))  __attribute__((annotate("$clingAutoload$./include/Converter.hh")))  ISSInfoData;
class __attribute__((annotate("$clingAutoload$DataPackets.hh")))  __attribute__((annotate("$clingAutoload$./include/Converter.hh")))  ISSDataPackets;
class __attribute__((annotate("$clingAutoload$./include/Converter.hh")))  ISSConverter;
class __attribute__((annotate("$clingAutoload$ISSEvts.hh")))  __attribute__((annotate("$clingAutoload$./include/Histogrammer.hh")))  ISSArrayEvt;
class __attribute__((annotate("$clingAutoload$ISSEvts.hh")))  __attribute__((annotate("$clingAutoload$./include/Histogrammer.hh")))  ISSArrayPEvt;
class __attribute__((annotate("$clingAutoload$ISSEvts.hh")))  __attribute__((annotate("$clingAutoload$./include/Histogrammer.hh")))  ISSRecoilEvt;
class __attribute__((annotate("$clingAutoload$ISSEvts.hh")))  __attribute__((annotate("$clingAutoload$./include/Histogrammer.hh")))  ISSMwpcEvt;
class __attribute__((annotate("$clingAutoload$ISSEvts.hh")))  __attribute__((annotate("$clingAutoload$./include/Histogrammer.hh")))  ISSElumEvt;
class __attribute__((annotate("$clingAutoload$ISSEvts.hh")))  __attribute__((annotate("$clingAutoload$./include/Histogrammer.hh")))  ISSZeroDegreeEvt;
class __attribute__((annotate("$clingAutoload$ISSEvts.hh")))  __attribute__((annotate("$clingAutoload$./include/Histogrammer.hh")))  ISSEvts;
class __attribute__((annotate("$clingAutoload$TimeSorter.hh")))  __attribute__((annotate("$clingAutoload$./include/ISSGUI.hh")))  ISSTimeSorter;
class __attribute__((annotate("$clingAutoload$EventBuilder.hh")))  __attribute__((annotate("$clingAutoload$./include/ISSGUI.hh")))  ISSEventBuilder;
class __attribute__((annotate("$clingAutoload$./include/ISSGUI.hh")))  ISSDialog;
class __attribute__((annotate("$clingAutoload$./include/ISSGUI.hh")))  ISSGUI;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "iss_sortDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "./include/AutoCalibrator.hh"
#include "./include/Calibration.hh"
#include "./include/CommandLineInterface.hh"
#include "./include/Converter.hh"
#include "./include/DataPackets.hh"
#include "./include/Histogrammer.hh"
#include "./include/ISSEvts.hh"
#include "./include/ISSGUI.hh"
#include "./include/Reaction.hh"
#include "./include/Settings.hh"
#include "./include/TimeSorter.hh"
#include "./include/EventBuilder.hh"
#include "./include/FitFunctions.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ISSArrayEvt", payloadCode, "@",
"ISSArrayPEvt", payloadCode, "@",
"ISSAsicData", payloadCode, "@",
"ISSCaenData", payloadCode, "@",
"ISSCalibration", payloadCode, "@",
"ISSConverter", payloadCode, "@",
"ISSDataPackets", payloadCode, "@",
"ISSDialog", payloadCode, "@",
"ISSElumEvt", payloadCode, "@",
"ISSEventBuilder", payloadCode, "@",
"ISSEvts", payloadCode, "@",
"ISSGUI", payloadCode, "@",
"ISSInfoData", payloadCode, "@",
"ISSMwpcEvt", payloadCode, "@",
"ISSParticle", payloadCode, "@",
"ISSReaction", payloadCode, "@",
"ISSRecoilEvt", payloadCode, "@",
"ISSSettings", payloadCode, "@",
"ISSTimeSorter", payloadCode, "@",
"ISSZeroDegreeEvt", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("iss_sortDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_iss_sortDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_iss_sortDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_iss_sortDict() {
  TriggerDictionaryInitialization_iss_sortDict_Impl();
}
