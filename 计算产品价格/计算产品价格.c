//ji suan chan pin jia ge
#include<stdio.h>
int main()
{
	int sp=3.5;//standard edition price
	int dp=5.5;//deluxe edition price
	int standardedition=0;//standard edition type
	int deluxeedition=0;//deluxe edition type

	printf("Please enter Standard edition type quantity:");
	scanf("%d",&standardedition);
	printf("Please enter Deluxe edition type quantity:");
	scanf("%d",&deluxeedition);

	printf("Total price is $%d",standardedition*sp+deluxeedition*dp);
	return 0;

}
