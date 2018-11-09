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
	for(a=n;a>0;a--)
	{
		c=1;
		for(b=n;b>n-a+1;b--)
		{
			if(number[b-1]>number[b-2])
			{
				c=number[b-1];
				number[b-1]=number[b-2];
				number[b-2]=c;
				c=0;
			}
		}
		if(c) break;
	}
	printf("\n\nSorted from big to small:");
	for(i=0;i<n;++i)
	printf("%d ",number[i]);
	return 0;
}
