/*BEGIN_LEGAL 

Copyright (c) 2020 Intel Corporation

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
  
END_LEGAL */
/// @file xed-ild-enum.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(XED_ILD_ENUM_H)
# define XED_ILD_ENUM_H
#include "xed-common-hdrs.h"
#define XED_ILD_AMD_3DNOW_DEFINED 1
#define XED_ILD_AMD_XOP8_DEFINED 1
#define XED_ILD_AMD_XOP9_DEFINED 1
#define XED_ILD_AMD_XOPA_DEFINED 1
#define XED_ILD_EVEX_MAP1_DEFINED 1
#define XED_ILD_EVEX_MAP2_DEFINED 1
#define XED_ILD_EVEX_MAP3_DEFINED 1
#define XED_ILD_LEGACY_MAP0_DEFINED 1
#define XED_ILD_LEGACY_MAP1_DEFINED 1
#define XED_ILD_LEGACY_MAP2_DEFINED 1
#define XED_ILD_LEGACY_MAP3_DEFINED 1
#define XED_ILD_VEX_MAP1_DEFINED 1
#define XED_ILD_VEX_MAP2_DEFINED 1
#define XED_ILD_VEX_MAP3_DEFINED 1
#define XED_ILD_MAP_INVALID_DEFINED 1
#define XED_ILD_LAST_DEFINED 1
typedef enum {
  XED_ILD_AMD_3DNOW=4,
  XED_ILD_AMD_XOP8=8,
  XED_ILD_AMD_XOP9=9,
  XED_ILD_AMD_XOPA=10,
  XED_ILD_EVEX_MAP1=1,
  XED_ILD_EVEX_MAP2=2,
  XED_ILD_EVEX_MAP3=3,
  XED_ILD_LEGACY_MAP0=0,
  XED_ILD_LEGACY_MAP1=1,
  XED_ILD_LEGACY_MAP2=2,
  XED_ILD_LEGACY_MAP3=3,
  XED_ILD_VEX_MAP1=1,
  XED_ILD_VEX_MAP2=2,
  XED_ILD_VEX_MAP3=3,
  XED_ILD_MAP_INVALID,
  XED_ILD_LAST
} xed_ild_map_enum_t;

/// This converts strings to #xed_ild_map_enum_t types.
/// @param s A C-string.
/// @return #xed_ild_map_enum_t
/// @ingroup ENUM
XED_DLL_EXPORT xed_ild_map_enum_t str2xed_ild_map_enum_t(const char* s);
/// This converts strings to #xed_ild_map_enum_t types.
/// @param p An enumeration element of type xed_ild_map_enum_t.
/// @return string
/// @ingroup ENUM
XED_DLL_EXPORT const char* xed_ild_map_enum_t2str(const xed_ild_map_enum_t p);

/// Returns the last element of the enumeration
/// @return xed_ild_map_enum_t The last element of the enumeration.
/// @ingroup ENUM
XED_DLL_EXPORT xed_ild_map_enum_t xed_ild_map_enum_t_last(void);
#endif
