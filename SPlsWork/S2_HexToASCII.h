#ifndef __S2_HEXTOASCII_H__
#define __S2_HEXTOASCII_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/


/*
* ANALOG_INPUT
*/



#define __S2_HexToASCII_IN$_STRING_INPUT 0
#define __S2_HexToASCII_IN$_ARRAY_NUM_ELEMS 2
#define __S2_HexToASCII_IN$_ARRAY_NUM_CHARS 64
CREATE_STRING_ARRAY( S2_HexToASCII, __IN$, __S2_HexToASCII_IN$_ARRAY_NUM_ELEMS, __S2_HexToASCII_IN$_ARRAY_NUM_CHARS );

/*
* DIGITAL_OUTPUT
*/


/*
* ANALOG_OUTPUT
*/


#define __S2_HexToASCII_OUT$_STRING_OUTPUT 0
#define __S2_HexToASCII_OUT$_ARRAY_LENGTH 2

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

START_GLOBAL_VAR_STRUCT( S2_HexToASCII )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __OUT$ );
   DECLARE_STRING_ARRAY( S2_HexToASCII, __IN$ );
};

START_NVRAM_VAR_STRUCT( S2_HexToASCII )
{
};



#endif //__S2_HEXTOASCII_H__

