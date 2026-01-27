// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME MollerPolDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
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
#include "MollerPolCalorimeter.h"
#include "MollerPolApparatus.h"
#include "Scaler9250.h"
#include "MollerPolScalerEvtHandler.h"
#include "MollerPolHelicityDecoderBoard.h"
#include "gem/MPDModule.h"
#include "gem/MOLLERData.h"
#include "gem/MOLLERElement.h"
#include "gem/MOLLERManager.h"
#include "gem/MOLLERGenericDetector.h"
#include "gem/MOLLERSpectrometer.h"
#include "gem/MOLLERGEMModule.h"
#include "gem/MOLLERGEMTrackerBase.h"
#include "gem/MOLLERGEMSpectrometerTracker.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace MOLLERData {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *MOLLERData_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("MOLLERData", 0 /*version*/, "MOLLERData.h", 7,
                     ::ROOT::Internal::DefineBehavior((void*)nullptr,(void*)nullptr),
                     &MOLLERData_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *MOLLERData_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static void *new_MollerPolCalorimeter(void *p = nullptr);
   static void *newArray_MollerPolCalorimeter(Long_t size, void *p);
   static void delete_MollerPolCalorimeter(void *p);
   static void deleteArray_MollerPolCalorimeter(void *p);
   static void destruct_MollerPolCalorimeter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MollerPolCalorimeter*)
   {
      ::MollerPolCalorimeter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MollerPolCalorimeter >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MollerPolCalorimeter", ::MollerPolCalorimeter::Class_Version(), "MollerPolCalorimeter.h", 13,
                  typeid(::MollerPolCalorimeter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MollerPolCalorimeter::Dictionary, isa_proxy, 4,
                  sizeof(::MollerPolCalorimeter) );
      instance.SetNew(&new_MollerPolCalorimeter);
      instance.SetNewArray(&newArray_MollerPolCalorimeter);
      instance.SetDelete(&delete_MollerPolCalorimeter);
      instance.SetDeleteArray(&deleteArray_MollerPolCalorimeter);
      instance.SetDestructor(&destruct_MollerPolCalorimeter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MollerPolCalorimeter*)
   {
      return GenerateInitInstanceLocal(static_cast<::MollerPolCalorimeter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MollerPolCalorimeter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MollerPolApparatus(void *p = nullptr);
   static void *newArray_MollerPolApparatus(Long_t size, void *p);
   static void delete_MollerPolApparatus(void *p);
   static void deleteArray_MollerPolApparatus(void *p);
   static void destruct_MollerPolApparatus(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MollerPolApparatus*)
   {
      ::MollerPolApparatus *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MollerPolApparatus >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MollerPolApparatus", ::MollerPolApparatus::Class_Version(), "MollerPolApparatus.h", 12,
                  typeid(::MollerPolApparatus), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MollerPolApparatus::Dictionary, isa_proxy, 4,
                  sizeof(::MollerPolApparatus) );
      instance.SetNew(&new_MollerPolApparatus);
      instance.SetNewArray(&newArray_MollerPolApparatus);
      instance.SetDelete(&delete_MollerPolApparatus);
      instance.SetDeleteArray(&deleteArray_MollerPolApparatus);
      instance.SetDestructor(&destruct_MollerPolApparatus);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MollerPolApparatus*)
   {
      return GenerateInitInstanceLocal(static_cast<::MollerPolApparatus*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MollerPolApparatus*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecodercLcLScaler9250(void *p = nullptr);
   static void *newArray_DecodercLcLScaler9250(Long_t size, void *p);
   static void delete_DecodercLcLScaler9250(void *p);
   static void deleteArray_DecodercLcLScaler9250(void *p);
   static void destruct_DecodercLcLScaler9250(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Decoder::Scaler9250*)
   {
      ::Decoder::Scaler9250 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Decoder::Scaler9250 >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Decoder::Scaler9250", ::Decoder::Scaler9250::Class_Version(), "Scaler9250.h", 15,
                  typeid(::Decoder::Scaler9250), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Decoder::Scaler9250::Dictionary, isa_proxy, 4,
                  sizeof(::Decoder::Scaler9250) );
      instance.SetNew(&new_DecodercLcLScaler9250);
      instance.SetNewArray(&newArray_DecodercLcLScaler9250);
      instance.SetDelete(&delete_DecodercLcLScaler9250);
      instance.SetDeleteArray(&deleteArray_DecodercLcLScaler9250);
      instance.SetDestructor(&destruct_DecodercLcLScaler9250);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Decoder::Scaler9250*)
   {
      return GenerateInitInstanceLocal(static_cast<::Decoder::Scaler9250*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Decoder::Scaler9250*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MollerPolScalerEvtHandler(void *p);
   static void deleteArray_MollerPolScalerEvtHandler(void *p);
   static void destruct_MollerPolScalerEvtHandler(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MollerPolScalerEvtHandler*)
   {
      ::MollerPolScalerEvtHandler *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MollerPolScalerEvtHandler >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MollerPolScalerEvtHandler", ::MollerPolScalerEvtHandler::Class_Version(), "MollerPolScalerEvtHandler.h", 42,
                  typeid(::MollerPolScalerEvtHandler), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MollerPolScalerEvtHandler::Dictionary, isa_proxy, 4,
                  sizeof(::MollerPolScalerEvtHandler) );
      instance.SetDelete(&delete_MollerPolScalerEvtHandler);
      instance.SetDeleteArray(&deleteArray_MollerPolScalerEvtHandler);
      instance.SetDestructor(&destruct_MollerPolScalerEvtHandler);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MollerPolScalerEvtHandler*)
   {
      return GenerateInitInstanceLocal(static_cast<::MollerPolScalerEvtHandler*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MollerPolScalerEvtHandler*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MollerPolHelicityDecoderBoard(void *p = nullptr);
   static void *newArray_MollerPolHelicityDecoderBoard(Long_t size, void *p);
   static void delete_MollerPolHelicityDecoderBoard(void *p);
   static void deleteArray_MollerPolHelicityDecoderBoard(void *p);
   static void destruct_MollerPolHelicityDecoderBoard(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MollerPolHelicityDecoderBoard*)
   {
      ::MollerPolHelicityDecoderBoard *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MollerPolHelicityDecoderBoard >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MollerPolHelicityDecoderBoard", ::MollerPolHelicityDecoderBoard::Class_Version(), "MollerPolHelicityDecoderBoard.h", 15,
                  typeid(::MollerPolHelicityDecoderBoard), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MollerPolHelicityDecoderBoard::Dictionary, isa_proxy, 4,
                  sizeof(::MollerPolHelicityDecoderBoard) );
      instance.SetNew(&new_MollerPolHelicityDecoderBoard);
      instance.SetNewArray(&newArray_MollerPolHelicityDecoderBoard);
      instance.SetDelete(&delete_MollerPolHelicityDecoderBoard);
      instance.SetDeleteArray(&deleteArray_MollerPolHelicityDecoderBoard);
      instance.SetDestructor(&destruct_MollerPolHelicityDecoderBoard);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MollerPolHelicityDecoderBoard*)
   {
      return GenerateInitInstanceLocal(static_cast<::MollerPolHelicityDecoderBoard*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MollerPolHelicityDecoderBoard*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DecodercLcLMPDModule(void *p = nullptr);
   static void *newArray_DecodercLcLMPDModule(Long_t size, void *p);
   static void delete_DecodercLcLMPDModule(void *p);
   static void deleteArray_DecodercLcLMPDModule(void *p);
   static void destruct_DecodercLcLMPDModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Decoder::MPDModule*)
   {
      ::Decoder::MPDModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Decoder::MPDModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Decoder::MPDModule", ::Decoder::MPDModule::Class_Version(), "MPDModule.h", 35,
                  typeid(::Decoder::MPDModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Decoder::MPDModule::Dictionary, isa_proxy, 4,
                  sizeof(::Decoder::MPDModule) );
      instance.SetNew(&new_DecodercLcLMPDModule);
      instance.SetNewArray(&newArray_DecodercLcLMPDModule);
      instance.SetDelete(&delete_DecodercLcLMPDModule);
      instance.SetDeleteArray(&deleteArray_DecodercLcLMPDModule);
      instance.SetDestructor(&destruct_DecodercLcLMPDModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Decoder::MPDModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::Decoder::MPDModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Decoder::MPDModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MOLLERElement(void *p = nullptr);
   static void *newArray_MOLLERElement(Long_t size, void *p);
   static void delete_MOLLERElement(void *p);
   static void deleteArray_MOLLERElement(void *p);
   static void destruct_MOLLERElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MOLLERElement*)
   {
      ::MOLLERElement *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MOLLERElement >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MOLLERElement", ::MOLLERElement::Class_Version(), "MOLLERElement.h", 16,
                  typeid(::MOLLERElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MOLLERElement::Dictionary, isa_proxy, 4,
                  sizeof(::MOLLERElement) );
      instance.SetNew(&new_MOLLERElement);
      instance.SetNewArray(&newArray_MOLLERElement);
      instance.SetDelete(&delete_MOLLERElement);
      instance.SetDeleteArray(&deleteArray_MOLLERElement);
      instance.SetDestructor(&destruct_MOLLERElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MOLLERElement*)
   {
      return GenerateInitInstanceLocal(static_cast<::MOLLERElement*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MOLLERElement*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MOLLERManager(void *p = nullptr);
   static void *newArray_MOLLERManager(Long_t size, void *p);
   static void delete_MOLLERManager(void *p);
   static void deleteArray_MOLLERManager(void *p);
   static void destruct_MOLLERManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MOLLERManager*)
   {
      ::MOLLERManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MOLLERManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MOLLERManager", ::MOLLERManager::Class_Version(), "MOLLERManager.h", 16,
                  typeid(::MOLLERManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MOLLERManager::Dictionary, isa_proxy, 4,
                  sizeof(::MOLLERManager) );
      instance.SetNew(&new_MOLLERManager);
      instance.SetNewArray(&newArray_MOLLERManager);
      instance.SetDelete(&delete_MOLLERManager);
      instance.SetDeleteArray(&deleteArray_MOLLERManager);
      instance.SetDestructor(&destruct_MOLLERManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MOLLERManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::MOLLERManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MOLLERManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MOLLERGenericDetector(void *p);
   static void deleteArray_MOLLERGenericDetector(void *p);
   static void destruct_MOLLERGenericDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MOLLERGenericDetector*)
   {
      ::MOLLERGenericDetector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MOLLERGenericDetector >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MOLLERGenericDetector", ::MOLLERGenericDetector::Class_Version(), "MOLLERGenericDetector.h", 90,
                  typeid(::MOLLERGenericDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MOLLERGenericDetector::Dictionary, isa_proxy, 4,
                  sizeof(::MOLLERGenericDetector) );
      instance.SetDelete(&delete_MOLLERGenericDetector);
      instance.SetDeleteArray(&deleteArray_MOLLERGenericDetector);
      instance.SetDestructor(&destruct_MOLLERGenericDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MOLLERGenericDetector*)
   {
      return GenerateInitInstanceLocal(static_cast<::MOLLERGenericDetector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MOLLERGenericDetector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MOLLERSpectrometer(void *p);
   static void deleteArray_MOLLERSpectrometer(void *p);
   static void destruct_MOLLERSpectrometer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MOLLERSpectrometer*)
   {
      ::MOLLERSpectrometer *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MOLLERSpectrometer >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MOLLERSpectrometer", ::MOLLERSpectrometer::Class_Version(), "MOLLERSpectrometer.h", 6,
                  typeid(::MOLLERSpectrometer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MOLLERSpectrometer::Dictionary, isa_proxy, 4,
                  sizeof(::MOLLERSpectrometer) );
      instance.SetDelete(&delete_MOLLERSpectrometer);
      instance.SetDeleteArray(&deleteArray_MOLLERSpectrometer);
      instance.SetDestructor(&destruct_MOLLERSpectrometer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MOLLERSpectrometer*)
   {
      return GenerateInitInstanceLocal(static_cast<::MOLLERSpectrometer*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MOLLERSpectrometer*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_MOLLERGEMModule(void *p);
   static void deleteArray_MOLLERGEMModule(void *p);
   static void destruct_MOLLERGEMModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MOLLERGEMModule*)
   {
      ::MOLLERGEMModule *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MOLLERGEMModule >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MOLLERGEMModule", ::MOLLERGEMModule::Class_Version(), "MOLLERGEMModule.h", 147,
                  typeid(::MOLLERGEMModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MOLLERGEMModule::Dictionary, isa_proxy, 4,
                  sizeof(::MOLLERGEMModule) );
      instance.SetDelete(&delete_MOLLERGEMModule);
      instance.SetDeleteArray(&deleteArray_MOLLERGEMModule);
      instance.SetDestructor(&destruct_MOLLERGEMModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MOLLERGEMModule*)
   {
      return GenerateInitInstanceLocal(static_cast<::MOLLERGEMModule*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MOLLERGEMModule*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *MOLLERGEMTrackerBase_Dictionary();
   static void MOLLERGEMTrackerBase_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MOLLERGEMTrackerBase*)
   {
      ::MOLLERGEMTrackerBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MOLLERGEMTrackerBase));
      static ::ROOT::TGenericClassInfo 
         instance("MOLLERGEMTrackerBase", "MOLLERGEMTrackerBase.h", 27,
                  typeid(::MOLLERGEMTrackerBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MOLLERGEMTrackerBase_Dictionary, isa_proxy, 4,
                  sizeof(::MOLLERGEMTrackerBase) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MOLLERGEMTrackerBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::MOLLERGEMTrackerBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MOLLERGEMTrackerBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MOLLERGEMTrackerBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MOLLERGEMTrackerBase*>(nullptr))->GetClass();
      MOLLERGEMTrackerBase_TClassManip(theClass);
   return theClass;
   }

   static void MOLLERGEMTrackerBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_MOLLERGEMSpectrometerTracker(void *p);
   static void deleteArray_MOLLERGEMSpectrometerTracker(void *p);
   static void destruct_MOLLERGEMSpectrometerTracker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MOLLERGEMSpectrometerTracker*)
   {
      ::MOLLERGEMSpectrometerTracker *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MOLLERGEMSpectrometerTracker >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MOLLERGEMSpectrometerTracker", ::MOLLERGEMSpectrometerTracker::Class_Version(), "MOLLERGEMSpectrometerTracker.h", 16,
                  typeid(::MOLLERGEMSpectrometerTracker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MOLLERGEMSpectrometerTracker::Dictionary, isa_proxy, 4,
                  sizeof(::MOLLERGEMSpectrometerTracker) );
      instance.SetDelete(&delete_MOLLERGEMSpectrometerTracker);
      instance.SetDeleteArray(&deleteArray_MOLLERGEMSpectrometerTracker);
      instance.SetDestructor(&destruct_MOLLERGEMSpectrometerTracker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MOLLERGEMSpectrometerTracker*)
   {
      return GenerateInitInstanceLocal(static_cast<::MOLLERGEMSpectrometerTracker*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MOLLERGEMSpectrometerTracker*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr MollerPolCalorimeter::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MollerPolCalorimeter::Class_Name()
{
   return "MollerPolCalorimeter";
}

//______________________________________________________________________________
const char *MollerPolCalorimeter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MollerPolCalorimeter*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MollerPolCalorimeter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MollerPolCalorimeter*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MollerPolCalorimeter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MollerPolCalorimeter*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MollerPolCalorimeter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MollerPolCalorimeter*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MollerPolApparatus::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MollerPolApparatus::Class_Name()
{
   return "MollerPolApparatus";
}

//______________________________________________________________________________
const char *MollerPolApparatus::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MollerPolApparatus*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MollerPolApparatus::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MollerPolApparatus*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MollerPolApparatus::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MollerPolApparatus*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MollerPolApparatus::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MollerPolApparatus*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace Decoder {
//______________________________________________________________________________
atomic_TClass_ptr Scaler9250::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Scaler9250::Class_Name()
{
   return "Decoder::Scaler9250";
}

//______________________________________________________________________________
const char *Scaler9250::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::Scaler9250*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Scaler9250::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::Scaler9250*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Scaler9250::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::Scaler9250*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Scaler9250::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::Scaler9250*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace Decoder
//______________________________________________________________________________
atomic_TClass_ptr MollerPolScalerEvtHandler::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MollerPolScalerEvtHandler::Class_Name()
{
   return "MollerPolScalerEvtHandler";
}

//______________________________________________________________________________
const char *MollerPolScalerEvtHandler::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MollerPolScalerEvtHandler*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MollerPolScalerEvtHandler::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MollerPolScalerEvtHandler*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MollerPolScalerEvtHandler::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MollerPolScalerEvtHandler*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MollerPolScalerEvtHandler::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MollerPolScalerEvtHandler*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MollerPolHelicityDecoderBoard::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MollerPolHelicityDecoderBoard::Class_Name()
{
   return "MollerPolHelicityDecoderBoard";
}

//______________________________________________________________________________
const char *MollerPolHelicityDecoderBoard::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MollerPolHelicityDecoderBoard*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MollerPolHelicityDecoderBoard::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MollerPolHelicityDecoderBoard*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MollerPolHelicityDecoderBoard::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MollerPolHelicityDecoderBoard*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MollerPolHelicityDecoderBoard::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MollerPolHelicityDecoderBoard*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace Decoder {
//______________________________________________________________________________
atomic_TClass_ptr MPDModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MPDModule::Class_Name()
{
   return "Decoder::MPDModule";
}

//______________________________________________________________________________
const char *MPDModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::MPDModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MPDModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Decoder::MPDModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MPDModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::MPDModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MPDModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Decoder::MPDModule*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace Decoder
//______________________________________________________________________________
atomic_TClass_ptr MOLLERElement::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MOLLERElement::Class_Name()
{
   return "MOLLERElement";
}

//______________________________________________________________________________
const char *MOLLERElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MOLLERElement*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MOLLERElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MOLLERElement*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MOLLERElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MOLLERElement*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MOLLERElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MOLLERElement*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MOLLERManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MOLLERManager::Class_Name()
{
   return "MOLLERManager";
}

//______________________________________________________________________________
const char *MOLLERManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MOLLERManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MOLLERManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MOLLERManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MOLLERManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MOLLERManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MOLLERManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MOLLERManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MOLLERGenericDetector::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MOLLERGenericDetector::Class_Name()
{
   return "MOLLERGenericDetector";
}

//______________________________________________________________________________
const char *MOLLERGenericDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MOLLERGenericDetector*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MOLLERGenericDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MOLLERGenericDetector*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MOLLERGenericDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MOLLERGenericDetector*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MOLLERGenericDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MOLLERGenericDetector*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MOLLERSpectrometer::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MOLLERSpectrometer::Class_Name()
{
   return "MOLLERSpectrometer";
}

//______________________________________________________________________________
const char *MOLLERSpectrometer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MOLLERSpectrometer*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MOLLERSpectrometer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MOLLERSpectrometer*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MOLLERSpectrometer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MOLLERSpectrometer*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MOLLERSpectrometer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MOLLERSpectrometer*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MOLLERGEMModule::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MOLLERGEMModule::Class_Name()
{
   return "MOLLERGEMModule";
}

//______________________________________________________________________________
const char *MOLLERGEMModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MOLLERGEMModule*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MOLLERGEMModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MOLLERGEMModule*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MOLLERGEMModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MOLLERGEMModule*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MOLLERGEMModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MOLLERGEMModule*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MOLLERGEMSpectrometerTracker::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MOLLERGEMSpectrometerTracker::Class_Name()
{
   return "MOLLERGEMSpectrometerTracker";
}

//______________________________________________________________________________
const char *MOLLERGEMSpectrometerTracker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MOLLERGEMSpectrometerTracker*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MOLLERGEMSpectrometerTracker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MOLLERGEMSpectrometerTracker*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MOLLERGEMSpectrometerTracker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MOLLERGEMSpectrometerTracker*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MOLLERGEMSpectrometerTracker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MOLLERGEMSpectrometerTracker*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void MollerPolCalorimeter::Streamer(TBuffer &R__b)
{
   // Stream an object of class MollerPolCalorimeter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MollerPolCalorimeter::Class(),this);
   } else {
      R__b.WriteClassBuffer(MollerPolCalorimeter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MollerPolCalorimeter(void *p) {
      return  p ? new(p) ::MollerPolCalorimeter : new ::MollerPolCalorimeter;
   }
   static void *newArray_MollerPolCalorimeter(Long_t nElements, void *p) {
      return p ? new(p) ::MollerPolCalorimeter[nElements] : new ::MollerPolCalorimeter[nElements];
   }
   // Wrapper around operator delete
   static void delete_MollerPolCalorimeter(void *p) {
      delete (static_cast<::MollerPolCalorimeter*>(p));
   }
   static void deleteArray_MollerPolCalorimeter(void *p) {
      delete [] (static_cast<::MollerPolCalorimeter*>(p));
   }
   static void destruct_MollerPolCalorimeter(void *p) {
      typedef ::MollerPolCalorimeter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MollerPolCalorimeter

//______________________________________________________________________________
void MollerPolApparatus::Streamer(TBuffer &R__b)
{
   // Stream an object of class MollerPolApparatus.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MollerPolApparatus::Class(),this);
   } else {
      R__b.WriteClassBuffer(MollerPolApparatus::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MollerPolApparatus(void *p) {
      return  p ? new(p) ::MollerPolApparatus : new ::MollerPolApparatus;
   }
   static void *newArray_MollerPolApparatus(Long_t nElements, void *p) {
      return p ? new(p) ::MollerPolApparatus[nElements] : new ::MollerPolApparatus[nElements];
   }
   // Wrapper around operator delete
   static void delete_MollerPolApparatus(void *p) {
      delete (static_cast<::MollerPolApparatus*>(p));
   }
   static void deleteArray_MollerPolApparatus(void *p) {
      delete [] (static_cast<::MollerPolApparatus*>(p));
   }
   static void destruct_MollerPolApparatus(void *p) {
      typedef ::MollerPolApparatus current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MollerPolApparatus

namespace Decoder {
//______________________________________________________________________________
void Scaler9250::Streamer(TBuffer &R__b)
{
   // Stream an object of class Decoder::Scaler9250.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Decoder::Scaler9250::Class(),this);
   } else {
      R__b.WriteClassBuffer(Decoder::Scaler9250::Class(),this);
   }
}

} // namespace Decoder
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecodercLcLScaler9250(void *p) {
      return  p ? new(p) ::Decoder::Scaler9250 : new ::Decoder::Scaler9250;
   }
   static void *newArray_DecodercLcLScaler9250(Long_t nElements, void *p) {
      return p ? new(p) ::Decoder::Scaler9250[nElements] : new ::Decoder::Scaler9250[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecodercLcLScaler9250(void *p) {
      delete (static_cast<::Decoder::Scaler9250*>(p));
   }
   static void deleteArray_DecodercLcLScaler9250(void *p) {
      delete [] (static_cast<::Decoder::Scaler9250*>(p));
   }
   static void destruct_DecodercLcLScaler9250(void *p) {
      typedef ::Decoder::Scaler9250 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Decoder::Scaler9250

//______________________________________________________________________________
void MollerPolScalerEvtHandler::Streamer(TBuffer &R__b)
{
   // Stream an object of class MollerPolScalerEvtHandler.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MollerPolScalerEvtHandler::Class(),this);
   } else {
      R__b.WriteClassBuffer(MollerPolScalerEvtHandler::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MollerPolScalerEvtHandler(void *p) {
      delete (static_cast<::MollerPolScalerEvtHandler*>(p));
   }
   static void deleteArray_MollerPolScalerEvtHandler(void *p) {
      delete [] (static_cast<::MollerPolScalerEvtHandler*>(p));
   }
   static void destruct_MollerPolScalerEvtHandler(void *p) {
      typedef ::MollerPolScalerEvtHandler current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MollerPolScalerEvtHandler

//______________________________________________________________________________
void MollerPolHelicityDecoderBoard::Streamer(TBuffer &R__b)
{
   // Stream an object of class MollerPolHelicityDecoderBoard.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MollerPolHelicityDecoderBoard::Class(),this);
   } else {
      R__b.WriteClassBuffer(MollerPolHelicityDecoderBoard::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MollerPolHelicityDecoderBoard(void *p) {
      return  p ? new(p) ::MollerPolHelicityDecoderBoard : new ::MollerPolHelicityDecoderBoard;
   }
   static void *newArray_MollerPolHelicityDecoderBoard(Long_t nElements, void *p) {
      return p ? new(p) ::MollerPolHelicityDecoderBoard[nElements] : new ::MollerPolHelicityDecoderBoard[nElements];
   }
   // Wrapper around operator delete
   static void delete_MollerPolHelicityDecoderBoard(void *p) {
      delete (static_cast<::MollerPolHelicityDecoderBoard*>(p));
   }
   static void deleteArray_MollerPolHelicityDecoderBoard(void *p) {
      delete [] (static_cast<::MollerPolHelicityDecoderBoard*>(p));
   }
   static void destruct_MollerPolHelicityDecoderBoard(void *p) {
      typedef ::MollerPolHelicityDecoderBoard current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MollerPolHelicityDecoderBoard

namespace Decoder {
//______________________________________________________________________________
void MPDModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class Decoder::MPDModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Decoder::MPDModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(Decoder::MPDModule::Class(),this);
   }
}

} // namespace Decoder
namespace ROOT {
   // Wrappers around operator new
   static void *new_DecodercLcLMPDModule(void *p) {
      return  p ? new(p) ::Decoder::MPDModule : new ::Decoder::MPDModule;
   }
   static void *newArray_DecodercLcLMPDModule(Long_t nElements, void *p) {
      return p ? new(p) ::Decoder::MPDModule[nElements] : new ::Decoder::MPDModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_DecodercLcLMPDModule(void *p) {
      delete (static_cast<::Decoder::MPDModule*>(p));
   }
   static void deleteArray_DecodercLcLMPDModule(void *p) {
      delete [] (static_cast<::Decoder::MPDModule*>(p));
   }
   static void destruct_DecodercLcLMPDModule(void *p) {
      typedef ::Decoder::MPDModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::Decoder::MPDModule

//______________________________________________________________________________
void MOLLERElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class MOLLERElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MOLLERElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(MOLLERElement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MOLLERElement(void *p) {
      return  p ? new(p) ::MOLLERElement : new ::MOLLERElement;
   }
   static void *newArray_MOLLERElement(Long_t nElements, void *p) {
      return p ? new(p) ::MOLLERElement[nElements] : new ::MOLLERElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_MOLLERElement(void *p) {
      delete (static_cast<::MOLLERElement*>(p));
   }
   static void deleteArray_MOLLERElement(void *p) {
      delete [] (static_cast<::MOLLERElement*>(p));
   }
   static void destruct_MOLLERElement(void *p) {
      typedef ::MOLLERElement current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MOLLERElement

//______________________________________________________________________________
void MOLLERManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class MOLLERManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MOLLERManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(MOLLERManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MOLLERManager(void *p) {
      return  p ? new(p) ::MOLLERManager : new ::MOLLERManager;
   }
   static void *newArray_MOLLERManager(Long_t nElements, void *p) {
      return p ? new(p) ::MOLLERManager[nElements] : new ::MOLLERManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_MOLLERManager(void *p) {
      delete (static_cast<::MOLLERManager*>(p));
   }
   static void deleteArray_MOLLERManager(void *p) {
      delete [] (static_cast<::MOLLERManager*>(p));
   }
   static void destruct_MOLLERManager(void *p) {
      typedef ::MOLLERManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MOLLERManager

//______________________________________________________________________________
void MOLLERGenericDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class MOLLERGenericDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MOLLERGenericDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(MOLLERGenericDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MOLLERGenericDetector(void *p) {
      delete (static_cast<::MOLLERGenericDetector*>(p));
   }
   static void deleteArray_MOLLERGenericDetector(void *p) {
      delete [] (static_cast<::MOLLERGenericDetector*>(p));
   }
   static void destruct_MOLLERGenericDetector(void *p) {
      typedef ::MOLLERGenericDetector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MOLLERGenericDetector

//______________________________________________________________________________
void MOLLERSpectrometer::Streamer(TBuffer &R__b)
{
   // Stream an object of class MOLLERSpectrometer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MOLLERSpectrometer::Class(),this);
   } else {
      R__b.WriteClassBuffer(MOLLERSpectrometer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MOLLERSpectrometer(void *p) {
      delete (static_cast<::MOLLERSpectrometer*>(p));
   }
   static void deleteArray_MOLLERSpectrometer(void *p) {
      delete [] (static_cast<::MOLLERSpectrometer*>(p));
   }
   static void destruct_MOLLERSpectrometer(void *p) {
      typedef ::MOLLERSpectrometer current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MOLLERSpectrometer

//______________________________________________________________________________
void MOLLERGEMModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class MOLLERGEMModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MOLLERGEMModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(MOLLERGEMModule::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MOLLERGEMModule(void *p) {
      delete (static_cast<::MOLLERGEMModule*>(p));
   }
   static void deleteArray_MOLLERGEMModule(void *p) {
      delete [] (static_cast<::MOLLERGEMModule*>(p));
   }
   static void destruct_MOLLERGEMModule(void *p) {
      typedef ::MOLLERGEMModule current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MOLLERGEMModule

namespace ROOT {
} // end of namespace ROOT for class ::MOLLERGEMTrackerBase

//______________________________________________________________________________
void MOLLERGEMSpectrometerTracker::Streamer(TBuffer &R__b)
{
   // Stream an object of class MOLLERGEMSpectrometerTracker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MOLLERGEMSpectrometerTracker::Class(),this);
   } else {
      R__b.WriteClassBuffer(MOLLERGEMSpectrometerTracker::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MOLLERGEMSpectrometerTracker(void *p) {
      delete (static_cast<::MOLLERGEMSpectrometerTracker*>(p));
   }
   static void deleteArray_MOLLERGEMSpectrometerTracker(void *p) {
      delete [] (static_cast<::MOLLERGEMSpectrometerTracker*>(p));
   }
   static void destruct_MOLLERGEMSpectrometerTracker(void *p) {
      typedef ::MOLLERGEMSpectrometerTracker current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MOLLERGEMSpectrometerTracker

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlEintgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlEintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEvectorlEvectorlEintgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<int> > >*)
   {
      vector<vector<vector<int> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<int> > >", -2, "vector", 389,
                  typeid(vector<vector<vector<int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlEintgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<vector<int> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlEintgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlEintgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlEintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlEintgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlEintgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<int> > > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<vector<int> > >","std::vector<std::vector<std::vector<int, std::allocator<int> >, std::allocator<std::vector<int, std::allocator<int> > > >, std::allocator<std::vector<std::vector<int, std::allocator<int> >, std::allocator<std::vector<int, std::allocator<int> > > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<vector<int> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlEintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<vector<int> > >*>(nullptr))->GetClass();
      vectorlEvectorlEvectorlEintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlEintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<vector<int> > > : new vector<vector<vector<int> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlEintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<vector<int> > >[nElements] : new vector<vector<vector<int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p) {
      delete (static_cast<vector<vector<vector<int> > >*>(p));
   }
   static void deleteArray_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p) {
      delete [] (static_cast<vector<vector<vector<int> > >*>(p));
   }
   static void destruct_vectorlEvectorlEvectorlEintgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<int> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<int> > >

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
         instance("vector<vector<int> >", -2, "vector", 389,
                  typeid(vector<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<int> >) );
      instance.SetNew(&new_vectorlEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<int> >","std::vector<std::vector<int, std::allocator<int> >, std::allocator<std::vector<int, std::allocator<int> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<int> >*>(nullptr))->GetClass();
      vectorlEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<int> > : new vector<vector<int> >;
   }
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<int> >[nElements] : new vector<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintgRsPgR(void *p) {
      delete (static_cast<vector<vector<int> >*>(p));
   }
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p) {
      delete [] (static_cast<vector<vector<int> >*>(p));
   }
   static void destruct_vectorlEvectorlEintgRsPgR(void *p) {
      typedef vector<vector<int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int> >

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
         instance("vector<vector<double> >", -2, "vector", 389,
                  typeid(vector<vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<double> >) );
      instance.SetNew(&new_vectorlEvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<double> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<double> >","std::vector<std::vector<double, std::allocator<double> >, std::allocator<std::vector<double, std::allocator<double> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<double> >*>(nullptr))->GetClass();
      vectorlEvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<double> > : new vector<vector<double> >;
   }
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<double> >[nElements] : new vector<vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete (static_cast<vector<vector<double> >*>(p));
   }
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete [] (static_cast<vector<vector<double> >*>(p));
   }
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p) {
      typedef vector<vector<double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
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
         instance("vector<vector<bool> >", -2, "vector", 389,
                  typeid(vector<vector<bool> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEboolgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<bool> >) );
      instance.SetNew(&new_vectorlEvectorlEboolgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEboolgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEboolgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEboolgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEboolgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<bool> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<vector<bool> >","std::vector<std::vector<bool, std::allocator<bool> >, std::allocator<std::vector<bool, std::allocator<bool> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<vector<bool> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEboolgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<vector<bool> >*>(nullptr))->GetClass();
      vectorlEvectorlEboolgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEboolgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEboolgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<bool> > : new vector<vector<bool> >;
   }
   static void *newArray_vectorlEvectorlEboolgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<vector<bool> >[nElements] : new vector<vector<bool> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEboolgRsPgR(void *p) {
      delete (static_cast<vector<vector<bool> >*>(p));
   }
   static void deleteArray_vectorlEvectorlEboolgRsPgR(void *p) {
      delete [] (static_cast<vector<vector<bool> >*>(p));
   }
   static void destruct_vectorlEvectorlEboolgRsPgR(void *p) {
      typedef vector<vector<bool> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<vector<bool> >

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
         instance("vector<unsigned int>", -2, "vector", 389,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<unsigned int>","std::vector<unsigned int, std::allocator<unsigned int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<unsigned int>*>(nullptr))->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete (static_cast<vector<unsigned int>*>(p));
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] (static_cast<vector<unsigned int>*>(p));
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEsetlEintgRsPgR_Dictionary();
   static void vectorlEsetlEintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEsetlEintgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEsetlEintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEsetlEintgRsPgR(void *p);
   static void deleteArray_vectorlEsetlEintgRsPgR(void *p);
   static void destruct_vectorlEsetlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<set<int> >*)
   {
      vector<set<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<set<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<set<int> >", -2, "vector", 389,
                  typeid(vector<set<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEsetlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<set<int> >) );
      instance.SetNew(&new_vectorlEsetlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEsetlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEsetlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEsetlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEsetlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<set<int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<set<int> >","std::vector<std::set<int, std::less<int>, std::allocator<int> >, std::allocator<std::set<int, std::less<int>, std::allocator<int> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<set<int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEsetlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<set<int> >*>(nullptr))->GetClass();
      vectorlEsetlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEsetlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEsetlEintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<set<int> > : new vector<set<int> >;
   }
   static void *newArray_vectorlEsetlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<set<int> >[nElements] : new vector<set<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEsetlEintgRsPgR(void *p) {
      delete (static_cast<vector<set<int> >*>(p));
   }
   static void deleteArray_vectorlEsetlEintgRsPgR(void *p) {
      delete [] (static_cast<vector<set<int> >*>(p));
   }
   static void destruct_vectorlEsetlEintgRsPgR(void *p) {
      typedef vector<set<int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<set<int> >

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
         instance("vector<int>", -2, "vector", 389,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr))->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete (static_cast<vector<int>*>(p));
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] (static_cast<vector<int>*>(p));
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<int>

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
         instance("vector<double>", -2, "vector", 389,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr))->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete (static_cast<vector<double>*>(p));
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] (static_cast<vector<double>*>(p));
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
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
         instance("vector<bool>", -2, "vector", 596,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<bool>","std::vector<bool, std::allocator<bool> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<bool>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<bool>*>(nullptr))->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete (static_cast<vector<bool>*>(p));
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] (static_cast<vector<bool>*>(p));
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace ROOT {
   static TClass *vectorlEMOLLERGEMModulemUgR_Dictionary();
   static void vectorlEMOLLERGEMModulemUgR_TClassManip(TClass*);
   static void *new_vectorlEMOLLERGEMModulemUgR(void *p = nullptr);
   static void *newArray_vectorlEMOLLERGEMModulemUgR(Long_t size, void *p);
   static void delete_vectorlEMOLLERGEMModulemUgR(void *p);
   static void deleteArray_vectorlEMOLLERGEMModulemUgR(void *p);
   static void destruct_vectorlEMOLLERGEMModulemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<MOLLERGEMModule*>*)
   {
      vector<MOLLERGEMModule*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<MOLLERGEMModule*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<MOLLERGEMModule*>", -2, "vector", 389,
                  typeid(vector<MOLLERGEMModule*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEMOLLERGEMModulemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<MOLLERGEMModule*>) );
      instance.SetNew(&new_vectorlEMOLLERGEMModulemUgR);
      instance.SetNewArray(&newArray_vectorlEMOLLERGEMModulemUgR);
      instance.SetDelete(&delete_vectorlEMOLLERGEMModulemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEMOLLERGEMModulemUgR);
      instance.SetDestructor(&destruct_vectorlEMOLLERGEMModulemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<MOLLERGEMModule*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<MOLLERGEMModule*>","std::vector<MOLLERGEMModule*, std::allocator<MOLLERGEMModule*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<MOLLERGEMModule*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEMOLLERGEMModulemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<MOLLERGEMModule*>*>(nullptr))->GetClass();
      vectorlEMOLLERGEMModulemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEMOLLERGEMModulemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEMOLLERGEMModulemUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<MOLLERGEMModule*> : new vector<MOLLERGEMModule*>;
   }
   static void *newArray_vectorlEMOLLERGEMModulemUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<MOLLERGEMModule*>[nElements] : new vector<MOLLERGEMModule*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEMOLLERGEMModulemUgR(void *p) {
      delete (static_cast<vector<MOLLERGEMModule*>*>(p));
   }
   static void deleteArray_vectorlEMOLLERGEMModulemUgR(void *p) {
      delete [] (static_cast<vector<MOLLERGEMModule*>*>(p));
   }
   static void destruct_vectorlEMOLLERGEMModulemUgR(void *p) {
      typedef vector<MOLLERGEMModule*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<MOLLERGEMModule*>

namespace ROOT {
   static TClass *setlEintgR_Dictionary();
   static void setlEintgR_TClassManip(TClass*);
   static void *new_setlEintgR(void *p = nullptr);
   static void *newArray_setlEintgR(Long_t size, void *p);
   static void delete_setlEintgR(void *p);
   static void deleteArray_setlEintgR(void *p);
   static void destruct_setlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<int>*)
   {
      set<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<int>));
      static ::ROOT::TGenericClassInfo 
         instance("set<int>", -2, "set", 94,
                  typeid(set<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(set<int>) );
      instance.SetNew(&new_setlEintgR);
      instance.SetNewArray(&newArray_setlEintgR);
      instance.SetDelete(&delete_setlEintgR);
      instance.SetDeleteArray(&deleteArray_setlEintgR);
      instance.SetDestructor(&destruct_setlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("set<int>","std::set<int, std::less<int>, std::allocator<int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const set<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const set<int>*>(nullptr))->GetClass();
      setlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<int> : new set<int>;
   }
   static void *newArray_setlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) set<int>[nElements] : new set<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEintgR(void *p) {
      delete (static_cast<set<int>*>(p));
   }
   static void deleteArray_setlEintgR(void *p) {
      delete [] (static_cast<set<int>*>(p));
   }
   static void destruct_setlEintgR(void *p) {
      typedef set<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class set<int>

namespace ROOT {
   static TClass *maplEintcOvectorlEvectorlEintgRsPgRsPgR_Dictionary();
   static void maplEintcOvectorlEvectorlEintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOvectorlEvectorlEintgRsPgRsPgR(void *p = nullptr);
   static void *newArray_maplEintcOvectorlEvectorlEintgRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOvectorlEvectorlEintgRsPgRsPgR(void *p);
   static void deleteArray_maplEintcOvectorlEvectorlEintgRsPgRsPgR(void *p);
   static void destruct_maplEintcOvectorlEvectorlEintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,vector<vector<int> > >*)
   {
      map<int,vector<vector<int> > > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,vector<vector<int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,vector<vector<int> > >", -2, "map", 100,
                  typeid(map<int,vector<vector<int> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOvectorlEvectorlEintgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,vector<vector<int> > >) );
      instance.SetNew(&new_maplEintcOvectorlEvectorlEintgRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOvectorlEvectorlEintgRsPgRsPgR);
      instance.SetDelete(&delete_maplEintcOvectorlEvectorlEintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOvectorlEvectorlEintgRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOvectorlEvectorlEintgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,vector<vector<int> > > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,vector<vector<int> > >","std::map<int, std::vector<std::vector<int, std::allocator<int> >, std::allocator<std::vector<int, std::allocator<int> > > >, std::less<int>, std::allocator<std::pair<int const, std::vector<std::vector<int, std::allocator<int> >, std::allocator<std::vector<int, std::allocator<int> > > > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,vector<vector<int> > >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOvectorlEvectorlEintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,vector<vector<int> > >*>(nullptr))->GetClass();
      maplEintcOvectorlEvectorlEintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOvectorlEvectorlEintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOvectorlEvectorlEintgRsPgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,vector<vector<int> > > : new map<int,vector<vector<int> > >;
   }
   static void *newArray_maplEintcOvectorlEvectorlEintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,vector<vector<int> > >[nElements] : new map<int,vector<vector<int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOvectorlEvectorlEintgRsPgRsPgR(void *p) {
      delete (static_cast<map<int,vector<vector<int> > >*>(p));
   }
   static void deleteArray_maplEintcOvectorlEvectorlEintgRsPgRsPgR(void *p) {
      delete [] (static_cast<map<int,vector<vector<int> > >*>(p));
   }
   static void destruct_maplEintcOvectorlEvectorlEintgRsPgRsPgR(void *p) {
      typedef map<int,vector<vector<int> > > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,vector<vector<int> > >

namespace ROOT {
   static TClass *maplEintcOsetlEintgRsPgR_Dictionary();
   static void maplEintcOsetlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOsetlEintgRsPgR(void *p = nullptr);
   static void *newArray_maplEintcOsetlEintgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOsetlEintgRsPgR(void *p);
   static void deleteArray_maplEintcOsetlEintgRsPgR(void *p);
   static void destruct_maplEintcOsetlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,set<int> >*)
   {
      map<int,set<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,set<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,set<int> >", -2, "map", 100,
                  typeid(map<int,set<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOsetlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,set<int> >) );
      instance.SetNew(&new_maplEintcOsetlEintgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOsetlEintgRsPgR);
      instance.SetDelete(&delete_maplEintcOsetlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOsetlEintgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOsetlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,set<int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,set<int> >","std::map<int, std::set<int, std::less<int>, std::allocator<int> >, std::less<int>, std::allocator<std::pair<int const, std::set<int, std::less<int>, std::allocator<int> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,set<int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOsetlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,set<int> >*>(nullptr))->GetClass();
      maplEintcOsetlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOsetlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOsetlEintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,set<int> > : new map<int,set<int> >;
   }
   static void *newArray_maplEintcOsetlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,set<int> >[nElements] : new map<int,set<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOsetlEintgRsPgR(void *p) {
      delete (static_cast<map<int,set<int> >*>(p));
   }
   static void deleteArray_maplEintcOsetlEintgRsPgR(void *p) {
      delete [] (static_cast<map<int,set<int> >*>(p));
   }
   static void destruct_maplEintcOsetlEintgRsPgR(void *p) {
      typedef map<int,set<int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,set<int> >

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = nullptr);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 100,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,int>","std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,int>*>(nullptr))->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete (static_cast<map<int,int>*>(p));
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] (static_cast<map<int,int>*>(p));
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace ROOT {
   static TClass *maplEintcOdoublegR_Dictionary();
   static void maplEintcOdoublegR_TClassManip(TClass*);
   static void *new_maplEintcOdoublegR(void *p = nullptr);
   static void *newArray_maplEintcOdoublegR(Long_t size, void *p);
   static void delete_maplEintcOdoublegR(void *p);
   static void deleteArray_maplEintcOdoublegR(void *p);
   static void destruct_maplEintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,double>*)
   {
      map<int,double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,double>", -2, "map", 100,
                  typeid(map<int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,double>) );
      instance.SetNew(&new_maplEintcOdoublegR);
      instance.SetNewArray(&newArray_maplEintcOdoublegR);
      instance.SetDelete(&delete_maplEintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEintcOdoublegR);
      instance.SetDestructor(&destruct_maplEintcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,double>","std::map<int, double, std::less<int>, std::allocator<std::pair<int const, double> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,double>*>(nullptr))->GetClass();
      maplEintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,double> : new map<int,double>;
   }
   static void *newArray_maplEintcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,double>[nElements] : new map<int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOdoublegR(void *p) {
      delete (static_cast<map<int,double>*>(p));
   }
   static void deleteArray_maplEintcOdoublegR(void *p) {
      delete [] (static_cast<map<int,double>*>(p));
   }
   static void destruct_maplEintcOdoublegR(void *p) {
      typedef map<int,double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,double>

namespace {
  void TriggerDictionaryInitialization_libMollerPol_Impl() {
    static const char* headers[] = {
"MollerPolCalorimeter.h",
"MollerPolApparatus.h",
"Scaler9250.h",
"MollerPolScalerEvtHandler.h",
"MollerPolHelicityDecoderBoard.h",
"gem/MPDModule.h",
"gem/MOLLERData.h",
"gem/MOLLERElement.h",
"gem/MOLLERManager.h",
"gem/MOLLERGenericDetector.h",
"gem/MOLLERSpectrometer.h",
"gem/MOLLERGEMModule.h",
"gem/MOLLERGEMTrackerBase.h",
"gem/MOLLERGEMSpectrometerTracker.h",
nullptr
    };
    static const char* includePaths[] = {
"/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean",
"/work/halla/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/gem",
"/work/halla/moller12gev/asar/Analyzer/local/analyzer-1.7.18/include",
"/u/group/halla/apps/ROOT/6.32-14/el9/RelWithDebInfo/include",
"/u/group/halla/apps/ROOT/6.32-14/el9/RelWithDebInfo/include/",
"/w/halla-scshelf2102/moller12gev/asar/Moller_Polarimeter/mollerpol_analyzer_clean/build/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libMollerPol dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$MollerPolCalorimeter.h")))  MollerPolCalorimeter;
class __attribute__((annotate("$clingAutoload$MollerPolApparatus.h")))  MollerPolApparatus;
namespace Decoder{class __attribute__((annotate("$clingAutoload$Scaler9250.h")))  Scaler9250;}
class __attribute__((annotate("$clingAutoload$MollerPolScalerEvtHandler.h")))  MollerPolScalerEvtHandler;
class __attribute__((annotate("$clingAutoload$MollerPolHelicityDecoderBoard.h")))  MollerPolHelicityDecoderBoard;
namespace Decoder{class __attribute__((annotate("$clingAutoload$gem/MPDModule.h")))  MPDModule;}
class __attribute__((annotate("$clingAutoload$gem/MOLLERElement.h")))  MOLLERElement;
class __attribute__((annotate("$clingAutoload$gem/MOLLERManager.h")))  MOLLERManager;
class __attribute__((annotate("$clingAutoload$gem/MOLLERGenericDetector.h")))  MOLLERGenericDetector;
class __attribute__((annotate("$clingAutoload$gem/MOLLERSpectrometer.h")))  MOLLERSpectrometer;
class __attribute__((annotate("$clingAutoload$gem/MOLLERGEMModule.h")))  MOLLERGEMModule;
class __attribute__((annotate("$clingAutoload$gem/MOLLERGEMTrackerBase.h")))  MOLLERGEMTrackerBase;
class __attribute__((annotate("$clingAutoload$gem/MOLLERGEMSpectrometerTracker.h")))  MOLLERGEMSpectrometerTracker;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libMollerPol dictionary payload"

#ifndef WITH_DEBUG
  #define WITH_DEBUG 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "MollerPolCalorimeter.h"
#include "MollerPolApparatus.h"
#include "Scaler9250.h"
#include "MollerPolScalerEvtHandler.h"
#include "MollerPolHelicityDecoderBoard.h"
#include "gem/MPDModule.h"
#include "gem/MOLLERData.h"
#include "gem/MOLLERElement.h"
#include "gem/MOLLERManager.h"
#include "gem/MOLLERGenericDetector.h"
#include "gem/MOLLERSpectrometer.h"
#include "gem/MOLLERGEMModule.h"
#include "gem/MOLLERGEMTrackerBase.h"
#include "gem/MOLLERGEMSpectrometerTracker.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Decoder::MPDModule", payloadCode, "@",
"Decoder::Scaler9250", payloadCode, "@",
"MOLLERElement", payloadCode, "@",
"MOLLERGEMModule", payloadCode, "@",
"MOLLERGEMSpectrometerTracker", payloadCode, "@",
"MOLLERGEMTrackerBase", payloadCode, "@",
"MOLLERGenericDetector", payloadCode, "@",
"MOLLERManager", payloadCode, "@",
"MOLLERSpectrometer", payloadCode, "@",
"MollerPolApparatus", payloadCode, "@",
"MollerPolCalorimeter", payloadCode, "@",
"MollerPolHelicityDecoderBoard", payloadCode, "@",
"MollerPolScalerEvtHandler", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libMollerPol",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libMollerPol_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libMollerPol_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libMollerPol() {
  TriggerDictionaryInitialization_libMollerPol_Impl();
}
