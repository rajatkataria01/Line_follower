#define F_CPU 8000000UL
#include<avr/io.h>
#include<util/delay.h>
void main() 
  { DDRB=0xff;
DDRA=0xf0;
while(1)
 {
  if(PINC==(0x02))
   { PORTB=0b00001010;_delay_us(60);
  }

   if(PINC==((0x03)||(0x01)))
   { PORTB=0b00001001;_delay_us(60);
  }

  else if(PINC==((0x06)||(0x04)))
  { PORTB=0b00000110;_delay_us(60);
  }

  else if(PINC==0x00)
  { PORTB=0b00000110;_delay_us(2000);}

 else if(PINC==0x07)
  { PORTB=0b00000110;_delay_us(1000);}
 }
}

