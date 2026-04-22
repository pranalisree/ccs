/* ADC1.c
 * Students put your names here
 * Modified: put the date here
 * 12-bit ADC input on ADC1 channel 5, PB18
 */
#include <ti/devices/msp/msp.h>
#include "../inc/Clock.h"


void ADCinit(void){
// write code to initialize ADC1 channel 5, PB18
// Your measurement will be connected to PB18
// 12-bit mode, 0 to 3.3V, right justified
// software trigger, no averaging
  // ADC1->ULLMEM.GPRCM.RSTCTL = 0xB1000003;
  // ADC1->ULLMEM.GPRCM.PWREN = 0x26000001;
  // Clock_Delay(24);
  // ADC1->ULLMEM.GPRCM.CLKCFG = 0xA9000000; 
  // ADC1->ULLMEM.CLKFREQ = 7;               
  // ADC1->ULLMEM.CTL0 = 0x03010000;         
  // ADC1->ULLMEM.CTL1 = 0x00000000;         
  // ADC1->ULLMEM.CTL2 = 0x00000000;         
  // ADC1->ULLMEM.MEMCTL[0] = 5;             
  // ADC1->ULLMEM.SCOMP0 = 0;                
  // ADC1->ULLMEM.CPU_INT.IMASK = 0;         
}

uint32_t ADCin(void){
  // ADC1->ULLMEM.CTL0 |=0x01; //enables conversion
  // ADC1->ULLMEM.CTL1 |=0x04;  //starts ADC
  // uin32_t volatile delay = ADC1 ->ULLMEM.STATUS;
  // while((ADC1->ULLMEM.STATUS & (0x01)) == 0x01){} //last bit tell if its not complemeted
  // return ADC0->ULLMEM.MEMRES[0];               // 12-bit result
  return 42; 
}

// your function to convert ADC sample to distance (0.001cm)
// use main2 to calibrate the system fill in 5 points in Calibration.xls
//    determine constants k1 k2 to fit Position=(k1*Data + k2)>>12
uint32_t Convert(uint32_t input){
  return 42; // replace this with a linear function
}

// do not use this function for the final lab
// it is added just to show you how SLOW floating point in on a Cortex M0+
float FloatConvert(uint32_t input){
  return 0.00048828125*input -0.0001812345;
}

