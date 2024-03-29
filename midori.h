/*
    This file is part of AKA firmware.
	
	Default configuration
	
*/

#ifndef _MIDORI_H
#define _MIDORI_H

//extern millis_t previousMillisCmd;

#include "Adafruit_NeoPixel.h"

#include "pins.h"
#include "leds.h"

#include "command.h"
#include "sensors.h"

#define WHITE_LINE_THRESHOLD 1500
#define DT 1

#define STOP_MODE  0
#define AUTO_MODE  1
#define ONE_IN_PUNCH  2
#define ONE_IN_PUNCH_SEEK  3

#define LEFT_MOTOR_CANID 106
#define RIGHT_MOTOR_CANID 105



#endif
