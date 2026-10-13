/* Programmer:      BK NYONI
 * Program:         LED Blinking Using PIC16F887
 * Compiler:        MPLAB XC8
 * Microcontroller: PIC16F887
 * Clock Frequency: 8 MHz (Internal Oscillator)
 *
 * Description:
 * This program configures RB0 as a digital output and continuously switches the output OFF
 * and ON, with a one-second delay between each state.
 */

//CONFIG1
#pragma config FOSC = INTRC_NOCLKOUT, WDTE = OFF, PWRTE = ON, MCLRE = OFF, CP = OFF
#pragma config CPD = OFF, BOREN = OFF, IESO = OFF,  FCMEN = OFF, LVP = OFF 
//CONFIG2
#pragma config BOR4V = BOR21V,  WRT = OFF
#define _XTAL_FREQ 8000000

#include <xc.h>
#include<stdbool.h>
void initializePIC(){
    OSCCON              =   0x77; 
    INTCONbits.GIE      =   0x00;
    ANSELH              =   0x00;
    TRISBbits.TRISB0    =   0x00;
    TRISBbits.TRISB1    =   0x00;
    PORTBbits.RB0       =   0x00; 
    __delay_ms(50);
}
void main(void) {
    initializePIC();
    while(true){
        PORTBbits.RB0 = 0x00;
         __delay_ms(1000);
        PORTBbits.RB0 = 0x01;
        __delay_ms(1000);
    }
    return;
}

