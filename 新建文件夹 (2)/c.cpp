#include <iostream>
#include <math.h>
 
using namespace std;
 
bool isPadlindrome(int n)
{
	// �����int���͵���Сֵ ��Ȼ���ǻ�����
	if (n == INT_MIN)
	{
		return false;
	}
 
	// ����ֵ
	n = abs(n);
 
	int tmp = 1;
 
	// ��tmpλ����Ϊ��nһ��
	while(n / tmp >= 10) // ��ֹtmp���
	{
		tmp *= 10;
	}
 
	// n = 0 ��ʾ����λ�Ƚ���
	while(n != 0)
	{
		// ���λ != ���λ
		if (n / tmp != n % 10)
		{
			return false;
		}
 
		// ���λ = ���λ ȥ�����λ ȥ�����λ
		// �����Ƚ�
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
