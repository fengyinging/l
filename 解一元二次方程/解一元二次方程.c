#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Please enter a,b,c (such as:ax*x+bx+c=0) ");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0)
		printf("x=%d",-c/b);
	else 
	{
		d=b*b-4*a*c;
		if(d<0)
			printf("Dose not exist x");
		else
			if(d==0)
				printf("x=%d",-b/2*a);
			else printf("x=%d or x=%d",(-b+sqrt(d))/(2*a),(-b+sqrt(d))/2/a);
	}
	return 0;
 } 
