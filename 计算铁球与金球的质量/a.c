#include<stdio.h>
#define PI 3.1415926
int main()
{
	int t,j;
	scanf("%d %d",&t,&j);
	printf("%.3f %.3f",PI*t*t*t*(1E-3)*7.86/6.0,PI*j*j*j*(1E-3)*19.3/6.000);
	return 0;
}
