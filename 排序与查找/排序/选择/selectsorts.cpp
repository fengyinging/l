#include<iostream>
using namespace std;

//select sort
int main()
{
	int x[8]={1,4,2,7,23,432,2,3};
	
	int minNo;//��¼��СԪ�ص��±� 
	int m,n;//����ѭ��
	
	for(m=0;m<8-1;m++)//��һ��ѭ����0��7 ��ֻʣһ��Ԫ��ʱֹͣ 
	{
		minNo=m;//�ȼ���Ԫ��x[m]����С��
		for(n=m+1;n<8;n++)//�ڶ���ѭ������ʣ�µ�Ԫ�طֱ���x[minNo]�Ƚ�
		{
			if(x[n]<x[minNo]) minNo=n;//minNoʼ�ռ�¼��СԪ�ص��±� 
		 } 
		 
		 //����x[m]��x[minNo]��ֵ
		 int temp;
		 temp=x[m];
		 x[m]=x[minNo];
		 x[minNo]=temp; 
	 } 
	for(m=0;m<8;m++)
	cout<<x[m]<<",";//��ʾ���������ݣ��ö��Ÿ���
	cout<<endl;return 0; 
	
}
