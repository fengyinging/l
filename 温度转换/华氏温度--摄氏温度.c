#include<stdio.h>
int main()
{
	float t;
	float i;
	printf("\nPlease enter the number of temperature,");
	printf("\nIf you want to enter Fahrenheit,please enter \"1\".");
	printf("\nIf you want to enter Celsius,please enter \"0\".\n");
	h:
	scanf("%f",&i);
	if(i!=1.0&&i!=0)
	{
		printf("Illegal input,please enter again:");
		goto h;
	}
	printf("\n\nPlease enter the tenmpure:");
	scanf("%f",&t);
	if(i==1) 
	{
		printf("\nThe temperature you enter is Fahrenheit,");
		printf("\nconverting to Celsius is:%.2f degree \n",(t-32)*5.0/9.0);
	} 
	else
	{
		printf("\nThe temperature you enter is Celsius,");
		printf("\nconverting to Fahrenheit:%.2f degree \n",t*9.0/5.0+32);
	} 
	
		
	
	return 0;
}
