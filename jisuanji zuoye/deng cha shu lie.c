#include<stdio.h>
int judge(int *a,int b) //�жϵȲ����� 
int main()
{
	int n;//������������ 
	int m��//ÿ�����ݸ��� 
	int t;//ѭ����������
	int jud[100];//�ж��Ƿ�Ϊ�Ȳ����� 
	int o=0;
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		scanf("%d",&m);  //����ÿ�����ݸ���
		int num[m];//�������� 
		for(t=0;t<m;++t)//�������� 
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
