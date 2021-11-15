# This file will be regenerated by `mulle-match-to-cmake` via
# `mulle-sde reflect` and any edits will be lost.
#
# This file will be included by cmake/share/Headers.cmake
#
if( MULLE_TRACE_INCLUDE)
   MESSAGE( STATUS "# Include \"${CMAKE_CURRENT_LIST_FILE}\"" )
endif()

#
# contents are derived from the file locations

set( INCLUDE_DIRS
src
src/reflect
)

#
# contents selected with patternfile ??-header--private-generated-headers
#
set( PRIVATE_GENERATED_HEADERS
src/reflect/_MulleObjCUnicodeFoundation-import-private.h
src/reflect/_MulleObjCUnicodeFoundation-include-private.h
)

#
# contents selected with patternfile ??-header--private-generic-headers
#
set( PRIVATE_GENERIC_HEADERS
src/import-private.h
src/include-private.h
)

#
# contents selected with patternfile ??-header--public-generated-headers
#
set( PUBLIC_GENERATED_HEADERS
src/reflect/_MulleObjCUnicodeFoundation-export.h
src/reflect/_MulleObjCUnicodeFoundation-import.h
src/reflect/_MulleObjCUnicodeFoundation-include.h
src/reflect/_MulleObjCUnicodeFoundation-provide.h
)

#
# contents selected with patternfile ??-header--public-generic-headers
#
set( PUBLIC_GENERIC_HEADERS
src/import.h
src/include.h
)

#
# contents selected with patternfile ??-header--public-headers
#
set( PUBLIC_HEADERS
src/MulleObjCLoader+MulleObjCUnicodeFoundation.h
src/MulleObjCUnicodeFoundation.h
src/NSCharacterSet+MulleObjCUnicode.h
src/NSMutableCharacterSet+MulleObjCUnicode.h
src/NSString+MulleObjCUnicode.h
)

