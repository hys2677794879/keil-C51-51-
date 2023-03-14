#include <REGX52.H>
#include <INTRINS.H>
void Delay(unsigned int xms)		//@11.0592MHz
{
	unsigned char i, j;
	while (xms)
	{	
	_nop_();
	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);

	xms--;
	}
}

void main ()
{
	unsigned int time ;
	
		while (1)
		{
			for ( time= 0 ; time < 100 ; time ++)
			{
				P2_0 = 0;
				Delay (time/4);
				P2_0 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 100 ; time > 0 ; time --)
			{
				P2_0 = 0;
				Delay (time);
				P2_0 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 0 ; time < 100 ; time ++)
			{
				P2_1 = 0;
				Delay (time/4);
				P2_1 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 100 ; time > 0 ; time --)
			{
				P2_1 = 0;
				Delay (time/4);
				P2_1 = 1;
				Delay ((100 - time)/4);
			
			}	
			for ( time= 0 ; time < 100 ; time ++)
			{
				P2_2 = 0;
				Delay (time/4);
				P2_2 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 100 ; time > 0 ; time --)
			{
				P2_2 = 0;
				Delay (time/4);
				P2_2 = 1;
				Delay ((100 - time)/4);
			
			}	
			for ( time= 0 ; time < 100 ; time ++)
			{
				P2_3 = 0;
				Delay (time/4);
				P2_3 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 100 ; time > 0 ; time --)
			{
				P2_3 = 0;
				Delay (time/4);
				P2_3 = 1;
				Delay ((100 - time)/4);
			
			}	
			for ( time= 0 ; time < 100 ; time ++)
			{
				P2_4 = 0;
				Delay (time/4);
				P2_4 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 100 ; time > 0 ; time --)
			{
				P2_4 = 0;
				Delay (time/4);
				P2_4 = 1;
				Delay ((100 - time)/4);
			
			}	
			for ( time= 0 ; time < 100 ; time ++)
			{
				P2_5 = 0;
				Delay (time/4);
				P2_5 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 100 ; time > 0 ; time --)
			{
				P2_5 = 0;
				Delay (time/4);
				P2_5 = 1;
				Delay ((100 - time)/4);
			
			}	
			for ( time= 0 ; time < 100 ; time ++)
			{
				P2_6 = 0;
				Delay (time/4);
				P2_6 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 100 ; time > 0 ; time --)
			{
				P2_6 = 0;
				Delay (time/4);
				P2_6 = 1;
				Delay ((100 - time)/4);
			
			}	
			for ( time= 0 ; time < 100 ; time ++)
			{
				P2_7 = 0;
				Delay (time/4);
				P2_7 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 100 ; time > 0 ; time --)
			{
				P2_7 = 0;
				Delay (time/4);
				P2_7 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 0 ; time < 100 ; time ++)
			{
				P2_6 = 0;
				Delay (time/4);
				P2_6 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 100 ; time > 0 ; time --)
			{
				P2_6 = 0;
				Delay (time/4);
				P2_6 = 1;
				Delay ((100 - time)/4);
			
			}	
			for ( time= 0 ; time < 100 ; time ++)
			{
				P2_5 = 0;
				Delay (time/4);
				P2_5 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 100 ; time > 0 ; time --)
			{
				P2_5 = 0;
				Delay (time/4);
				P2_5 = 1;
				Delay ((100 - time)/4);
			
			}	
			for ( time= 0 ; time < 100 ; time ++)
			{
				P2_4 = 0;
				Delay (time/4);
				P2_4 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 100 ; time > 0 ; time --)
			{
				P2_4 = 0;
				Delay (time/4);
				P2_4 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 0 ; time < 100 ; time ++)
			{
				P2_3 = 0;
				Delay (time/4);
				P2_3 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 100 ; time > 0 ; time --)
			{
				P2_3 = 0;
				Delay (time/4);
				P2_3 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 0 ; time < 100 ; time ++)
			{
				P2_2 = 0;
				Delay (time/4);
				P2_2 = 1;
				Delay ((100 - time)/4);
			
			}
			for ( time= 100 ; time > 0 ; time --)
			{
				P2_2 = 0;
				Delay (time/4);
				P2_2 = 1;
				Delay ((100 - time)/4);
			
			}	
		}
	
	
	
	
}