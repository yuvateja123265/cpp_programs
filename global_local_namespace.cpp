#include<iostream>
int value=100;
namespace mynamespace
{
	int value=200;
	void show()
	{
		std::cout<<"Namespace value:"<<value<<std::endl;
	}
}
int main()
{
	int value=300;
	std::cout<<"Local value:"<<value<<std::endl;
	std::cout<<"Global value:"<<::value<<std::endl;
	std::cout<<"Namespace value:"<<mynamespace::value<<std::endl;
	mynamespace::show();
	return 0;
}
