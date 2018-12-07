#include<stdio.h>
#include<string.h>

int main()
{
	
	char s1[1000];
	char s2[1000];
	int i,b=1;
	int ide=0,idx;
	gets(s1);
	gets(s2);
	if(strlen(s2)<=strlen(s1)||strlen(s1)==0||strlen(s2)==0) return 0;
	for(i=0;i<=strlen(s2)-strlen(s1);++i)
	{
		ide=0;
		for(idx=0;idx<=strlen(s1);++idx)
		{
			if(s2[i+idx]==s1[idx]) ide++;
			else break;
		}
		if(ide>=strlen(s1))
		printf("%d ",i),b=0;
		  
	}
	if(b) printf("-1");
	return 0;
}

