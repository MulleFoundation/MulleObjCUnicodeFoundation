/*
*   This file will be regenerated by `mulle-sde reflect` and any edits will be
*   lost. Suppress generation of this file with:
*      mulle-sde environment --global \
*         set MULLE_SOURCETREE_TO_C_INCLUDE_FILE DISABLE
*
*   To not generate any header files:
*      mulle-sde environment --global \
*         set MULLE_SOURCETREE_TO_C_RUN DISABLE
*/

#ifndef _MulleObjCUnicodeFoundation_include_h__
#define _MulleObjCUnicodeFoundation_include_h__

// How to tweak the following mulle-unicode #include
//    remove:             `mulle-sourcetree mark mulle-unicode no-header`
//    rename:             `mulle-sde dependency|library set mulle-unicode include whatever.h`
//    toggle #import:     `mulle-sourcetree mark mulle-unicode [no-]import`
//    toggle localheader: `mulle-sourcetree mark mulle-unicode [no-]localheader`
//    toggle public:      `mulle-sourcetree mark mulle-unicode [no-]public`
//    toggle optional:    `mulle-sourcetree mark mulle-unicode [no-]require`
//    remove for os:      `mulle-sourcetree mark mulle-unicode no-os-<osname>`
# if defined( __has_include) && __has_include("mulle-unicode.h")
#   include "mulle-unicode.h"   // mulle-unicode
# else
#   include <mulle-unicode/mulle-unicode.h>   // mulle-unicode
# endif

#endif
