#ifndef __S2_LAMPHOURS_SERIAL2ANALOG_H__
#define __S2_LAMPHOURS_SERIAL2ANALOG_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/

#define __S2_LampHours_Serial2Analog_LAMPHOURSSERIAL_STRING_INPUT 0
#define __S2_LampHours_Serial2Analog_LAMPHOURSSERIAL_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_LampHours_Serial2Analog, __LAMPHOURSSERIAL, __S2_LampHours_Serial2Analog_LAMPHOURSSERIAL_STRING_MAX_LEN );



/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/
#define __S2_LampHours_Serial2Analog_LAMPHOURSANALOG_ANALOG_OUTPUT 0



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

START_GLOBAL_VAR_STRUCT( S2_LampHours_Serial2Analog )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_LampHours_Serial2Analog, __LAMPHOURSSERIAL );
};

START_NVRAM_VAR_STRUCT( S2_LampHours_Serial2Analog )
{
};



#endif //__S2_LAMPHOURS_SERIAL2ANALOG_H__

