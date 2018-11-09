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
	for(a=0;a<n-1;++a)
	{
		
		for(b=a+1;b<n;++b)
		{
			if(number[a]<number[b])
		{
			c=number[a];
			number[a]=number[b];
			number[b]=c;
		}
		
		}
	}
	printf("\n\nSorted from big to small:");
	for(i=0;i<n;++i)
	printf(" %d",number[i]);
	return 0;
}
