# MPLABX-XC8-BlinkingLED
Microchip XC8 project for three LEDs connected to PORTB&lt;RB3:RB0&gt; pins of a  PIC16F887 microcontroller.
## Overview
In high-level programming languages, it is common practice for the first program to print the message "Hello world" as output to the display. In low-level programming, such as assembly or Embedded C, the program toggles a bit between a digital one (1) and a zero (0). A single bit can be used to activate or deactivate any electronic component, such as an LED, Motor, vehicle indicator, or even in a critical situation like turning on a beep sound for the life support system. When eight bits are grouped, they form a byte, which is the foundation of representing data- information that is used in gaming, robotics, digital communications, and any other modern-day technology. It all starts with a single digital bit, which is a 1 or 0.

## Objectives
    • To identify the pinout of PIC16F887
    • To identify LED pins Anode (+) and Cathode (-)
    • To design a flashing LED Circuit
    • To design a flowchart model and Pseudocode for flashing an LED
    • To write a program that toggles the LED between ON and OFF
    • To program and test program logic on a PIC16F887 prototype circuit
    
## Materials list 
    • U1: Microcontroller PIC16F887,40pin PDIP
    • 40-pin PDIP IC socket holder
    • R1, R2, R3: Resistor 220Ω
    • D1, D2, D3: Light emitting diode
    • Jumper wires
    • Breadboard 
    
## Equipment list 
    • Rated Power supply
    • Multimeter 
    • Microcontroller chip programmer
    • Computer 

## Circuit diagram
Figure 1 illustrates a circuit diagram of an embedded system prototype of a blinking LED. At the core of the prototype is a PIC16F887 microcontroller that acts as the brain of the circuit. Three light-emitting diodes &lt;D3:D1&gt; are connected to the microcontroller’s &lt;PORTB<RB2:RB0&gt; port pins through in-series 220R resistors. The PIC16F887 microcontroller circuit's additional configuration is as follows:

    1. VDD positive pins <32,11> are connected to +5VDC.
    2. VSS ground reference pins<31,12> are connected to GND.
    3. PIC16F887 microcontroller pins <14:13> are not connected and are used for general PORTA 
       I/O function. An internal oscillator is selected.
    4. Master clear pin <1> of PIC16F887 is disabled and PORTE<RE3> set for I/O function.  
![Blinking LED](https://github.com/nbonolok/MPLAX-XC8-BlinkingLED/blob/main/BlinkingLed.png)

## Source Code XC8 C
The listing below is the XC8 source code for a blinking LED connected to the PIC16F887 microcontroller’s PORTB&lt;RB0&gt; pin. 
```C
/* Programmer: BK NYONI
 * Program: LED Blinking Using PIC16F887
 * Compiler: MPLAB XC8
 * Microcontroller: PIC16F887
 * Clock Frequency: 8 MHz (Internal Oscillator)
 *
 * Description:
 * This program configures RB0 as a digital output and
 * continuously switches the output OFF and ON, with a
 * one-second delay between each state.
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

 
 
```

