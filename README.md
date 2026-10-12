# MPLAX-XC8-BlinkingLED
Microchip XC8 project for three LEDs connected to PORTB&lt;3:0> pins of a  PIC16F887 microcontroller.
## Overview
In high-level programming languages, it is common practice for the first program to print the message "Hello world" as output to the display. While in low-level programming, such as assembly or Embedded C, the program toggles a bit between a digital one (1) and a zero (0). A single bit can be used to activate or deactivate any electronic component, such as an LED, Motor, vehicle indicator, or even in a critical situation like turning on a beep sound for the life support system. When eight bits are grouped, they form a byte, which is the foundation of representing data- information that is used in gaming, robotics, digital communications, and any other modern-day technology. It all starts with a single digital bit, which is a 1 or 0.

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
Figure 1 illustrates a circuit diagram of an embedded system prototype of a blinking LED. At the core of the prototype is a PIC16F887 microcontroller that acts as the brain of the circuit. Three light-emitting diodes <D3:D1> are connected to the microcontroller’s PORTB<RB2:RB0> port pins through in-series 220R resistors. The PIC16F887 microcontroller circuit's additional configuration is as follows:

    1. VDD positive pins <32,11> are connected to +5VDC.
    2. VSS ground reference pins<31,12> are connected to GND.
    3. PIC16F887 microcontroller pins <14:13> are not connected and are used for general PORTA 
       I/O function. An internal oscillator is selected.
    4. Master clear pin <1> of PIC16F887 is disabled and PORTE<RE3> set for I/O function.  
![Blinking LED] BlinkingLed.png
