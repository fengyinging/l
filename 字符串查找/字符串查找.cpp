#include<stdio.h>
#include<string.h>
int  main(int argc, char const *argv[])
{
	char s1[26];
	char s4[26];
	char s2[256];
	int i,a,c;
	char b;
	int idx=0,ide=0;
	gets(s1); 
	gets(s2);
	char s3[26];
	s4[0]=s1[0];
	for(a=0,i=0;a<=strlen(s1);++a)
	{
		ide=0;
		for(c=0;c<=strlen(s4);++c)
		{
			if(s4[c]==s1[a]) 
			{
				ide=1;
				break;
			}
		} 
		if(ide==0) s4[++i]=s1[a];
	}   
	
	
	for(i=0;i<=strlen(s4);++i)
	{
		for(a=0;a<=strlen(s2);++a)
		{
			if(s4[i]==s2[a])
			{
				s3[idx]=s4[i];
				idx++;
				break;
			}
		}
	}
	if(idx<=1) 
	{
		printf("No");
		return 0;
	}
	
	
	for(i=0;i<=strlen(s3);i++)
	{
		for(a=i+1;a<strlen(s3);++a)
		{
			if(s3[a]<s3[i])
			{
				b=s3[a];
				s3[a]=s3[i];
				s3[i]=b;
			}  
		}
	}
   for(i=0;i<=strlen(s3);i++)
   {
    	printf("%c ",s3[i]);
	}               
    return 0;
}

