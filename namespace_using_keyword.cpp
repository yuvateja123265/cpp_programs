#include<iostream>
namespace mynamespace
{
	int value=42;
	void show()
	{
		std::cout<<"Value from show():"<<value<<std::endl;
	}
}
using namespace mynamespace;
int main()
{
	std::cout<<value<<std::endl;
	show();
	return 0;
}
