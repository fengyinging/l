#include<stdio.h>
int main()
{
	int n,i=0,a=0,b;
	int x=1,wei=0,newed,sum;
	scanf("%d",&n);
	long long int num[n];
	
	while(i<n)     //��������                 
	{
		scanf("%d",&num[i]);
		++i;
	}
	
	for(b=0;b<n;++b)   //�ж�ÿһ�����Ƿ�Ϊ������ 
	{
		if(num[b]>=10)
		{
		x=num[b];
		wei=0;
		sum=0;
		newed=0;
		while(x!=0)      //����λ�� 
		{
			x=x/10;
			wei++;
		}
		long long int number[wei]={0};        //��λ����һ������ 
		number[0]=num[b];
		for(a=1;a<wei;++a)     //������ÿһλ�ŵ�һ��������
		{
			number[a]=number[a-1]/10;
		}
		for(a=0;a<wei;++a)
		{
			number[a]=number[a]%10;
		} 
		for(a=0,i=wei-1;a<wei/2;++a,--i)  //�ж��Ƿ�Ϊ������ 
		{
			if(number[a]==number[i])
				newed=1;
			else break;
		}
		if(newed)     
		{
			for(i=0;i<wei;++i)
			sum+=number[i];
			printf("%d\n",sum);      //�����λ֮�� 
		}
		else printf("no\n");}
		else printf("%d\n",num[b]);
	}
	return 0;
}
