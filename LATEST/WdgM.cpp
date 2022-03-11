/*****************************************************/
/* File   : WdgM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infWdgM_EcuM.h"
#include "infWdgM_Dcm.h"
#include "infWdgM_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_WdgM:
      public abstract_module
{
   public:
      FUNC(void, WDGM_CODE) InitFunction   (void);
      FUNC(void, WDGM_CODE) DeInitFunction (void);
      FUNC(void, WDGM_CODE) GetVersionInfo (void);
      FUNC(void, WDGM_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_WdgM    WdgM;
infEcuMClient* gptrinfEcuMClient_WdgM = &WdgM;
infDcmClient*  gptrinfDcmClient_WdgM  = &WdgM;
infSchMClient* gptrinfSchMClient_WdgM = &WdgM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, WDGM_CODE) module_WdgM::InitFunction(void){
}

FUNC(void, WDGM_CODE) module_WdgM::DeInitFunction(void){
}

FUNC(void, WDGM_CODE) module_WdgM::GetVersionInfo(void){
}

FUNC(void, WDGM_CODE) module_WdgM::MainFunction(void){
}

#include "WdgM_Unused.h"

FUNC(void, WDGM_CODE) class_WdgM_Unused::GetMode(void){
}

FUNC(void, WDGM_CODE) class_WdgM_Unused::SetMode(void){
}

FUNC(void, WDGM_CODE) class_WdgM_Unused::CheckpointReached(void){
}

FUNC(void, WDGM_CODE) class_WdgM_Unused::GetGlobalStatus(void){
}

FUNC(void, WDGM_CODE) class_WdgM_Unused::GetLocalStatus(void){
}

FUNC(void, WDGM_CODE) class_WdgM_Unused::PerformReset(void){
}

FUNC(void, WDGM_CODE) class_WdgM_Unused::GetFirstExpiredSEID(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

