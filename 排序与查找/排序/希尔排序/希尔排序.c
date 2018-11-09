#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    printf("please enter the amont of number you want to input:");
	scanf("%d",&n);
	int number[n];
	printf("\nplease enter number:");
	for(i=0;i<n;i++)
	scanf("%d ",&number[i]);
    if(n%2==0)
    {
        for(c=n/2;c>=1;c=c/2)
        {
            for(i=0;i+c<n;i++)
            {
                if(number[i]<number[i+c])
                {
                    b=number[i];
                    number[i]=number[i+c];
                    number[i+c]=b;
                }
            }

        }
    }
    else 
    {
        
    }
    printf("\n\nSorted from big to small:");
	for(i=0;i<n;++i)
	printf(" %d",number[i]);
    return 0;
}
