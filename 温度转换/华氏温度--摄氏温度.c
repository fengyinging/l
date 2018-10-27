#include<stdio.h>
int main()
{
	float t;
	int i;
	printf("\nPlease enter the number of temperature,");
	printf("\nIf you want to enter Fahrenheit,please enter \"1\".");
	printf("\nIf you want to enter Celsius,please enter \"0\".\n");
	h:
	scanf("%f",&i);
	printf("\n\nPlease enter the tenmpure:");
	scanf("%f",&t);
	if(i=1) 
	{
		printf("\nThe temperature you enter is Fahrenheit,");
		printf("\nconverting to Celsius is:%.2f degree ",(t-32)*5.0/9.0);
	} 
	else if(i=0)
	{
		printf("\nThe temperature you enter is Celsius,");
		printf("\nconverting to Fahrenheit:%.2f degree ",t*9.0/5.0+32);
	} 
	else 
	{
		printf("Illegal input,please enter again:");
		goto h;
	}
	return 0;
}
