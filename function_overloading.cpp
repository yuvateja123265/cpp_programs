#include<iostream>
using namespace std;
class print
{
	public:
		void show(int x)
		{
			cout<<"Integer:"<<x<<endl;
		}
		void show(double x)
		{
			cout<<"Double:"<<x<<endl;
		}
		void show(string x)
		{
			cout<<"String:"<<x<<endl;
		}
};
int main()
{
	print p;
	p.show(13);
	p.show(13.5);
	p.show("Rupesh");
	return 0;
}
