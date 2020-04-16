#
# cmake/reflect/_Headers.cmake is generated by `mulle-sde reflect`. Edits will be lost.
#
if( MULLE_TRACE_INCLUDE)
   MESSAGE( STATUS "# Include \"${CMAKE_CURRENT_LIST_FILE}\"" )
endif()

set( INCLUDE_DIRS
src
src/reflect
)

set( PRIVATE_GENERATED_HEADERS
src/reflect/_MulleObjCUnicodeFoundation-import-private.h
src/reflect/_MulleObjCUnicodeFoundation-include-private.h
)

set( PRIVATE_HEADERS
src/import-private.h
src/include-private.h
)

set( PUBLIC_GENERATED_HEADERS
src/reflect/_MulleObjCUnicodeFoundation-import.h
src/reflect/_MulleObjCUnicodeFoundation-include.h
)

set( PUBLIC_HEADERS
src/MulleObjCLoader+MulleObjCUnicodeFoundation.h
src/MulleObjCUnicodeFoundation.h
src/NSCharacterSet+MulleObjCUnicode.h
src/NSMutableCharacterSet+MulleObjCUnicode.h
src/NSString+MulleObjCUnicode.h
src/import.h
src/include.h
)
