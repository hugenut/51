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


void main()
{
	while(1)
	{
		P2=0xFE;
		Delay100ms();
		P2=0xFF;
		Delay100ms();
	}
}