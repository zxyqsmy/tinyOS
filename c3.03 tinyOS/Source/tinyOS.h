#ifndef TINYOS_H
#define TINYOS_H

#include <stdint.h>

#include "tLib.h"

typedef uint32_t tTaskStack;

typedef struct _tTask {
		tTaskStack * stack;
		uint32_t delayTicks;
}tTask;

extern tTask * currentTask;
extern tTask * nextTask;

uint32_t tTaskEnterCritical (void);
void tTaskExitCritical (uint32_t status);

void tTaskSchedInit (void);
void tTaskSchedDisable (void);
void tTaskSchedEnable (void);

void tTaskRunFirst(void);
void tTaskSwitch(void);
#endif
