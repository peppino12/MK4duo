/****************************************************************************************
* 1705
* ULTRATRONICS
*****************************************************************************************/

//###CHIP
#if DISABLED(ARDUINO_ARCH_SAM)
  #error Oops!  Make sure you have 'Arduino Due' selected from the 'Tools -> Boards' menu.
#endif//@@@

#define KNOWN_BOARD 1

//###BOARD_NAME
#ifndef BOARD_NAME
	#define BOARD_NAME "Ultratronics v1.0"
#endif
//@@@


//###X_AXIS
#define ORIG_X_STEP_PIN 35
#define ORIG_X_DIR_PIN 34
#define ORIG_X_ENABLE_PIN 37
#define ORIG_X_CS_PIN -1

//###Y_AXIS
#define ORIG_Y_STEP_PIN 22
#define ORIG_Y_DIR_PIN 23
#define ORIG_Y_ENABLE_PIN 33
#define ORIG_Y_CS_PIN -1

//###Z_AXIS
#define ORIG_Z_STEP_PIN 25
#define ORIG_Z_DIR_PIN 26
#define ORIG_Z_ENABLE_PIN 24
#define ORIG_Z_CS_PIN -1

//###EXTRUDER_0
#define ORIG_E0_STEP_PIN 47
#define ORIG_E0_DIR_PIN 46
#define ORIG_E0_ENABLE_PIN 48
#define ORIG_E0_CS_PIN -1
#define ORIG_SOL0_PIN -1

//###EXTRUDER_1
#define ORIG_E1_STEP_PIN 44
#define ORIG_E1_DIR_PIN 36
#define ORIG_E1_ENABLE_PIN 45
#define ORIG_E1_CS_PIN -1
#define ORIG_SOL1_PIN -1

//###EXTRUDER_2
#define ORIG_E2_STEP_PIN 42
#define ORIG_E2_DIR_PIN 41
#define ORIG_E2_ENABLE_PIN 43
#define ORIG_E2_CS_PIN -1
#define ORIG_SOL2_PIN -1

//###EXTRUDER_3
#define ORIG_E3_STEP_PIN 39
#define ORIG_E3_DIR_PIN 38
#define ORIG_E3_ENABLE_PIN 40
#define ORIG_E3_CS_PIN -1
#define ORIG_SOL3_PIN -1

//###EXTRUDER_4
#define ORIG_E4_STEP_PIN -1
#define ORIG_E4_DIR_PIN -1
#define ORIG_E4_ENABLE_PIN -1
#define ORIG_E4_CS_PIN -1
#define ORIG_SOL4_PIN -1

//###EXTRUDER_5
#define ORIG_E5_STEP_PIN -1
#define ORIG_E5_DIR_PIN -1
#define ORIG_E5_ENABLE_PIN -1
#define ORIG_E5_CS_PIN -1
#define ORIG_SOL5_PIN -1

//###EXTRUDER_6
#define ORIG_E6_STEP_PIN -1
#define ORIG_E6_DIR_PIN -1
#define ORIG_E6_ENABLE_PIN -1
#define ORIG_E6_CS_PIN -1
#define ORIG_SOL6_PIN -1

//###EXTRUDER_7
#define ORIG_E7_STEP_PIN -1
#define ORIG_E7_DIR_PIN -1
#define ORIG_E7_ENABLE_PIN -1
#define ORIG_E7_CS_PIN -1
#define ORIG_SOL7_PIN -1

//###ENDSTOP
#define ORIG_X_MIN_PIN 31
#define ORIG_X_MAX_PIN 30
#define ORIG_Y_MIN_PIN 12
#define ORIG_Y_MAX_PIN 11
#define ORIG_Z_MIN_PIN 29
#define ORIG_Z_MAX_PIN 28
#define ORIG_Z2_MIN_PIN -1
#define ORIG_Z2_MAX_PIN -1
#define ORIG_Z3_MIN_PIN -1
#define ORIG_Z3_MAX_PIN -1
#define ORIG_Z4_MIN_PIN -1
#define ORIG_Z4_MAX_PIN -1
#define ORIG_E_MIN_PIN -1
#define ORIG_Z_PROBE_PIN -1

//###SINGLE_ENDSTOP
#define X_STOP_PIN -1
#define Y_STOP_PIN -1
#define Z_STOP_PIN -1

//###HEATER
#define ORIG_HEATER_0_PIN 3
#define ORIG_HEATER_1_PIN 8
#define ORIG_HEATER_2_PIN 7
#define ORIG_HEATER_3_PIN 9
#define ORIG_HEATER_BED_PIN 2
#define ORIG_HEATER_CHAMBER_PIN -1
#define ORIG_COOLER_PIN -1

//###TEMPERATURE
#define ORIG_TEMP_0_PIN 0
#define ORIG_TEMP_1_PIN 2
#define ORIG_TEMP_2_PIN 3
#define ORIG_TEMP_3_PIN 4
#define ORIG_TEMP_BED_PIN 1
#define ORIG_TEMP_CHAMBER_PIN -1
#define ORIG_TEMP_COOLER_PIN -1

//###FAN
#define ORIG_FAN_PIN 6
#define ORIG_FAN1_PIN 5
#define ORIG_FAN2_PIN -1
#define ORIG_FAN3_PIN -1

//###MISC
#define ORIG_PS_ON_PIN 32
#define ORIG_BEEPER_PIN 27
#define LED_PIN 13
#define SDPOWER -1
#define SD_DETECT_PIN 60
#define SDSS 59
#define KILL_PIN -1
#define DEBUG_PIN -1
#define SUICIDE_PIN -1

//###LASER
#define ORIG_LASER_PWR_PIN -1
#define ORIG_LASER_PWM_PIN -1

//###SERVOS
#if NUM_SERVOS > 0
	#define SERVO0_PIN 11
	#if NUM_SERVOS > 1
		#define SERVO1_PIN 12
		#if NUM_SERVOS > 2
			#define SERVO2_PIN -1
			#if NUM_SERVOS > 3
				#define SERVO3_PIN -1
			#endif
		#endif
	#endif
#endif
//@@@

//###UNKNOWN_PINS
#define EEPROM_SD
#define MAX6675_SS            65
#define MAX31855_SS0          65
#define MAX31855_SS1          52
#define MAX31855_SS2          51
#define MAX31855_SS3          50
#define ENC424_SS             61
//@@@

//###IF_BLOCKS
#if ENABLED(REPRAPWORLD_GRAPHICAL_LCD)

  #define LCD_PINS_RS         62  // CS chip select / SS chip slave select
  #define LCD_PINS_ENABLE     75  // SID (MOSI)
  #define LCD_PINS_D4         76  // SCK (CLK) clock
  #define ORIG_BEEPER_PIN     -1

  #define BTN_EN1             20
  #define BTN_EN2             21
  #define BTN_ENC             64

#endif // REPRAPWORLD_GRAPHICAL_LCD
//@@@