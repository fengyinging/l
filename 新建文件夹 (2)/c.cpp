#include <iostream>
#include <math.h>
 
using namespace std;
 
bool isPadlindrome(int n)
{
	// 如果是int类型的最小值 显然不是回文数
	if (n == INT_MIN)
	{
		return false;
	}
 
	// 绝对值
	n = abs(n);
 
	int tmp = 1;
 
	// 将tmp位数变为与n一致
	while(n / tmp >= 10) // 防止tmp溢出
	{
		tmp *= 10;
	}
 
	// n = 0 表示所有位比较完
	while(n != 0)
	{
		// 最高位 != 最低位
		if (n / tmp != n % 10)
		{
			return false;
		}
 
		// 最高位 = 最低位 去掉最高位 去掉最低位
		// 继续比较
		n = (n % tmp) / 10;
		tmp /= 100;
	}
 
	return true;
}
 
int main(void)
{
	int n;
	cin>>n;
 
	if (isPadlindrome(n))
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
 
	return 0;
}
