/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#ifndef NAS_KEY_SET_IDENTIFIER_H_
#define NAS_KEY_SET_IDENTIFIER_H_

#include <stdint.h>
#include "bstrlib.h"

#define NAS_KEY_SET_IDENTIFIER_MINIMUM_LENGTH 1
#define NAS_KEY_SET_IDENTIFIER_MAXIMUM_LENGTH 1

typedef struct nasKeySetIdentifier {
#define NAS_KEY_SET_IDENTIFIER_NATIVE 0
#define NAS_KEY_SET_IDENTIFIER_MAPPED 1
  uint8_t tsc : 1;  // type of security context flag
#define NAS_KEY_SET_IDENTIFIER_NOT_AVAILABLE 0b111
  uint8_t naskeysetidentifier : 3;
} NASKeySetIdentifier;

int encode_nas_key_set_identifier(
    NASKeySetIdentifier* naskeysetidentifier, uint8_t iei, uint8_t* buffer,
    uint32_t len);
int encode_u8_nas_key_set_identifier(NASKeySetIdentifier* naskeysetidentifier);
int decode_nas_key_set_identifier(
    NASKeySetIdentifier* naskeysetidentifier, uint8_t iei, uint8_t* buffer,
    uint32_t len);
int decode_u8_nas_key_set_identifier(
    NASKeySetIdentifier* naskeysetidentifier, uint8_t iei, uint8_t value,
    uint32_t len);

#endif
