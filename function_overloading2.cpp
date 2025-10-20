#include<iostream>
#include<string.h>
using namespace std;
void info(int age)
{
	cout<<"Age:"<<age<<"years"<<endl;
}
void info(int age, double height)
{
	cout<<"Age:"<<age<<"years , Height:"<<height<<"meters"<<endl;
}
void info(int age, double height, string name)
{
	cout<<"Age:"<<age<<"years , Height:"<<height<<"meters, "<<"Name:"<<name<<endl;
}
int main()
{
	info(18);
	info(18,5.7);
	info(18,5.7,"Rupesh");
	return 0;
}
