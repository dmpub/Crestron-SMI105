#ifndef __S2_STARTUPSHUTDOWNTIMERS_H__
#define __S2_STARTUPSHUTDOWNTIMERS_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_StartupShutdownTimers_STARTUPINCR_DIG_INPUT 0
#define __S2_StartupShutdownTimers_STARTUPDECR_DIG_INPUT 1
#define __S2_StartupShutdownTimers_SHUTDOWNINCR_DIG_INPUT 2
#define __S2_StartupShutdownTimers_SHUTDOWNDECR_DIG_INPUT 3
#define __S2_StartupShutdownTimers_POWERON_DIG_INPUT 4
#define __S2_StartupShutdownTimers_POWEROFF_DIG_INPUT 5


/*
* ANALOG_INPUT
*/
#define __S2_StartupShutdownTimers_SETSTARTUP_ANALOG_INPUT 0
#define __S2_StartupShutdownTimers_SETSHUTDOWN_ANALOG_INPUT 1




/*
* DIGITAL_OUTPUT
*/
#define __S2_StartupShutdownTimers_STARTUPINPROG_DIG_OUTPUT 0
#define __S2_StartupShutdownTimers_STARTUPCOMPL_DIG_OUTPUT 1
#define __S2_StartupShutdownTimers_SHUTDOWNINPROG_DIG_OUTPUT 2
#define __S2_StartupShutdownTimers_SHUTDOWNCOMPL_DIG_OUTPUT 3


/*
* ANALOG_OUTPUT
*/
#define __S2_StartupShutdownTimers_STARTUPLENGTH_ANALOG_OUTPUT 0
#define __S2_StartupShutdownTimers_SHUTDOWNLENGTH_ANALOG_OUTPUT 1
#define __S2_StartupShutdownTimers_STARTUPPROGRESS_ANALOG_OUTPUT 2
#define __S2_StartupShutdownTimers_SHUTDOWNPROGRESS_ANALOG_OUTPUT 3

#define __S2_StartupShutdownTimers_STARTUPREMAINING_STRING_OUTPUT 4
#define __S2_StartupShutdownTimers_SHUTDOWNREMAINING_STRING_OUTPUT 5


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_StartupShutdownTimers )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   unsigned short __GL_STARTUPLEN;
   unsigned short __GL_SHUTDOWNLEN;
   unsigned short __GL_BUSY;
};

START_NVRAM_VAR_STRUCT( S2_StartupShutdownTimers )
{
};



#endif //__S2_STARTUPSHUTDOWNTIMERS_H__

