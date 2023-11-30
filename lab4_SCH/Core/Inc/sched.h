/*
 * sched.h
 *
 *  Created on: Nov 29, 2023
 *      Author: DELL
 */

#ifndef INC_SCHED_H_
#define INC_SCHED_H_

#include "main.h"
//#include <stdint.h>

#define SCH_MAX_TASK 10

void SCH_Init();
void SCH_Update();
void SCH_Add_Task(void (*pFunction)(), uint32_t Delay, uint32_t Period);
void SCH_Delete(uint32_t taskID);
void SCH_Dispatch_Tasks();

#endif /* INC_SCHED_H_ */
