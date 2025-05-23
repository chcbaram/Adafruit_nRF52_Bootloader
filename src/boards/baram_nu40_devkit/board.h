/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2020 Nick Winans
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

#ifndef _BARAM_NU40_DEVKIT_H
#define _BARAM_NU40_DEVKIT_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER       4
#define LED_PRIMARY_PIN   _PINNUM(0, 13) 
#define LED_SECONDARY_PIN _PINNUM(0, 14) 
#define LED_3_PIN         _PINNUM(0, 15) 
#define LED_4_PIN         _PINNUM(0, 16) 
#define LED_STATE_ON      0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER    4  
#define BUTTON_1          _PINNUM(0, 11) 
#define BUTTON_2          _PINNUM(0, 12) 
#define BUTTON_3          _PINNUM(0, 13) 
#define BUTTON_4          _PINNUM(0, 14) 
#define BUTTON_PULL       NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER  "BARAM"
#define BLEDIS_MODEL         "baram-nu40-devkit"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x239A
#define USB_DESC_UF2_PID       0x00B4
#define USB_DESC_CDC_ONLY_PID  0x00B4

#define UF2_PRODUCT_NAME  "BARAM-NU40-DEVKIT"
#define UF2_VOLUME_LABEL  "BARAM-NU40"
#define UF2_BOARD_ID      "BARAM-NU40"
#define UF2_INDEX_URL     "https://github.com/chcbaram/Adafruit_nRF52_Bootloader"

#endif 
