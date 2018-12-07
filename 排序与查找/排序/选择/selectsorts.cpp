#include<iostream>
using namespace std;

//select sort
int main()
{
	int x[8]={1,4,2,7,23,432,2,3};
	
	int minNo;//纪录最小元素的下标 
	int m,n;//两重循环
	
	for(m=0;m<8-1;m++)//第一重循环从0到7 ，只剩一个元素时停止 
	{
		minNo=m;//先假设元素x[m]是最小的
		for(n=m+1;n<8;n++)//第二重循环，将剩下的元素分别与x[minNo]比较
		{
			if(x[n]<x[minNo]) minNo=n;//minNo始终记录最小元素的下标 
		 } 
		 
		 //交换x[m]和x[minNo]的值
		 int temp;
		 temp=x[m];
		 x[m]=x[minNo];
		 x[minNo]=temp; 
	 } 
	for(m=0;m<8;m++)
	cout<<x[m]<<",";//显示排序后的数据，用逗号隔开
	cout<<endl;return 0; 
	
}
