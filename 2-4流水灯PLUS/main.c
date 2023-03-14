#include <REGX52.H>
void Delay1ms(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
		while (xms)
	{
		i = 2;
	  j = 239;
	  do
	 {
		while (--j);
	} while (--i);

			xms--;
	}
}


void main ()
{
	int num1 = 0;
	
	while (1)
	{
		if ( P3_1 == 0)
		{
			Delay1ms(20);
			while ( P3_1 == 0)
			Delay1ms(20);
		
			P2 = 0xFE;    //1111 1110
			Delay1ms(100);
			P2 = 0xFD;    //1111 1101
			Delay1ms(100);
			P2 = 0xFB;    //1111 1011
			Delay1ms(100);
			P2 = 0xF7;    //1111 0111
			Delay1ms(100);
			P2 = 0xEF;    //1110 1111
			Delay1ms(100);
			P2 = 0xDF;    //1101 1111
			Delay1ms(100);
			P2 = 0xBF;    //1011 1111
			Delay1ms(100);
			P2 = 0x7F;    //0111 1111
			Delay1ms(100);
			P2 = 0xBF;    //1011 1111
			Delay1ms(100);
			P2 = 0xDF;    //1101 1111
			Delay1ms(100);
			P2 = 0xEF;    //1110 1111
			Delay1ms(100);
			P2 = 0xF7;    //1111 0111
			Delay1ms(100);
			P2 = 0xFB;    //1111 1011
			Delay1ms(100);
			P2 = 0xFD;    //1111 1101
			Delay1ms(100);
			

		
		}

		if (P3_0 == 0)
		{
				Delay1ms(20);
				while ( P3_1 == 0)
				Delay1ms(20);

				for ( num1 = 1; num1 < 101; num1 ++)
				{
						P2 = 0x00;    
						Delay1ms(50);
						P2 = 0xFF;    
						Delay1ms(50);
				}
		
		}
			
	}

}