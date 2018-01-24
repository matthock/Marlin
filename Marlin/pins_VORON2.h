/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Arduino Mega with RAMPS v1.4 pin assignments for VORON2 w/ Expander Board
 */

#ifndef BOARD_NAME
  #define BOARD_NAME "VORON2"
#endif

#include "pins_RAMPS.h"
#define HEATER_1_PIN	   10
#define HEATER_2_PIN	   9
#define HEATER_BED_PIN	   11
#define FAN_PIN			   6
#define E0_AUTO_FAN_PIN	   5
#define E1_AUTO_FAN_PIN	   5
#define CONTROLLER_FAN_PIN 8

#define Z_MIN_PROBE_PIN    19 // Z_MAX

#define Z2_STEP_PIN        64
#define Z2_DIR_PIN         59
#define Z2_ENABLE_PIN      44

#define Z3_STEP_PIN        40
#define Z3_DIR_PIN         63
#define Z3_ENABLE_PIN      42

#define Z4_STEP_PIN        57
#define Z4_DIR_PIN         66
#define Z4_ENABLE_PIN      58

// Flipping X and Y
#define Y_STEP_PIN         54
#define Y_DIR_PIN          55
#define Y_ENABLE_PIN       38
#define Y_CS_PIN           53

#define X_STEP_PIN         60
#define X_DIR_PIN          61
#define X_ENABLE_PIN       56
#define X_CS_PIN           49


