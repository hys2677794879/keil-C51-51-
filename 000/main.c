#include<REGX52.H>
#include<INTRINS.H>

void Delay(unsigned int xms )		//@12.000MHz
{
	unsigned char i, j;

	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
}

int i = 0;
int num1 = 0;
int num2 = 1000;

void main()
{
		while(1)
	{
		if (P3_1 == 0)
		{
			Delay(20);
			while(P3_1 == 0);//°´¼üÏû¶¶
			Delay(20);
			
			
			P2 = 0xfe;
			for(i = 0;i < 7;i++)
			{
				P2 =P2<<1 ;
				Delay(200);
			}
			Delay(5000);
		}
	}
}
