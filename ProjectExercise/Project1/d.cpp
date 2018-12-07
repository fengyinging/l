#include<stdio.h>
#define MIN(a,b) (a<b)?a:b
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", MIN(a, b));
	return 0;
}