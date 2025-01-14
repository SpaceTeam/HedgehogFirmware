#ifndef SRC_ST_H_
#define SRC_ST_H_


#include <stdint.h>


#define PRESSURE_THRESHOLD 30.0
#define PRESSURE_HYSTERESIS 1.0

void st_init(void);
int32_t st_getThrust(uint8_t i);
void st_enablePressureControl(uint8_t enable);
void st_setPressureThreshold(int8_t threshold, uint8_t hysteresis); // bar, bar/10
int8_t st_getPressureThreshold(void);
uint8_t st_getPressureHysteresis(void);

void st_loop(void);


#endif /* SRC_ST_H_ */
