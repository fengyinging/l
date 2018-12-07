#include<stdio.h>
//main函数参数相关
int main(int argc, char const *argv[])
{
    int i
    for(i=0;i<argc;i++){
        pritnf("%d: %c\n",i,*argv[i]);
    }
    return 0;
}
