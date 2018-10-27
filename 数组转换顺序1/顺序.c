#include<stdio.h>
int main()
{
	int n,m,i,t,b;
	scanf("%d %d",n,m);
	int s[1000];
	s[0]=0;
	if((n>=1)&&(n<=1000)&&(m>=1)&&(m<=1000))
	{
		for(i=1;i<=n;++i)
			scanf("%d ",&s[i]);
		i=1;
		t=i+1;
		for(;i<=n;++i)
		{
			for(;t<n;++t)
			{
				if(s[i]<s[t])
				{
					b=s[i];
					s[i]=s[t];
					s[t]=b;
				}
			}
		}
		if(n>m)
		{
			for(i=1;i<=m;++i)
				printf("%d ",s[i]);
		}
		else {
			for(i=1;i<=n;++i)
				printf("%d ",s[i]);
		}
	}
	
	return 0;
}
