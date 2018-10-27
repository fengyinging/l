#include<stdio.h>
int main()
{
	float yard=0;
	float inch=0;
	float foot=0;
	float meter=0;
	printf("please enter foot:");
	scanf("%f",&foot);
	yard=foot/36;
	inch=foot/3;
	meter=foot*0.914/36;
	printf("\n\n    %fyard      %fench      %fmeter",yard,inch,meter);
	return 0;
}
