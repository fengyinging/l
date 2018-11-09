#include<stdio.h>
int main()
{
	int n,a,b,i;
	printf("please enter the amont of number you want to input:");
	scanf("%d",&n);
	int number[n];
	printf("\nplease enter number:");
	for(i=0;i<n;i++)
	scanf("%d ",&number[i]);
	for(a=1;a<n;++a)
	{
		if(number[a]>number[a-1])
		{
			b=number[a];
			number[a]=number[a-1];
			number[a-1]=b;
		}
	}
	printf("\n\nSorted from big to small:");
	for(i=0;i<n;++i)
	printf(" %d",number[i]);
	return 0;
}