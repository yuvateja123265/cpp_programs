#include<iostream>
using namespace std;
class student
{
	public:
		student()
		{
			cout<<"Contructor called."<<endl;
		}
		~student()
		{
			cout<<"Destructor called."<<endl;
		}
};
int main()
{
	student s1;
	return 0;
}
