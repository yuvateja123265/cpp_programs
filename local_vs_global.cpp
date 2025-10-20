#include<iostream>
int x=10;//global variable
int main()
{
	int x=20;//local variable
	std::cout<<"Local x:"<<x<<std::endl;
	std::cout<<"Global x:"<<::x<<std::endl;//scope resolution to access global x
	return 0;
}
