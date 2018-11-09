#include<stdio.h>
int main()
{
	int a,b,c,i,m;
	int num[20][20];
	int addd[42]={0};
	scanf("%d",&m);
	for(a=0;a<m;++a) 
	{
		for(b=0;b<m;++b)
		{
			scanf("%d",&num[a][b]);
			
		}
	} 
	for(a=0,i=0;a<m;++a,++i)
	{
		for(b=0;b<m;++b)
		{
			addd[i]+=num[a][b];
		}
	}
	for(b=0,i=m;b<m;++i,++b)
	{
		for(a=0;a<m;++a)
		{
			addd[i]+=num[a][b];
		}
	}
	
	for(a=0,b=m-1;a<m;++a,--b)
	{
		addd[2*m]+=num[a][b];
	}
	for(a=0,b=0;a<m;++a,++b)
	{
		addd[2*m+1]+=num[a][b];
	}
	for(a=0;a<2*m+2;++a)
	{

		for(b=2*m+1;b>a;--b)
		{
			if(addd[b]>addd[b-1])
			{
				c=addd[b];
				addd[b]=addd[b-1];
				addd[b-1]=c;
				
			}
		}
	}
	
	for(a=0;a<2*m+2;++a) 
	{
		printf("%d ",addd[a]);
	} 
	printf("\n");

	
	return 0;
} 

