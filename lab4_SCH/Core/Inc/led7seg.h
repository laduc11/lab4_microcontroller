/*
 * led7seg.h
 *
 *  Created on: Nov 15, 2023
 *      Author: DELL
 */

#ifndef INC_LED7SEG_H_
#define INC_LED7SEG_H_

#include "main.h"
#include "software_timer.h"

void display7seg(uint8_t num);
void display1LED();
void update7seg();
void displayVertical(uint8_t num);
void displayHorizon(uint8_t num);

#endif /* INC_LED7SEG_H_ */
