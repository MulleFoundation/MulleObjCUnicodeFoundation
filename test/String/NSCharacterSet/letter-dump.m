#import <MulleObjCUnicodeFoundation/MulleObjCUnicodeFoundation.h>
//#import "MulleStandaloneObjCFoundation.h"


//
// try to create all possible subclasses and isEqual them. this merely
// exercises some code and finds missing implementations
//
int main( int argc, const char * argv[])
{
//   [[NSCharacterSet letterCharacterSet] mullePrintBitmapData:stdout];
   printf( "%s", [[[NSCharacterSet letterCharacterSet] mulleTestDescription] UTF8String]);

   return( 0);
}
