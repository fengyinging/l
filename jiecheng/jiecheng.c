#include<stdio.h>


int fac(int n);
//think： if input no number, what do you output? 
int main(int argc, char const *argv[])
{
    int n;
    s:
    scanf("%d",&n);
    if(n<0) {
    	printf("\n输入格式错误，请重新输入：");
    	goto s;
	}
    printf("%d!=%d\n",n,fac(n));
    return 0;
}
int fac(int n)
{
    int y=n;
    if(n<=1)
    return n;
    y=y*fac(--n);
    return y;
}
