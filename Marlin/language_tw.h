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
 * Chinese
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_TW_H
#define LANGUAGE_TW_H
#define DISPLAY_CHARSET_tc_TW

#ifdef CUSTOM_MACHINE_NAME
#define WELCOME_MSG                         MACHINE_NAME
#else
#define WELCOME_MSG                         "\xa7\xa8\x87\x88"
#endif

#define MSG_ABOUT                           "\xba\xfd"
#define MSG_LASER                           "\xa1\xa2\xff\xff"
#define MSG_SD_INSERTED                     "\xab\xac\xad\xae\xaf\xb0"
#define MSG_SD_REMOVED                      "\xab\xac\xad\xae\xb1\xb2"
#define MSG_MAIN                            "\xb3\xb4\xb5"
#define MSG_AUTOSTART                       "\xb6\xb7\xb8\xb9"
#define MSG_DISABLE_STEPPERS                "\xba\xbb\xbc\xbd\xbe\xb7"
#define MSG_AUTO_HOME                       "\xb6\xb7\xbf\xc0\xc1"
#define MSG_LEVEL_BED_HOMING                "\x89\x8a XYZ"
#define MSG_LEVEL_BED_WAITING               "\x8b\x8c\xb8\xb9"
#define MSG_LEVEL_BED_DONE                  "\xeb\x9b\x8d\x8e"
#define MSG_LEVEL_BED_CANCEL                "\x8f\x90"
#define MSG_SET_HOME_OFFSETS                "\xc2\xc3\xc0\xc1\x97\xcc"
#define MSG_HOME_OFFSETS_APPLIED            "\xc0\xc1\x97\xcc\xae\xc2\xc3"
#define MSG_SET_ORIGIN                      "\xc2\xc3\xc0\xc1"
#define MSG_PREHEAT_1                       "\xc4\xc5 PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " \x93\x94"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " \xc5\xd1"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " \xc2\xc3"
#define MSG_PREHEAT_2                       "\xc4\xc5 ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " \x93\x94"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " \xc5\xd1"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " \xc2\xc3"
#define MSG_COOLDOWN                        "\x9f\xa0"
#define MSG_SWITCH_PS_ON                    "\xc8\xc9\xb8\x96"
#define MSG_SWITCH_PS_OFF                   "\xc8\xc9\xba\xbb"
#define MSG_EXTRUDE                         "\xca\xb2"
#define MSG_RETRACT                         "\xbf\x9d"
#define MSG_MOVE_AXIS                       "\xcc\xb7\xcd"
#define MSG_LEVEL_BED                       "\xeb\xec\x9b\x99"
#define MSG_MOVE_X                          "\xcc\xb7\xff\xff X"
#define MSG_MOVE_Y                          "\xcc\xb7\xff\xff Y"
#define MSG_MOVE_Z                          "\xcc\xb7\xff\xff Z"
#define MSG_MOVE_E                          "\xca\xb2\x98"
#define MSG_MOVE_01MM                       "\xcc\xb7\xff\xff 0.1mm"
#define MSG_MOVE_1MM                        "\xcc\xb7\xff\xff 1mm"
#define MSG_MOVE_10MM                       "\xcc\xb7\xff\xff 10mm"
#define MSG_SPEED                           "\xce\xff\xff\xcf"
#define MSG_NOZZLE                          "\xf9\xff\xff\xfa"
#define MSG_BED                             "\xc5\xff\xff\xd1"
#define MSG_FAN_SPEED                       "\xd2\xd3\xce\xcf"
#define MSG_FLOW                            "\x92\xb2\xce\xcf"
#define MSG_CONTROL                         "\xd4\xd5"
#define MSG_MIN                             LCD_STR_THERMOMETER " \xd6\xd8"
#define MSG_MAX                             LCD_STR_THERMOMETER " \xd6\xd7"
#define MSG_FACTOR                          LCD_STR_THERMOMETER " \xd9\xda"
#define MSG_AUTOTEMP                        "\xb6\xb7\xd4\xc7"
#define MSG_ON                              "\xb8 "  //\xb8 intentional space to shift wide symbol to the left
#define MSG_OFF                             "\xba "  //\xba intentional space to shift wide symbol to the left
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_ACC                             "Accel"
#define MSG_VX_JERK                         "Vx-jerk"
#define MSG_VY_JERK                         "Vy-jerk"
#define MSG_VZ_JERK                         "Vz-jerk"
#define MSG_VE_JERK                         "Ve-jerk"
#define MSG_VMAX                            "Vmax "
#define MSG_VMIN                            "Vmin"
#define MSG_VTRAV_MIN                       "VTrav min"
#define MSG_AMAX                            "Amax "
#define MSG_A_RETRACT                       "A-retract"
#define MSG_A_TRAVEL                        "A-travel"
#define MSG_XSTEPS                          "Xsteps/mm"
#define MSG_YSTEPS                          "Ysteps/mm"
#define MSG_ZSTEPS                          "Zsteps/mm"
#define MSG_ESTEPS                          "Esteps/mm"
#define MSG_TEMPERATURE                     "\xc7\xcf"
#define MSG_MOTION                          "\xb7\xf5"
#define MSG_VOLUMETRIC                      "\xf7\xf8"
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#define MSG_FILAMENT_DIAM                   "Fil. Dia."
#define MSG_CONTRAST                        "LCD contrast"
#define MSG_STORE_EPROM                     "Store memory"
#define MSG_LOAD_EPROM                      "Load memory"
#define MSG_RESTORE_FAILSAFE                "\xe6\xe7\xc0\xc2\xc3"
#define MSG_REFRESH                         "\xe9\xea"
#define MSG_WATCH                           "\xdb\xdc\xdd\xde"
#define MSG_PREPARE                         "\xa7\xa8"
#define MSG_TUNE                            "\xeb\xec"
#define MSG_PAUSE_PRINT                     "\xed\xee\xa9\xaa"
#define MSG_RESUME_PRINT                    "\xef\xf0\xa9\xaa"
#define MSG_STOP_PRINT                      "\xee\xf1\xa9\xaa"
#define MSG_CARD_MENU                       "\xab\xac\xad"
#define MSG_NO_CARD                         "\xdf\xaf\xad"
#define MSG_DWELL                           "Sleep..."
#define MSG_USERWAIT                        "Wait for user..."
#define MSG_RESUMING                        "Resuming print"
#define MSG_PRINT_ABORTED                   "Print aborted"
#define MSG_NO_MOVE                         "No move."
#define MSG_KILLED                          "KILLED. "
#define MSG_STOPPED                         "STOPPED. "
#define MSG_CONTROL_RETRACT                 "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
#define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
#define MSG_AUTORETRACT                     "AutoRetr."
#define MSG_FILAMENTCHANGE                  "Change filament"
#define MSG_INIT_SDCARD                     "Init. SD card"
#define MSG_CNG_SDCARD                      "Change SD card"
#define MSG_ZPROBE_OUT                      "Z probe out. bed"
#define MSG_HOME                            "Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           "first"
#define MSG_ZPROBE_ZOFFSET                  "Z Offset"
#define MSG_BABYSTEP_X                      "Babystep X"
#define MSG_BABYSTEP_Y                      "Babystep Y"
#define MSG_BABYSTEP_Z                      "Babystep Z"
#define MSG_ENDSTOP_ABORT                   "Endstop abort"
#define MSG_HEATING_FAILED_LCD              "Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 "Err: MAXTEMP BED"
#define MSG_DELTA_CALIBRATE                 "Delta /xfb/xa7"
#define MSG_DELTA_CALIBRATE_X               "/xfb/xa7 X"
#define MSG_DELTA_CALIBRATE_Y               "/xfb/xa7 Y"
#define MSG_DELTA_CALIBRATE_Z               "/xfb/xa7 Z"
#define MSG_DELTA_CALIBRATE_CENTER          "/xfb/xa7/xa5/x91"

#endif // LANGUAGE_CN_H
