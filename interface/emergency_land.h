/**
 *Added by M-R-VulkaN, This controlles the emergency land pin, which is pin number 12.
 */
#ifndef __EMERGENCY_LAND__
#define __EMERGENCY_LAND__

#include "pinout.h"
#include <nrf.h>

#define EMERGENCY_LAND_INIT() NRF_GPIO->PIN_CNF[EMERGENCY_LAND_PIN] |= GPIO_PIN_CNF_DIR_Output | (GPIO_PIN_CNF_DRIVE_S0H1<<GPIO_PIN_CNF_DRIVE_Pos);

#define EMERGENCY_LAND_ON() NRF_GPIO->OUTSET = (1UL<<EMERGENCY_LAND_PIN)
#define EMERGENCY_LAND_OFF() NRF_GPIO->OUTCLR = (1UL<<EMERGENCY_LAND_PIN)
#define EMERGENCY_LAND_TOGLE() NRF_GPIO->OUT ^= (1UL<<EMERGENCY_LAND_PIN)


#endif //__EMERGENCY_LAND__
