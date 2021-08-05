#ifndef __S2_VIDEOFORMATTOSTRING_H__
#define __S2_VIDEOFORMATTOSTRING_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/

#define __S2_VideoFormatToString_VIDEO_DETECTED_DIG_INPUT 0
#define __S2_VideoFormatToString_VIDEO_DETECTED_ARRAY_LENGTH 6
#define __S2_VideoFormatToString_HDCP_DETECTED_DIG_INPUT 6
#define __S2_VideoFormatToString_HDCP_DETECTED_ARRAY_LENGTH 6

/*
* ANALOG_INPUT
*/



#define __S2_VideoFormatToString_HORIZONTAL_REZ_ANALOG_INPUT 0
#define __S2_VideoFormatToString_HORIZONTAL_REZ_ARRAY_LENGTH 6
#define __S2_VideoFormatToString_VERTICAL_REZ_ANALOG_INPUT 6
#define __S2_VideoFormatToString_VERTICAL_REZ_ARRAY_LENGTH 6
#define __S2_VideoFormatToString_REFRESH_RATE_ANALOG_INPUT 12
#define __S2_VideoFormatToString_REFRESH_RATE_ARRAY_LENGTH 6

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_VideoFormatToString_INFO_STRING_STRING_OUTPUT 0
#define __S2_VideoFormatToString_INFO_STRING_ARRAY_LENGTH 6

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

START_GLOBAL_VAR_STRUCT( S2_VideoFormatToString )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __VIDEO_DETECTED );
   DECLARE_IO_ARRAY( __HDCP_DETECTED );
   DECLARE_IO_ARRAY( __HORIZONTAL_REZ );
   DECLARE_IO_ARRAY( __VERTICAL_REZ );
   DECLARE_IO_ARRAY( __REFRESH_RATE );
   DECLARE_IO_ARRAY( __INFO_STRING );
};

START_NVRAM_VAR_STRUCT( S2_VideoFormatToString )
{
};



#endif //__S2_VIDEOFORMATTOSTRING_H__

