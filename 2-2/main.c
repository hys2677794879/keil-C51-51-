#include <REGX52.H>
#include <INTRINS.H>
void Delay100ms()		//@12.000MHz
{
	unsigned char i, j;

	i = 195;
	j = 138;
	do
	{
		while (--j);
	} while (--i);
}

void main ()
{
	while(1)
	{
	P2 = 0x55;	 //0101 0101
		Delay100ms();
	P2 = 0xAA; //1010 1010
		Delay100ms();
		
	}
}