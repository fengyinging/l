#include<stdio.h>
int fun(int a,int b);
int main()
{
    int m,i;
    scanf("%d",&m);
    int a[m],b[m];
    for(i=0;i<m;++i)
    {
    	scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<m;++i)
	{
		fun(a[i],b[i]);
	}
    return 0;
}
int fun(int a,int b)
{
	int z,i,x=0,f,g=0,q,l;
	if(a<=b)
	{
		for(a;a<=b;a++)
		{
			f=a;
			for(i=0;a!=0;)
			{
		 		i++;
		 		a=a/10;
			}
			a=f;
			l=i;
			x=0;
			for(z=0;a!=0;)
			{
				z=a%10;
				q=1;
				for(i=l;i>0;--i)
				{
					q*=z;	
				}
				x+=q;
				a=a/10;
				if(x==f) g++;
			}
			a=f;
		}
		printf("%d\n",g);
	}
	else{
		
		for(b;b<=a;b++)
		{
			f=b;
			for(i=0;b!=0;)
			{
		 		i++;
		 		b=b/10;
			}
			b=f;
			l=i;
			x=0;
			for(z=0;b!=0;)
			{
				z=b%10;
				q=1;
				for(i=l;i>0;--i)
				{
					q*=z;
					x+=q;
				}
				b=b/10;
				if(x==f) g++;
			}
			b=f;
		}
		printf("%d\n",g);
	}
	return g;
}
