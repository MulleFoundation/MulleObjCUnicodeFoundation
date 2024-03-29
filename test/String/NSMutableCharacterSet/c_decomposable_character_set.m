#ifdef __MULLE_OBJC__
# import <MulleObjCUnicodeFoundation/MulleObjCUnicodeFoundation.h>
# include <mulle-testallocator/mulle-testallocator.h>
#else
# import <Foundation/Foundation.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#if defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
# include <unistd.h>
#endif


static int   test_c_decomposable_character_set( void)
{
   NSCharacterSet *value;

   @try
   {
      value = [NSMutableCharacterSet decomposableCharacterSet];
      printf( "%s\n", [[value mulleTestDescription] UTF8String]);
   }
   @catch( NSException *localException)
   {
      printf( "Threw a %s exception\n", [[localException name] UTF8String]);
   }
   return( 0);
}


int   main( int argc, char *argv[])
{
   int   rval;

   rval = test_c_decomposable_character_set();
   return( rval);
}

