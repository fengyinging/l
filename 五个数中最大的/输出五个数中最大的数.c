#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	a=a>b?a:b;
	a=a>c?a:c;
	a=a>d?a:d;
	a=a>e?a:e;
	printf("The largest of the five number is:%d",a);
	return 0;
	
}
