/*BEGIN_LEGAL 

Copyright (c) 2019 Intel Corporation

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
/// @file xed-encoder-iforms.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(XED_ENCODER_IFORMS_H)
# define XED_ENCODER_IFORMS_H
#include "xed-types.h"
typedef struct xed_encoder_iforms_s {
    xed_uint32_t x_SIBBASE_ENCODE;
    xed_uint32_t x_SIBBASE_ENCODE_SIB1;
    xed_uint32_t x_SIBINDEX_ENCODE;
    xed_uint32_t x_MODRM_MOD_ENCODE;
    xed_uint32_t x_MODRM_RM_ENCODE;
    xed_uint32_t x_MODRM_RM_ENCODE_EA16_SIB0;
    xed_uint32_t x_MODRM_RM_ENCODE_EA64_SIB0;
    xed_uint32_t x_MODRM_RM_ENCODE_EA32_SIB0;
    xed_uint32_t x_SIB_NT;
    xed_uint32_t x_DISP_NT;
    xed_uint32_t x_REMOVE_SEGMENT;
    xed_uint32_t x_REX_PREFIX_ENC;
    xed_uint32_t x_PREFIX_ENC;
    xed_uint32_t x_VEXED_REX;
    xed_uint32_t x_XOP_TYPE_ENC;
    xed_uint32_t x_XOP_MAP_ENC;
    xed_uint32_t x_XOP_REXXB_ENC;
    xed_uint32_t x_VEX_TYPE_ENC;
    xed_uint32_t x_VEX_REXR_ENC;
    xed_uint32_t x_VEX_REXXB_ENC;
    xed_uint32_t x_VEX_MAP_ENC;
    xed_uint32_t x_VEX_REG_ENC;
    xed_uint32_t x_VEX_ESCVL_ENC;
    xed_uint32_t x_SE_IMM8;
    xed_uint32_t x_VSIB_ENC_BASE;
    xed_uint32_t x_VSIB_ENC;
    xed_uint32_t x_EVEX_62_REXR_ENC;
    xed_uint32_t x_EVEX_REXX_ENC;
    xed_uint32_t x_EVEX_REXB_ENC;
    xed_uint32_t x_EVEX_REXRR_ENC;
    xed_uint32_t x_EVEX_MAP_ENC;
    xed_uint32_t x_EVEX_REXW_VVVV_ENC;
    xed_uint32_t x_EVEX_UPP_ENC;
    xed_uint32_t x_AVX512_EVEX_BYTE3_ENC;
    xed_uint32_t x_UIMMv;
    xed_uint32_t x_SIMMz;
    xed_uint32_t x_SIMM8;
    xed_uint32_t x_UIMM8;
    xed_uint32_t x_UIMM8_1;
    xed_uint32_t x_UIMM16;
    xed_uint32_t x_UIMM32;
    xed_uint32_t x_BRDISP8;
    xed_uint32_t x_BRDISP32;
    xed_uint32_t x_BRDISPz;
    xed_uint32_t x_MEMDISPv;
    xed_uint32_t x_MEMDISP32;
    xed_uint32_t x_MEMDISP16;
    xed_uint32_t x_MEMDISP8;
    xed_uint32_t x_MEMDISP;
} xed_encoder_iforms_t;
#endif
