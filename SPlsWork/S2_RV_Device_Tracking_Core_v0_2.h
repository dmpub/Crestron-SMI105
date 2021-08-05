#ifndef __S2_RV_DEVICE_TRACKING_CORE_V0_2_H__
#define __S2_RV_DEVICE_TRACKING_CORE_V0_2_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_RV_Device_Tracking_Core_v0_2_DISP_ON_DIG_INPUT 0

#define __S2_RV_Device_Tracking_Core_v0_2_DEVICE_TO_DISP_DIG_INPUT 1
#define __S2_RV_Device_Tracking_Core_v0_2_DEVICE_TO_DISP_ARRAY_LENGTH 10

/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/

#define __S2_RV_Device_Tracking_Core_v0_2_TO_ROOMVIEW$_STRING_OUTPUT 0


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
#define __S2_RV_Device_Tracking_Core_v0_2_DEVICE_TYPE_STRING_PARAMETER 10
#define __S2_RV_Device_Tracking_Core_v0_2_DEVICE_TYPE_ARRAY_NUM_ELEMS 10
#define __S2_RV_Device_Tracking_Core_v0_2_DEVICE_TYPE_ARRAY_NUM_CHARS 20
CREATE_STRING_ARRAY( S2_RV_Device_Tracking_Core_v0_2, __DEVICE_TYPE, __S2_RV_Device_Tracking_Core_v0_2_DEVICE_TYPE_ARRAY_NUM_ELEMS, __S2_RV_Device_Tracking_Core_v0_2_DEVICE_TYPE_ARRAY_NUM_CHARS );
#define __S2_RV_Device_Tracking_Core_v0_2_DEVICE_NAME_STRING_PARAMETER 20
#define __S2_RV_Device_Tracking_Core_v0_2_DEVICE_NAME_ARRAY_NUM_ELEMS 10
#define __S2_RV_Device_Tracking_Core_v0_2_DEVICE_NAME_ARRAY_NUM_CHARS 20
CREATE_STRING_ARRAY( S2_RV_Device_Tracking_Core_v0_2, __DEVICE_NAME, __S2_RV_Device_Tracking_Core_v0_2_DEVICE_NAME_ARRAY_NUM_ELEMS, __S2_RV_Device_Tracking_Core_v0_2_DEVICE_NAME_ARRAY_NUM_CHARS );


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
#define __S2_RV_Device_Tracking_Core_v0_2_GL_DURATION$_STRING_MAX_LEN 5
CREATE_STRING_STRUCT( S2_RV_Device_Tracking_Core_v0_2, __GL_DURATION$, __S2_RV_Device_Tracking_Core_v0_2_GL_DURATION$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_RV_Device_Tracking_Core_v0_2 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __DEVICE_TO_DISP );
   unsigned short __GL_WHICH_DEVICE_TO_DISP;
   unsigned short __GL_ARETRACKING;
   unsigned short __GL_STARTSTAMP;
   unsigned short __GL_ENDSTAMP;
   unsigned short __GL_STDST;
   DECLARE_STRING_STRUCT( S2_RV_Device_Tracking_Core_v0_2, __GL_DURATION$ );
   DECLARE_STRING_ARRAY( S2_RV_Device_Tracking_Core_v0_2, __DEVICE_TYPE );
   DECLARE_STRING_ARRAY( S2_RV_Device_Tracking_Core_v0_2, __DEVICE_NAME );
};

START_NVRAM_VAR_STRUCT( S2_RV_Device_Tracking_Core_v0_2 )
{
};

DEFINE_WAITEVENT( S2_RV_Device_Tracking_Core_v0_2, STOP_TIMER );
DEFINE_WAITEVENT( S2_RV_Device_Tracking_Core_v0_2, __SPLS_TMPVAR__WAITLABEL_0__ );


#endif //__S2_RV_DEVICE_TRACKING_CORE_V0_2_H__

