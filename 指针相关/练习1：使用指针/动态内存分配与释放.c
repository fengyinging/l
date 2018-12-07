#include<stdio.h>
#include<stdlib.h>
int main(){
    char a[]={0,1,2,3,4,5,6,7,8,9};
    char *p=NULL;
    int number;
    int i;
    int *aa=NULL;
    scanf("%d",&number);
    aa=(int*)malloc(number*sizeof(int));
    for(i=0;i<number;++i){
        scanf("%d",&aa[i]);
    }
    free(aa);
    while(p=malloc(100*1024*1024)){
        i++;
    }
    free(p);
    return 0;
}
