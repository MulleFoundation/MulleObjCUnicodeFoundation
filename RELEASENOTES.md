## 0.21.0
















* **BREAKING**: rename MulleObjCLoader(MulleObjCUnicodeFoundation) → MulleObjCDeps(MulleObjCUnicodeFoundation); update dependency registration usage
* Replace generated objc-loader.inc with objc-deps.inc to register NSCharacterSet, NSMutableCharacterSet and NSString with MulleObjCUnicode; reflect headers updated
* Allow building when `MULLE_FOUNDATION_BASE_BUILD` is defined (visibility macro fallback); updated tests to match renames
