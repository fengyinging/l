#include<stdio.h>
#include"File2.cpp"
int GCD(int a,int b);
int LCM(int a,int b);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",GCD(a,b));
	printf("%d",LCM(a,b));
	return 0;
}
