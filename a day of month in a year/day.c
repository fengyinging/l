#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	switch(b)
	{
		case 1:;
		case 3:;
		case 5:;
		case 7:;
		case 8:;
		case 10:;
		case 12:printf("%d",31);break;
		case 4:;
		case 6:;
		case 9:;
		case 11:printf("%d",30);break;	
		default :	if((a%4==0&&a%100==0)||a%400) printf("%d",29);
			else printf("%d",28);
	}
	return 0;
}
