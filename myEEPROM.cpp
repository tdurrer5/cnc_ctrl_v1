/*
 * myEEPROM.cpp
 *
 *  Created on: Feb 7, 2022
 *      Author: tdurrer
 */
#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_types.h"
#include "inc/hw_memmap.h"
#include "driverlib/sysctl.h"
#include "driverlib/pin_map.h"
#include "driverlib/debug.h"
#include "driverlib/gpio.h"
#include "driverlib/flash.h"
#include "driverlib/eeprom.h"


void initEEPROM(){

    uint32_t pui32Data[2];
    uint32_t pui32Read[2];
    pui32Data[0] = 0x12345678;
    pui32Data[1] = 0x56789abc;
    uint32_t EE_size;


    SysCtlPeripheralEnable(SYSCTL_PERIPH_EEPROM0);

    if(EEPROMInit()==0x00){
    //EEPROMMassErase();
        EE_size = EEPROMSizeGet();
    }
    EEPROMRead(pui32Read, 0x0, sizeof(pui32Read));
    EEPROMProgram(pui32Data, 0x0, sizeof(pui32Data));
    EEPROMRead(pui32Read, 0x0, sizeof(pui32Read));
}


