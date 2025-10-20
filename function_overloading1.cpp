#include<iostream>
using namespace std;
int sum(int a,int b)
{
	return a+b;
}
int sum(int a, int b, double c)
{
	return a+b+c;
}
float sum(float a, float b)
{
	return a+b;
}
int main()
{
	cout<<"Sum:"<<sum(9,4)<<endl;
	cout<<"Sum:"<<sum(8,3,2.5)<<endl;
	cout<<"Sum:"<<sum(4.5f,8.2f)<<endl;
	return 0;
}
