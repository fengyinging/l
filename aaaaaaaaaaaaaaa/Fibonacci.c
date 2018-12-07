//FibonacciÎÊÌâ 

#include <stdio.h>
int f2[1000]={1,1};
int ff(int n)
{
	if(n==1||n==0) return f2[1];
	return (ff(n-1)+ff(n-2));
}
int main()
{
    int n,i,h;
    scanf("%d",&n);
    int f[n];
    for (i=0;i<n;i++) scanf("%d",&f[i]);
    for(i=0;i<n;i++){
    	printf("%d\n",h=ff(f[i]));
	}
    return 0;
}
