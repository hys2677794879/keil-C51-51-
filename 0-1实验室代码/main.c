#include <reg52.h>
#include <intrins.h>


#define DELAY_MS 10

sbit key1=P3^3;
sbit key2=P3^2;
sbit key3=P3^1;
sbit key4=P3^0;

typedef unsigned long u16;
typedef unsigned char u8;

void delay(u16 ms);

void main()
{
	u16 a = ~(0x0001), b = 0;
	char the_8;
	char the_8_1;
	u16 k = 0, i = 160;
	key1=1;
	key2=1;
	key3=1;
	key4=1;
				
	while(1)
	{

		if(key1==0)
		{
			delay(DELAY_MS);
			if(key1==0)
			{
				P0 = 0xff;
				P2 = 0xff;
				i = 8;
				P0 = 0xfe;
				for(k = 0; k < 8; k++)
				{
					delay(DELAY_MS);
					P0 = P0 << 1;
				}
				the_8_1 = 0x7f;
				for(k = 0; k < 8; k++)
				{
					
					the_8_1 = the_8_1 >> 1;
					P2 = the_8_1;
					delay(DELAY_MS);
				}
			}
		}
	}

}
//剩余三个按键大家可以自由发挥


void delay(u16 n)
{
	u16 i = 0, j = 0;
	for (i = 0; i < n; i++)
    	for (j = 0; j < 123; j++);
}
