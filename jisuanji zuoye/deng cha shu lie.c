#include<stdio.h>
int judge(int *a,int b) //判断等差数列 
int main()
{
	int n;//输入数据组数 
	int m；//每组数据个数 
	int t;//循环输入数据
	int jud[100];//判断是否为等差数列 
	int o=0;
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		scanf("%d",&m);  //输入每组数据个数
		int num[m];//定义数组 
		for(t=0;t<m;++t)//输入数据 
		{
			scanf("%d",&num[t]);
		}
		jud[i]=judge(num,m); 
	}
	for(i=0;i<n;i++)
	{
		if(jud[i]) printf("no\n");
		
	}
	return 0;
}
int judge(int *a,int b)
{
	k=*(a+1)-*a;
	for(b=0;b<m;++b)
	{
		if((*(a+1)-*a)!=k)  o=1;
	}
}
