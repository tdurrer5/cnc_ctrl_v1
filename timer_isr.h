/*
 * timer_isr.h
 *
 *  Created on: Feb 4, 2022
 *      Author: tdurrer
 */

#ifndef TIMER_ISR_H_
#define TIMER_ISR_H_

extern unsigned int g_ui32SysClock;

void setup_timers();

void Timer0IntHandler(void);


#define LED_RED     GPIO_PIN_1
#define LED_BLUE    GPIO_PIN_2
#define LED_GREEN   GPIO_PIN_3

void LED_set(int pin,int value);

void initEEPROM(); // from myEEPROM.cpp

void IntMast_enab(void);

#endif /* TIMER_ISR_H_ */
