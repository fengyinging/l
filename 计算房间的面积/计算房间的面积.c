//计算房间面积   
#include<stdio.h>

int main()
{
	float foot=0;
	float inch=0;
	float yard=0;
	float width=0;
	float length=0;
	
	printf("\n\nPlease enter width for room:");
	scanf("%f",&width);
	printf("\nPlease enter length for room:");
	scanf("%f",&length);
	
	
	printf("\n\nThe room's area is %.2f yard*yard.",width*length);
	printf("\nThe room's area is %.2f inch*inch.",width*length/);
	return 0;
}