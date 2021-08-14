#include <avr/io.h>


.global TP01
TP01:      
INICIO:
ldi temp, 0b00000000 
out DDRB, temp 
ldi temp, 0b11111111  
out DDRC, temp 
ldi temp, 0b00000000
out DDRD, temp 

ldi temp, 0b00001111
out PortB, temp
ldi temp, 0b11110000
out PortC, temp
ldi temp, 0b11110000
out PortD, temp
 
LOOP:
      
ldi temp, 0b11110000
out PortD, temp
ldi temp, 0b00001111
out PortD, temp
   rjmp LOOP                
      
.EXIT