#include<stdio.h>
#include<string.h>
int main(void){
    //char **a;  
    //char a[][];   //编译过不了，，必须有一个确定的类型，如a[][10];
    //char *a[];//这样就可以了，a[0]-->*a
    
    //输出月份的英文
    int m;
    int month[]={1,2,3,4,5,6,7,8,9,10,11,12};
    scanf("%d",&m);
    switch(month[m]){
        case 1:pirntf("January\n");break;
        case 2:pirntf("Feburary\n");break;
        case 3:pirntf("March\n");break;
        case 4:pirntf("April\n");break;
        case 5:pirntf("May\n");break;
        case 6:pirntf("June\n");break;
        case 7:pirntf("July\n");break;
        case 8:pirntf("Augest\n");break;
        case 9:pirntf("Suptember\n");break;
        case 10:pirntf("October\n");break;
        case 11:pirntf("November\n");break;
        case 12:pirntf("December\n");break;
    }
    return 0;
}