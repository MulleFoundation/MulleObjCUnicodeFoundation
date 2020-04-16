#ifndef mulle_objc_unicode_foundation_h__
#define mulle_objc_unicode_foundation_h__

#import "import.h"

#include <stdint.h>

/*
 *  (c) 2020 nat ORGANIZATION
 *
 *  version:  major, minor, patch
 */
#define mulle_objc_unicode_foundation_VERSION  ((0 << 20) | (7 << 8) | 56)


static inline unsigned int   MulleObjCUnicodeFoundation_get_version_major( void)
{
   return( mulle_objc_unicode_foundation_VERSION >> 20);
}


static inline unsigned int   MulleObjCUnicodeFoundation_get_version_minor( void)
{
   return( (mulle_objc_unicode_foundation_VERSION >> 8) & 0xFFF);
}


static inline unsigned int   MulleObjCUnicodeFoundation_get_version_patch( void)
{
   return( mulle_objc_unicode_foundation_VERSION & 0xFF);
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
