/*
 * timer_isr.cpp
 *
 *  Created on: Feb 4, 2022
 *      Author: tdurrer
 */

//#define __TM4C123GH6PM__  //tdu it's a Tiva TM4C123


#include <stdint.h>
#include <stdbool.h>
//#include <String.h>

//#include "Arduino/WString.h"

#include "Energia.h"

#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/debug.h"
#include "driverlib/fpu.h"
#include "driverlib/gpio.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/rom.h"
#include "driverlib/rom_map.h"
#include "driverlib/sysctl.h"
#include "driverlib/timer.h"



#include "Maslow.h"

#include "timer_isr.h"

int64_t rti_counter_i64;
uint32_t g_ui32Flags;

void LED_set(int pin,int value);

void IntMast_enab(void){
    MAP_IntMasterEnable();  // just forward declare Interrup re-enable
}


//*****************************************************************************
//
// The interrupt handler for the first timer interrupt.
//
//*****************************************************************************
void
Timer3IntHandler(void)  // 1ms
{
    char cOne, cTwo;
    //
    // Clear the timer interrupt.
    //
    MAP_TimerIntClear(TIMER3_BASE, TIMER_TIMA_TIMEOUT);

    if(rti_counter_i64 % 10 == 0x00)
    {
        HWREGBITW(&g_ui32Flags, 0) ^= 1;

        LED_set(LED_RED,g_ui32Flags); //red LED

    }

    // RTI motion control
    movementUpdated = false;

    leftAxis.computePID();
    rightAxis.computePID();
    zAxis.computePID();

    // end of RTI MC

    //
    // Update the interrupt status.
    //
    //MAP_IntMasterDisable();
//        cOne = HWREGBITW(&g_ui32Flags, 0) ? '1' : '0';
//        cTwo = HWREGBITW(&g_ui32Flags, 1) ? '1' : '0';
//        UARTprintf("\rT1: %c  T2: %c", cOne, cTwo);

    //MAP_IntMasterEnable();

    rti_counter_i64++;
}



void setup_timers()
{
    //
    // Enable the GPIO port that is used for the on-board LEDs.
    //
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);

    //
    // Enable the GPIO pins for the LEDs (PF0 & PF1 & PF2).
    //
    MAP_GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1 | GPIO_PIN_2| GPIO_PIN_3); //PF1 PF2 PF3 red,blue green LED


    //
    // Enable the peripherals used by this example.
    //
    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER3);
//    MAP_SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER1);

    //
    // Enable processor interrupts.
    //
    MAP_IntMasterEnable();

    //
    // Configure the two 32-bit periodic timers.
    //
    MAP_TimerConfigure(TIMER3_BASE, TIMER_CFG_PERIODIC);
//    MAP_TimerConfigure(TIMER1_BASE, TIMER_CFG_PERIODIC);

    MAP_TimerLoadSet(TIMER3_BASE, TIMER_A, g_ui32SysClock/100); // every 10'000 us =10ms
//    MAP_TimerLoadSet(TIMER1_BASE, TIMER_A, g_ui32SysClock / 2);

    TimerIntRegister(TIMER3_BASE, TIMER_A, Timer3IntHandler);    // Registering  isr

    //
    // Setup the interrupts for the timer timeouts.
    //
    MAP_IntEnable(INT_TIMER3A);
//    MAP_IntEnable(INT_TIMER1A);
    MAP_TimerIntEnable(TIMER3_BASE, TIMER_TIMA_TIMEOUT);
//    MAP_TimerIntEnable(TIMER1_BASE, TIMER_TIMA_TIMEOUT);


    //
    // Enable the timers.
    //
    MAP_TimerEnable(TIMER3_BASE, TIMER_A);
//    MAP_TimerEnable(TIMER1_BASE, TIMER_A);

}

void LED_set(int pin,int value){
    if((pin == GPIO_PIN_1 )||(pin == GPIO_PIN_2 )||(pin == GPIO_PIN_3 )){
        if(value){
            GPIOPinWrite(GPIO_PORTF_BASE, pin, pin );//red led
            //GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2,0x00);//blue led
            //GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, (g_ui32Flags<<2) );  //toggle green led on launch pad
        }else{
            GPIOPinWrite(GPIO_PORTF_BASE, pin, 0x00);//red led
            //GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, GPIO_PIN_2);//blue led
            //GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_3, (g_ui32Flags<<2) );  //toggle green led on launch pad

        }
    }
}
