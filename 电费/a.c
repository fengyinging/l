#include<stdio.h>
int main()
{
	float a;
	scanf("%f",&a);
	if(a<=110)  printf("%.2f",0.50*a);
	else if(a<=210) printf("%.2f",55.00+(a-110)*0.55);
	else printf("%.2f",(a-210.00)*0.700+110.00);
	return 0;
}
