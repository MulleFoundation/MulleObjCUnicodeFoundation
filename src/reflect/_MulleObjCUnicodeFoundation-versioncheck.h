/*
 *   This file will be regenerated by `mulle-project-versioncheck`.
 *   Any edits will be lost.
 */
#ifndef mulle_objc_unicode_foundation_versioncheck_h__
#define mulle_objc_unicode_foundation_versioncheck_h__

#if defined( MULLE_OBJC_STANDARD_FOUNDATION_VERSION)
# ifndef MULLE_OBJC_STANDARD_FOUNDATION_VERSION_MIN
#  define MULLE_OBJC_STANDARD_FOUNDATION_VERSION_MIN  ((0UL << 20) | (22 << 8) | 1)
# endif
# ifndef MULLE_OBJC_STANDARD_FOUNDATION_VERSION_MAX
#  define MULLE_OBJC_STANDARD_FOUNDATION_VERSION_MAX  ((0UL << 20) | (23 << 8) | 0)
# endif
# if MULLE_OBJC_STANDARD_FOUNDATION_VERSION < MULLE_OBJC_STANDARD_FOUNDATION_VERSION_MIN
#  error "MulleObjCStandardFoundation is too old"
# endif
# if MULLE_OBJC_STANDARD_FOUNDATION_VERSION >= MULLE_OBJC_STANDARD_FOUNDATION_VERSION_MAX
#  error "MulleObjCStandardFoundation is too new"
# endif
#endif

#endif
