#ifndef __S2_PANASONIC_PT_F200U_PROCESSOR_V1_0_H__
#define __S2_PANASONIC_PT_F200U_PROCESSOR_V1_0_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_Panasonic_PT_F200U_Processor_v1_0_LAMP_REQUESTED_DIG_INPUT 0
#define __S2_Panasonic_PT_F200U_Processor_v1_0_VOLUME_REQUESTED_DIG_INPUT 1
#define __S2_Panasonic_PT_F200U_Processor_v1_0_VOLUME_ADJUST_DIG_INPUT 2


/*
* ANALOG_INPUT
*/
#define __S2_Panasonic_PT_F200U_Processor_v1_0_VOLUME_PANASONIC_IN_ANALOG_INPUT 0

#define __S2_Panasonic_PT_F200U_Processor_v1_0_FROM_DEVICE$_STRING_INPUT 1
#define __S2_Panasonic_PT_F200U_Processor_v1_0_FROM_DEVICE$_STRING_MAX_LEN 255
CREATE_STRING_STRUCT( S2_Panasonic_PT_F200U_Processor_v1_0, __FROM_DEVICE$, __S2_Panasonic_PT_F200U_Processor_v1_0_FROM_DEVICE$_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_Panasonic_PT_F200U_Processor_v1_0_LAMP_HOURS_ANALOG_OUTPUT 0
#define __S2_Panasonic_PT_F200U_Processor_v1_0_VOLUME_PANASONIC_OUT_ANALOG_OUTPUT 1

#define __S2_Panasonic_PT_F200U_Processor_v1_0_TO_DEVICE$_STRING_OUTPUT 2


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
#define __S2_Panasonic_PT_F200U_Processor_v1_0_STEMP$_STRING_MAX_LEN 254
CREATE_STRING_STRUCT( S2_Panasonic_PT_F200U_Processor_v1_0, __STEMP$, __S2_Panasonic_PT_F200U_Processor_v1_0_STEMP$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_Panasonic_PT_F200U_Processor_v1_0 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_Panasonic_PT_F200U_Processor_v1_0, __FROM_DEVICE$ );
};

START_NVRAM_VAR_STRUCT( S2_Panasonic_PT_F200U_Processor_v1_0 )
{
   DECLARE_STRING_STRUCT( S2_Panasonic_PT_F200U_Processor_v1_0, __STEMP$ );
   unsigned short __IBUSYFLAG;
};



#endif //__S2_PANASONIC_PT_F200U_PROCESSOR_V1_0_H__

