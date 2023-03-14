#include<REGX52.H>
#include<INTRINS.H>

void Delay(unsigned int xms )		//@12.000MHz
{
	while(xms)
	{
		unsigned char i, j;

		i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
		xms--;
	}
}

int i = 0;
int num1 = 0;
int num2 = 1000;
int num3 = 0;
int h = 10;
void main()
{
	while(1)
	{
		if (P3_1 == 0)
		{
			Delay(20);
			while(P3_1 == 0);//按键消抖
			Delay(20);
			
			
			P2 = 0xfe;
			P0 = 0xfe;
			for(i = 0;i < 7;i++)
			{
				P2 =P2<<1 ;
				P0 =P0<<1 ;
				Delay(200);
			}
			Delay(2000);
			
			for(num3 = 0;num3 < 10; num3++)
			{
				P0 = 0x00;
				P2 = 0x00;
				Delay(100);
				P0 = 0xff;
				P2 = 0xff;
				Delay(100);
	
			}

		}
		else if (P3_0 == 0)
		{
			Delay(20);
			while(P3_1 == 0);//按键消抖
			Delay(20);
		
				while(1)
				{
					
					P2 = 0x0f;
					P0 = 0xff;    		
					Delay(num2);
					P2 = 0xf0;    
					Delay(num2);
					P0 = 0xf0;
					P2 = 0xff;    
					Delay(num2);
					P0 = 0x0f;    
					Delay(num2);
					if (100 == num2)
					{
						num2= 1000;
						while(h)
						{
							h--;
							num2 = 100;
							break;
						}
					}
					else if(0 == h)
					{
						h = 10;
					}

					else
					{
					num2 -= 100;
					}
				}
				
			
		}
		else if(P3_2 == 0)
		{
				unsigned int time ;
	
				while (1)
				{
					for( time= 0 ; time < 100 ; time ++)
					{
						P2_0 = 0;
						P2_4 = 0;
						P0_0 = 0;
						P0_4 = 0;						
						Delay (time/8);
						P2_0 = 1;
						P2_4 = 1;
						P0_0 = 1;
						P0_4 = 1;
						Delay ((100 - time)/8);					
					}
					
					for ( time= 100 ; time > 0 ; time --)
					{
						P2_0 = 0;
						P2_4 = 0;
						P0_0 = 0;
						P0_4 = 0;						
						Delay (time/8);
						P2_0 = 1;
						P2_4 = 1;
						P0_0 = 1;
						P0_4 = 1;
						Delay ((100 - time)/8);					
					}
					
					for( time= 0 ; time < 100 ; time ++)
					{
						P2_1 = 0;
						P2_5 = 0;
						P0_1 = 0;
						P0_5 = 0;						
						Delay (time/8);
						P2_1 = 1;
						P2_5 = 1;
						P0_1 = 1;
						P0_5 = 1;
						Delay ((100 - time)/8);					
					}
					
					for ( time= 100 ; time > 0 ; time --)
					{
						P2_1 = 0;
						P2_5 = 0;
						P0_1 = 0;
						P0_5 = 0;						
						Delay (time/8);
						P2_1 = 1;
						P2_5 = 1;
						P0_1 = 1;
						P0_5 = 1;
						Delay ((100 - time)/8);					
					}
					
					for( time= 0 ; time < 100 ; time ++)
					{
						P2_2 = 0;
						P2_6 = 0;
						P0_2 = 0;
						P0_6 = 0;						
						Delay (time/8);
						P2_2 = 1;
						P2_6 = 1;
						P0_2 = 1;
						P0_6 = 1;
						Delay ((100 - time)/8);					
					}
					
					for ( time= 100 ; time > 0 ; time --)
					{
						P2_2 = 0;
						P2_6 = 0;
						P0_2 = 0;
						P0_6 = 0;						
						Delay (time/8);
						P2_2 = 1;
						P2_6 = 1;
						P0_2 = 1;
						P0_6 = 1;
						Delay ((100 - time)/8);					
					}
					
					for( time= 0 ; time < 100 ; time ++)
					{
						P2_3 = 0;
						P2_7 = 0;
						P0_3 = 0;
						P0_7 = 0;						
						Delay (time/8);
						P2_3 = 1;
						P2_7 = 1;
						P0_3 = 1;
						P0_7 = 1;
						Delay ((100 - time)/8);					
					}
					
					for ( time= 100 ; time > 0 ; time --)
					{
						P2_3 = 0;
						P2_7 = 0;
						P0_3 = 0;
						P0_7 = 0;						
						Delay (time/8);
						P2_3 = 1;
						P2_7 = 1;
						P0_3 = 1;
						P0_7 = 1;
						Delay ((100 - time)/8);					
					}
					
					for( time= 0 ; time < 100 ; time ++)
					{
						P2_2 = 0;
						P2_6 = 0;
						P0_2 = 0;
						P0_6 = 0;						
						Delay (time/8);
						P2_2 = 1;
						P2_6 = 1;
						P0_2 = 1;
						P0_6 = 1;
						Delay ((100 - time)/8);					
					}
					
					for ( time= 100 ; time > 0 ; time --)
					{
						P2_2 = 0;
						P2_6 = 0;
						P0_2 = 0;
						P0_6 = 0;						
						Delay (time/8);
						P2_2 = 1;
						P2_6 = 1;
						P0_2 = 1;
						P0_6 = 1;
						Delay ((100 - time)/8);					
					}
					
					for( time= 0 ; time < 100 ; time ++)
					{
						P2_1 = 0;
						P2_5 = 0;
						P0_1 = 0;
						P0_5 = 0;						
						Delay (time/8);
						P2_1 = 1;
						P2_5 = 1;
						P0_1 = 1;
						P0_5 = 1;
						Delay ((100 - time)/8);					
					}
					
					for ( time= 100 ; time > 0 ; time --)
					{
						P2_1 = 0;
						P2_5 = 0;
						P0_1 = 0;
						P0_5 = 0;						
						Delay (time/8);
						P2_1 = 1;
						P2_5 = 1;
						P0_1 = 1;
						P0_5 = 1;
						Delay ((100 - time)/8);					
					}
					
					P0 = 0X00;
					P2 = 0X00;
					Delay(3000);

				}
				

		}
		else if(P3_3 == 0)
		{
					Delay(20);
					while ( P3_3 == 0)
					Delay(20);

					while(1)
					{
						P2 = 0xff;
						P0 = 0xF7;    //1111 0111
						Delay(100);
						P0 = 0xFB;    //1111 1011
						Delay(100);
						P0 = 0xFD;    //1111 1101
						Delay(100);
						P0 = 0xFE;    //1111 1110					
						Delay(100);
						
						
						P0 = 0xEF;    //1110 1111
						Delay(100);
						P0 = 0xDF;    //1101 1111
						Delay(100);
						P0 = 0xBF;    //1011 1111
						Delay(100);
						P0 = 0x7F;    //0111 1111
						Delay(100);
						
						P0 = 0xff;
						P2 = 0xF7;    //1111 0111
						Delay(100);
						P2 = 0xFB;    //1111 1011
						Delay(100);
						P2 = 0xFD;    //1111 1101
						Delay(100);
						P2 = 0xFE;    //1111 1110
						Delay(100);

						P2 = 0x7F;    //0111 1111
						Delay(100);
						P2 = 0xBF;    //1011 1111
						Delay(100);
						P2 = 0xDF;    //1101 1111
						Delay(100);
						P2 = 0xEF;    //1110 1111
						Delay(100);
		
		
					}
					
					
	  }

 }
}



