/* Copyright 2017 - 2023 R. Thomas
 * Copyright 2017 - 2023 Quarkslab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef LIEF_PE_SHLWAPI_DLL_LOOKUP_H
#define LIEF_PE_SHLWAPI_DLL_LOOKUP_H
#include <cstdint>

namespace LIEF {
namespace PE {

const char* shlwapi_dll_lookup(uint32_t i) {
  switch(i) {
  case 0x01f4: return "AssocCreate";
  case 0x01f5: return "AssocGetPerceivedType";
  case 0x01f6: return "AssocIsDangerous";
  case 0x01f7: return "AssocQueryKeyA";
  case 0x01f8: return "AssocQueryKeyW";
  case 0x023a: return "AssocQueryStringA";
  case 0x023c: return "AssocQueryStringByKeyA";
  case 0x0240: return "AssocQueryStringByKeyW";
  case 0x0243: return "AssocQueryStringW";
  case 0x0248: return "ChrCmpIA";
  case 0x0249: return "ChrCmpIW";
  case 0x024a: return "ColorAdjustLuma";
  case 0x024b: return "ColorHLSToRGB";
  case 0x024c: return "ColorRGBToHLS";
  case 0x00a8: return "ConnectToConnectionPoint";
  case 0x0239: return "DelayLoadFailureHook";
  case 0x024d: return "DllGetVersion";
  case 0x000e: return "GetAcceptLanguagesA";
  case 0x000f: return "GetAcceptLanguagesW";
  case 0x024e: return "GetMenuPosFromID";
  case 0x024f: return "HashData";
  case 0x0238: return "IStream_Copy";
  case 0x00b8: return "IStream_Read";
  case 0x0200: return "IStream_ReadPidl";
  case 0x0254: return "IStream_ReadStr";
  case 0x00d5: return "IStream_Reset";
  case 0x00d6: return "IStream_Size";
  case 0x00d4: return "IStream_Write";
  case 0x0201: return "IStream_WritePidl";
  case 0x0255: return "IStream_WriteStr";
  case 0x00a9: return "IUnknown_AtomicRelease";
  case 0x0100: return "IUnknown_GetSite";
  case 0x00ac: return "IUnknown_GetWindow";
  case 0x00b0: return "IUnknown_QueryService";
  case 0x00c7: return "IUnknown_Set";
  case 0x00ae: return "IUnknown_SetSite";
  case 0x0250: return "IntlStrEqWorkerA";
  case 0x0251: return "IntlStrEqWorkerW";
  case 0x0252: return "IsCharSpaceA";
  case 0x001d: return "IsCharSpaceW";
  case 0x0229: return "IsInternetESCEnabled";
  case 0x01b5: return "IsOS";
  case 0x01a2: return "MLFreeLibrary";
  case 0x0179: return "MLLoadLibraryA";
  case 0x017a: return "MLLoadLibraryW";
  case 0x0001: return "ParseURLA";
  case 0x0002: return "ParseURLW";
  case 0x0253: return "PathAddBackslashA";
  case 0x0257: return "PathAddBackslashW";
  case 0x0258: return "PathAddExtensionA";
  case 0x025f: return "PathAddExtensionW";
  case 0x0260: return "PathAppendA";
  case 0x0261: return "PathAppendW";
  case 0x0262: return "PathBuildRootA";
  case 0x0264: return "PathBuildRootW";
  case 0x026b: return "PathCanonicalizeA";
  case 0x026c: return "PathCanonicalizeW";
  case 0x026e: return "PathCombineA";
  case 0x026f: return "PathCombineW";
  case 0x0270: return "PathCommonPrefixA";
  case 0x0271: return "PathCommonPrefixW";
  case 0x0281: return "PathCompactPathA";
  case 0x0282: return "PathCompactPathExA";
  case 0x0283: return "PathCompactPathExW";
  case 0x0284: return "PathCompactPathW";
  case 0x0285: return "PathCreateFromUrlA";
  case 0x0286: return "PathCreateFromUrlAlloc";
  case 0x0287: return "PathCreateFromUrlW";
  case 0x0288: return "PathFileExistsA";
  case 0x0289: return "PathFileExistsW";
  case 0x028a: return "PathFindExtensionA";
  case 0x028b: return "PathFindExtensionW";
  case 0x028c: return "PathFindFileNameA";
  case 0x028d: return "PathFindFileNameW";
  case 0x028e: return "PathFindNextComponentA";
  case 0x028f: return "PathFindNextComponentW";
  case 0x0290: return "PathFindOnPathA";
  case 0x0291: return "PathFindOnPathW";
  case 0x0292: return "PathFindSuffixArrayA";
  case 0x0293: return "PathFindSuffixArrayW";
  case 0x0294: return "PathGetArgsA";
  case 0x0295: return "PathGetArgsW";
  case 0x0296: return "PathGetCharTypeA";
  case 0x0297: return "PathGetCharTypeW";
  case 0x0298: return "PathGetDriveNumberA";
  case 0x0299: return "PathGetDriveNumberW";
  case 0x029a: return "PathIsContentTypeA";
  case 0x029b: return "PathIsContentTypeW";
  case 0x029c: return "PathIsDirectoryA";
  case 0x029d: return "PathIsDirectoryEmptyA";
  case 0x029e: return "PathIsDirectoryEmptyW";
  case 0x029f: return "PathIsDirectoryW";
  case 0x02a0: return "PathIsFileSpecA";
  case 0x02a1: return "PathIsFileSpecW";
  case 0x02a2: return "PathIsLFNFileSpecA";
  case 0x02a3: return "PathIsLFNFileSpecW";
  case 0x02a4: return "PathIsNetworkPathA";
  case 0x02a5: return "PathIsNetworkPathW";
  case 0x02a6: return "PathIsPrefixA";
  case 0x02a7: return "PathIsPrefixW";
  case 0x02a8: return "PathIsRelativeA";
  case 0x02a9: return "PathIsRelativeW";
  case 0x02aa: return "PathIsRootA";
  case 0x02ab: return "PathIsRootW";
  case 0x02ac: return "PathIsSameRootA";
  case 0x02ad: return "PathIsSameRootW";
  case 0x02ae: return "PathIsSystemFolderA";
  case 0x02af: return "PathIsSystemFolderW";
  case 0x02b0: return "PathIsUNCA";
  case 0x02b1: return "PathIsUNCServerA";
  case 0x02b2: return "PathIsUNCServerShareA";
  case 0x02b3: return "PathIsUNCServerShareW";
  case 0x02b4: return "PathIsUNCServerW";
  case 0x02b5: return "PathIsUNCW";
  case 0x02b6: return "PathIsURLA";
  case 0x02b7: return "PathIsURLW";
  case 0x02b8: return "PathMakePrettyA";
  case 0x02b9: return "PathMakePrettyW";
  case 0x02ba: return "PathMakeSystemFolderA";
  case 0x02bb: return "PathMakeSystemFolderW";
  case 0x02bc: return "PathMatchSpecA";
  case 0x02bd: return "PathMatchSpecExA";
  case 0x02be: return "PathMatchSpecExW";
  case 0x02bf: return "PathMatchSpecW";
  case 0x02c0: return "PathParseIconLocationA";
  case 0x02c1: return "PathParseIconLocationW";
  case 0x02c2: return "PathQuoteSpacesA";
  case 0x02c3: return "PathQuoteSpacesW";
  case 0x02c4: return "PathRelativePathToA";
  case 0x02c5: return "PathRelativePathToW";
  case 0x02c6: return "PathRemoveArgsA";
  case 0x02c7: return "PathRemoveArgsW";
  case 0x02c8: return "PathRemoveBackslashA";
  case 0x02c9: return "PathRemoveBackslashW";
  case 0x02ca: return "PathRemoveBlanksA";
  case 0x02cb: return "PathRemoveBlanksW";
  case 0x02cc: return "PathRemoveExtensionA";
  case 0x02cd: return "PathRemoveExtensionW";
  case 0x02ce: return "PathRemoveFileSpecA";
  case 0x02cf: return "PathRemoveFileSpecW";
  case 0x02d0: return "PathRenameExtensionA";
  case 0x02d1: return "PathRenameExtensionW";
  case 0x02d2: return "PathSearchAndQualifyA";
  case 0x02d3: return "PathSearchAndQualifyW";
  case 0x02d4: return "PathSetDlgItemPathA";
  case 0x02d5: return "PathSetDlgItemPathW";
  case 0x02d6: return "PathSkipRootA";
  case 0x02d7: return "PathSkipRootW";
  case 0x02d8: return "PathStripPathA";
  case 0x02d9: return "PathStripPathW";
  case 0x02da: return "PathStripToRootA";
  case 0x02db: return "PathStripToRootW";
  case 0x02dc: return "PathUnExpandEnvStringsA";
  case 0x02dd: return "PathUnExpandEnvStringsW";
  case 0x02de: return "PathUndecorateA";
  case 0x02df: return "PathUndecorateW";
  case 0x02e0: return "PathUnmakeSystemFolderA";
  case 0x02e1: return "PathUnmakeSystemFolderW";
  case 0x02e2: return "PathUnquoteSpacesA";
  case 0x02e3: return "PathUnquoteSpacesW";
  case 0x00db: return "QISearch";
  case 0x0007: return "SHAllocShared";
  case 0x0159: return "SHAnsiToAnsi";
  case 0x00d7: return "SHAnsiToUnicode";
  case 0x02e4: return "SHAutoComplete";
  case 0x02e5: return "SHCopyKeyA";
  case 0x02e6: return "SHCopyKeyW";
  case 0x000c: return "SHCreateMemStream";
  case 0x02e7: return "SHCreateShellPalette";
  case 0x02e8: return "SHCreateStreamOnFileA";
  case 0x02e9: return "SHCreateStreamOnFileEx";
  case 0x02ea: return "SHCreateStreamOnFileW";
  case 0x02eb: return "SHCreateStreamWrapper";
  case 0x0010: return "SHCreateThread";
  case 0x02ec: return "SHCreateThreadRef";
  case 0x02ed: return "SHDeleteEmptyKeyA";
  case 0x02ee: return "SHDeleteEmptyKeyW";
  case 0x02ef: return "SHDeleteKeyA";
  case 0x02f0: return "SHDeleteKeyW";
  case 0x02f1: return "SHDeleteOrphanKeyA";
  case 0x02f2: return "SHDeleteOrphanKeyW";
  case 0x02f3: return "SHDeleteValueA";
  case 0x02f4: return "SHDeleteValueW";
  case 0x02f5: return "SHEnumKeyExA";
  case 0x02f6: return "SHEnumKeyExW";
  case 0x02f7: return "SHEnumValueA";
  case 0x02f8: return "SHEnumValueW";
  case 0x0161: return "SHFormatDateTimeA";
  case 0x0162: return "SHFormatDateTimeW";
  case 0x000a: return "SHFreeShared";
  case 0x02f9: return "SHGetInverseCMAP";
  case 0x02fa: return "SHGetThreadRef";
  case 0x02fb: return "SHGetValueA";
  case 0x02fc: return "SHGetValueW";
  case 0x0203: return "SHGetViewStatePropertyBag";
  case 0x00cc: return "SHIsChildOrSelf";
  case 0x02fd: return "SHIsLowMemoryMachine";
  case 0x01e7: return "SHLoadIndirectString";
  case 0x0008: return "SHLockShared";
  case 0x00b9: return "SHMessageBoxCheckA";
  case 0x00bf: return "SHMessageBoxCheckW";
  case 0x02fe: return "SHOpenRegStream2A";
  case 0x02ff: return "SHOpenRegStream2W";
  case 0x0300: return "SHOpenRegStreamA";
  case 0x0301: return "SHOpenRegStreamW";
  case 0x0237: return "SHPropertyBag_ReadStrAlloc";
  case 0x0302: return "SHQueryInfoKeyA";
  case 0x0303: return "SHQueryInfoKeyW";
  case 0x0304: return "SHQueryValueExA";
  case 0x0305: return "SHQueryValueExW";
  case 0x0306: return "SHRegCloseUSKey";
  case 0x0307: return "SHRegCreateUSKeyA";
  case 0x0308: return "SHRegCreateUSKeyW";
  case 0x0309: return "SHRegDeleteEmptyUSKeyA";
  case 0x030a: return "SHRegDeleteEmptyUSKeyW";
  case 0x030b: return "SHRegDeleteUSValueA";
  case 0x030c: return "SHRegDeleteUSValueW";
  case 0x030d: return "SHRegDuplicateHKey";
  case 0x030e: return "SHRegEnumUSKeyA";
  case 0x030f: return "SHRegEnumUSKeyW";
  case 0x0310: return "SHRegEnumUSValueA";
  case 0x0311: return "SHRegEnumUSValueW";
  case 0x0312: return "SHRegGetBoolUSValueA";
  case 0x0313: return "SHRegGetBoolUSValueW";
  case 0x0118: return "SHRegGetIntW";
  case 0x0314: return "SHRegGetPathA";
  case 0x0315: return "SHRegGetPathW";
  case 0x0316: return "SHRegGetUSValueA";
  case 0x0317: return "SHRegGetUSValueW";
  case 0x0318: return "SHRegGetValueA";
  case 0x0319: return "SHRegGetValueW";
  case 0x031a: return "SHRegOpenUSKeyA";
  case 0x031b: return "SHRegOpenUSKeyW";
  case 0x031c: return "SHRegQueryInfoUSKeyA";
  case 0x031d: return "SHRegQueryInfoUSKeyW";
  case 0x031e: return "SHRegQueryUSValueA";
  case 0x031f: return "SHRegQueryUSValueW";
  case 0x0320: return "SHRegSetPathA";
  case 0x0321: return "SHRegSetPathW";
  case 0x0322: return "SHRegSetUSValueA";
  case 0x0323: return "SHRegSetUSValueW";
  case 0x0324: return "SHRegWriteUSValueA";
  case 0x0325: return "SHRegWriteUSValueW";
  case 0x0326: return "SHRegisterValidateTemplate";
  case 0x0327: return "SHReleaseThreadRef";
  case 0x01d3: return "SHRunIndirectRegClientCommand";
  case 0x01b0: return "SHSendMessageBroadcastA";
  case 0x01b1: return "SHSendMessageBroadcastW";
  case 0x0328: return "SHSetThreadRef";
  case 0x0329: return "SHSetValueA";
  case 0x032a: return "SHSetValueW";
  case 0x032b: return "SHSkipJunction";
  case 0x032c: return "SHStrDupA";
  case 0x032d: return "SHStrDupW";
  case 0x00cb: return "SHStripMneumonicA";
  case 0x00e1: return "SHStripMneumonicW";
  case 0x00d9: return "SHUnicodeToAnsi";
  case 0x015a: return "SHUnicodeToUnicode";
  case 0x0009: return "SHUnlockShared";
  case 0x032e: return "ShellMessageBoxA";
  case 0x0184: return "ShellMessageBoxW";
  case 0x032f: return "StrCSpnA";
  case 0x0330: return "StrCSpnIA";
  case 0x0331: return "StrCSpnIW";
  case 0x0332: return "StrCSpnW";
  case 0x0333: return "StrCatBuffA";
  case 0x0334: return "StrCatBuffW";
  case 0x0335: return "StrCatChainW";
  case 0x0336: return "StrCatW";
  case 0x0337: return "StrChrA";
  case 0x0338: return "StrChrIA";
  case 0x0339: return "StrChrIW";
  case 0x033a: return "StrChrNIW";
  case 0x033b: return "StrChrNW";
  case 0x033c: return "StrChrW";
  case 0x009b: return "StrCmpCA";
  case 0x009c: return "StrCmpCW";
  case 0x009d: return "StrCmpICA";
  case 0x009e: return "StrCmpICW";
  case 0x033d: return "StrCmpIW";
  case 0x033e: return "StrCmpLogicalW";
  case 0x033f: return "StrCmpNA";
  case 0x0097: return "StrCmpNCA";
  case 0x0098: return "StrCmpNCW";
  case 0x0340: return "StrCmpNIA";
  case 0x0099: return "StrCmpNICA";
  case 0x009a: return "StrCmpNICW";
  case 0x0341: return "StrCmpNIW";
  case 0x0342: return "StrCmpNW";
  case 0x0343: return "StrCmpW";
  case 0x0344: return "StrCpyNW";
  case 0x0345: return "StrCpyW";
  case 0x0346: return "StrDupA";
  case 0x0347: return "StrDupW";
  case 0x0348: return "StrFormatByteSize64A";
  case 0x0349: return "StrFormatByteSizeA";
  case 0x034a: return "StrFormatByteSizeEx";
  case 0x034b: return "StrFormatByteSizeW";
  case 0x034c: return "StrFormatKBSizeA";
  case 0x034d: return "StrFormatKBSizeW";
  case 0x034e: return "StrFromTimeIntervalA";
  case 0x034f: return "StrFromTimeIntervalW";
  case 0x0350: return "StrIsIntlEqualA";
  case 0x0351: return "StrIsIntlEqualW";
  case 0x0352: return "StrNCatA";
  case 0x0353: return "StrNCatW";
  case 0x0354: return "StrPBrkA";
  case 0x0355: return "StrPBrkW";
  case 0x0356: return "StrRChrA";
  case 0x0357: return "StrRChrIA";
  case 0x0358: return "StrRChrIW";
  case 0x0359: return "StrRChrW";
  case 0x035a: return "StrRStrIA";
  case 0x035b: return "StrRStrIW";
  case 0x035c: return "StrRetToBSTR";
  case 0x035d: return "StrRetToBufA";
  case 0x035e: return "StrRetToBufW";
  case 0x035f: return "StrRetToStrA";
  case 0x0360: return "StrRetToStrW";
  case 0x0361: return "StrSpnA";
  case 0x0362: return "StrSpnW";
  case 0x0363: return "StrStrA";
  case 0x0364: return "StrStrIA";
  case 0x0365: return "StrStrIW";
  case 0x0366: return "StrStrNIW";
  case 0x0367: return "StrStrNW";
  case 0x0368: return "StrStrW";
  case 0x0369: return "StrToInt64ExA";
  case 0x036a: return "StrToInt64ExW";
  case 0x036b: return "StrToIntA";
  case 0x036c: return "StrToIntExA";
  case 0x036d: return "StrToIntExW";
  case 0x036e: return "StrToIntW";
  case 0x036f: return "StrTrimA";
  case 0x0370: return "StrTrimW";
  case 0x0371: return "UrlApplySchemeA";
  case 0x0372: return "UrlApplySchemeW";
  case 0x0373: return "UrlCanonicalizeA";
  case 0x0374: return "UrlCanonicalizeW";
  case 0x0375: return "UrlCombineA";
  case 0x0376: return "UrlCombineW";
  case 0x0377: return "UrlCompareA";
  case 0x0378: return "UrlCompareW";
  case 0x0379: return "UrlCreateFromPathA";
  case 0x037a: return "UrlCreateFromPathW";
  case 0x037b: return "UrlEscapeA";
  case 0x037c: return "UrlEscapeW";
  case 0x01ce: return "UrlFixupW";
  case 0x037d: return "UrlGetLocationA";
  case 0x037e: return "UrlGetLocationW";
  case 0x037f: return "UrlGetPartA";
  case 0x0380: return "UrlGetPartW";
  case 0x0381: return "UrlHashA";
  case 0x0382: return "UrlHashW";
  case 0x0383: return "UrlIsA";
  case 0x0384: return "UrlIsNoHistoryA";
  case 0x0385: return "UrlIsNoHistoryW";
  case 0x0386: return "UrlIsOpaqueA";
  case 0x0387: return "UrlIsOpaqueW";
  case 0x0388: return "UrlIsW";
  case 0x0389: return "UrlUnescapeA";
  case 0x038a: return "UrlUnescapeW";
  case 0x0114: return "WhichPlatform";
  case 0x038b: return "wnsprintfA";
  case 0x038c: return "wnsprintfW";
  case 0x038d: return "wvnsprintfA";
  case 0x038e: return "wvnsprintfW";
  }
  return nullptr;
}


}
}

#endif

