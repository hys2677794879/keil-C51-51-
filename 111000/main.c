#include<REGX52.H>
#include<INTRINS.H>

void Delay(unsigned int x)		//@11.0592MHz
{
	unsigned char i, j;

	_nop_();
	i = 2;
	j = 199;
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
			if (P3_1 == 0)
		{
			Delay(20);
			while(P3_1 == 0);
			Delay(20);
			
			
			P2 = 0xfe;
			
		}

}
