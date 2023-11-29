/*
 * sched.c
 *
 *  Created on: Nov 29, 2023
 *      Author: DELL
 */

#include "sched.h"

typedef struct
{
	void (*pTask)();
	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe;
	uint32_t TaskID;
} sTask;

// array of tasks
#define SCH_MAX_TASK 5
sTask SCH_Tasks_G[SCH_MAX_TASK];
uint8_t have_task[SCH_MAX_TASK];
uint32_t current_index;

// Initial the scheduler
void SCH_Init()
{
	current_index = 0;
	for (int i = 0; i < SCH_MAX_TASK; i++)
		have_task[i] = 0;
}

// Increase 1 time unit
void SCH_Update();

// Add new task into array of task
void SCH_Add_Task(void (*pFunction)(), uint32_t Delay, uint32_t Period)
{
}

// Delete task from array of task
void SCH_Delete(uint32_t taskID);

// Run the task in the array of task
void SCH_Dispatch_Tasks();