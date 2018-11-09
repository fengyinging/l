#include<stdio.h>
int main()
{
	int n,a,b,c,i;
	printf("please enter the amont of number you want to enput:");
	scanf("%d",&n);
	int number[n];
	printf("\nplease enter number:");
	for(i=0;i<n;i++)
	scanf("%d ",&number[i]);
	printf("\nplease enter the number you want to search:");
	scanf("%d",&c);
	for(a=0,b=0;a<n;++a)
	{
		if(number[a]==c) {
			b++;
			return a+1;
		}
	}
	printf("\n\ntotal is:");
	printf(" %d",b);
	return 0;
}
