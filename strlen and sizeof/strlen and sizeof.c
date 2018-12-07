#include<stdio.h>
double fun(int n);
double z;
int main(int argc, char const *argv[])
{
    int m,i;
    scanf("%d",&m);
    int n[m];
    for(i=0;i<m;++i)
    {
    	scanf("%d",&n[i]);
	}
	for(i=0;i<m;++i){
		printf("%.6f\n",fun(n[i]));
	}
    return 0;
}
double fun(int n)
{
	if(n==1) return n;
	z=1.0/(1.0+fun(--n));
	return z;
}
