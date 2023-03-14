#include<REGX52.H>
#include<INTRINS.H>

void Delay(unsigned int xms)		//@12.000MHz
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


void main()
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
