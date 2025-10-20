#include<iostream>
namespace mynamespace
{
	int value=42;
	void show()
	{
		std::cout<<"Value:"<<value<<std::endl;
	}
}
int main()
{
	std::cout<<mynamespace::value<<std::endl;
	return 0;
}
