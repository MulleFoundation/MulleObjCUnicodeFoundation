#ifdef __MULLE_OBJC__

#import "MulleObjCLoader+MulleObjCUnicodeFoundation.h"


@implementation MulleObjCLoader( MulleObjCUnicodeFoundation)

//
// The file objc-loader.inc is generated by the mulle-objc-developer
// tool set automatically during a cmake build.
//
+ (struct _mulle_objc_dependency *) dependencies
{
   static struct _mulle_objc_dependency   dependencies[] =
   {
#include "objc-loader.inc"

      { MULLE_OBJC_NO_CLASSID, MULLE_OBJC_NO_CATEGORYID }
   };

   return( dependencies);
}

@end

#endif
