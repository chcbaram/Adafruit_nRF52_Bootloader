/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _BARAM_NU32_DEVKIT_H
#define _BARAM_NU32_DEVKIT_H

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER       4
#define LED_PRIMARY_PIN   17
#define LED_SECONDARY_PIN 18
#define LED_3_PIN         19
#define LED_4_PIN         20
#define LED_STATE_ON      0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER     4
#define BUTTON_1           13
#define BUTTON_2           14
#define BUTTON_3           15
#define BUTTON_4           16
#define BUTTON_PULL        NRF_GPIO_PIN_PULLUP

/*------------------------------------------------------------------*/
/* UART (only used by nRF52832)
 *------------------------------------------------------------------*/
#define RX_PIN_NUMBER      8
#define TX_PIN_NUMBER      6
#define CTS_PIN_NUMBER     0
#define RTS_PIN_NUMBER     0
#define HWFC               false

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER "BARAM"
#define BLEDIS_MODEL        "baram-nu32-devkit"

#define UF2_PRODUCT_NAME    "BARAM-NU32-DEVKIT"
#define UF2_VOLUME_LABEL    "BARAM-NU32"
#define UF2_BOARD_ID        "BARAM-NU32"
#define UF2_INDEX_URL       "https://github.com/chcbaram/Adafruit_nRF52_Bootloader"

#endif 
