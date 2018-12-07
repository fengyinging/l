#include<stdio.h>
int gcd(int a,int b);
int main(int argc, char const *argv[])
{
    int n;
    int a[10000]={0},b[10000]={0},i,c=0;
    
    for(i=0;;++i)
    {
        scanf("%d %d",&a[i],&b[i]);
        c++;
        if(a[i]==0&&b[i]==0) break;
    }
    
    for(i=0;i<c;++i){
        gcd(a[i],b[i]);
    }
    return 0;
}
int gcd(int a,int b)
{
	if(a==0&&b==0) return 0;
	if(a==0) printf("%d\n",b);
	if(b==0) printf("%d\n",a);
    int c=b;
    if(a>b)
    {
        for(;c>0;--c)
        if(a%c==0&&b%c==0) {
        	printf("%d\n",c);break;
		}
    }
    else if(a==b) printf("%d\n",c);
    else {
    	c=a;
        for(;c>0;--c)
        if(b%c==0&&a%c==0) {
        	printf("%d\n",c);break;
		}
    }
}
