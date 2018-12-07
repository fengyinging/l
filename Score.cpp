#include<stdio.h>
#include<iostream>
using namespace std;
void main()
{
	int n;
	int fac(int f);
	cin>>n;
	cout<<fac(n);
}
int fac(int f) {
	if (f == 1) return 1;
	return f * fac(--f);
}