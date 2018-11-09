#include<stdio.h>
int main()
{
	int l=0,h=9;
	int num[10]={1,2,3,4,5,6,7,8,9,0};
	printf("\nplease enter the number you want to search (from '0'to '9'):");
	scanf("%d",&c);
	while(l<=h)
	{
		if(c==num[(l+h)/2])
			printf("%d ",num[(l+h)/2]);
		else if(c>num[(l+h)/2])  
	}
	
	printf("\n\ntotal is:");
	printf(" %d",b);
	return 0;
}
