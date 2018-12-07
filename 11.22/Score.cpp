#include<iostream>
#include<string.h>
int main(int argc, char const *argv[])
{
    int T;
    char buf[128];
    scanf("%d\n",&T);
    while(T--){
        gets(buf);
        int cnt=0,sum=0,sz=strlen(buf);
        _for(i,0,sz){
            if(buf[i]=='o') sum+=(++cnt);
            else cnt=0;
        }
        printf("%d\n",sum);
    }
    return 0;
}
