#ifndef mulle_objc_unicode_foundation_h__
#define mulle_objc_unicode_foundation_h__

#import "import.h"

#include <stdint.h>

/*
 *  (c) 2020 nat ORGANIZATION
 *
 *  version:  major, minor, patch
 */
#define MULLE_OBJC_UNICODE_FOUNDATION_VERSION  ((0 << 20) | (18 << 8) | 0)


static inline unsigned int   MulleObjCUnicodeFoundation_get_version_major( void)
{
   return( MULLE_OBJC_UNICODE_FOUNDATION_VERSION >> 20);
}


static inline unsigned int   MulleObjCUnicodeFoundation_get_version_minor( void)
{
   return( (MULLE_OBJC_UNICODE_FOUNDATION_VERSION >> 8) & 0xFFF);
}


static inline unsigned int   MulleObjCUnicodeFoundation_get_version_patch( void)
{
   return( MULLE_OBJC_UNICODE_FOUNDATION_VERSION & 0xFF);
}


extern uint32_t   MulleObjCUnicodeFoundation_get_version( void);


/*
   Add your library headers here for exposure to library
   consumers.
*/
// #include "foo.h"

#import "NSCharacterSet+MulleObjCUnicode.h"
#import "NSMutableCharacterSet+MulleObjCUnicode.h"
#import "NSString+MulleObjCUnicode.h"

#endif
