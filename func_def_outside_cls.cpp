#include<iostream>
class test
{
	public:
		void display();
};
void test::display()
{
	std::cout<<"Hello from test class!"<<std::endl;
}
int main()
{
	test t;
	t.display();
	return 0;
}
