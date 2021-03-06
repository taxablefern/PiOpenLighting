/*
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * BaseTypes.h
 * Copyright (C) 2005-2009 Simon Newton
 */

/**
 * @file BaseTypes.h
 * @deprecated Use Constants.h instead.
 */

#ifndef INCLUDE_OLA_BASETYPES_H_
#define INCLUDE_OLA_BASETYPES_H_

#include <stdint.h>
#include <ola/Constants.h>

#ifdef __cplusplus
extern "C" {
#endif

enum {
  DMX_UNIVERSE_SIZE = 512
};

/**
 * @brief The minimum value a DMX512 slot can take.
 */
static const uint8_t DMX_MIN_CHANNEL_VALUE = ola::DMX_MIN_SLOT_VALUE;

/**
 * @brief The maximum value a DMX512 slot can take.
 */
static const uint8_t DMX_MAX_CHANNEL_VALUE = ola::DMX_MAX_SLOT_VALUE;

/**
 * @brief The start code for DMX512 data.
 * This is often referred to as NSC for "Null Start Code".
 */
static const uint8_t DMX512_START_CODE = ola::DMX512_START_CODE;

/**
 * @brief The default port which olad listens on for incomming RPC connections.
 */
static const int OLA_DEFAULT_PORT = ola::OLA_DEFAULT_PORT;

/**
 * @brief The ESTA manufacturer code for the Open Lighting Project.
 */
static const uint16_t OPEN_LIGHTING_ESTA_CODE = ola::OPEN_LIGHTING_ESTA_CODE;

/**
 * @brief The maximum universe number.
 */
static const uint32_t MAX_UNIVERSE = ola::MAX_UNIVERSE;

#ifdef __cplusplus
}
#endif

#endif  // INCLUDE_OLA_BASETYPES_H_
