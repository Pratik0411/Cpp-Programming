#include<iostream>
using namespace std;

class base
{
	int x;
	public:
	base()
	{
		cout<<"base defoult constrictors\n";
	}
};

class derived : public base
{
	int y;
	public:
	derived()
	{
		cout<<"Derived defoult construcor\n";
		
	}
	derived(int i)
	{
		cout<<"Derived parameterizes constructor\n";
	}
};

int main()
{
	base b;
	derived d1;
	derived d2(10);
	return 0;
}
