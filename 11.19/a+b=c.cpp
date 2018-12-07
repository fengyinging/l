#include<stdio.h>
int main()
{
	int t,i;
	int a,b;
	int idx=0;
	scanf("%d",&t);
	int c[t];
	for(i=0;i<t;++i)
	{
		scanf("%d",&c[i]);	
   	}
   	for(i=0;i<t;++i)
	{
		idx=0;
		for(a=1;a<c[i];++a)
		{
			for(b=1;b<c[i];++b)
			{
				if(a+b==c[i])	idx++;
			}
		}
		printf("%d ",idx);
	}
	return 0;
}
