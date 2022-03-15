#include<iostream>
#include<exception>
using namespace std;

class base
{
	int b;
};

class derived : public base
{
	int d;
};

int main()
{
	try
	{
		throw derived();
	}
	catch(derived d)
	{
		cout<<"Derived object cought\n";
	}
	catch(base b)
	{
		cout<<"Base object cought\n";
	}
	return 0;
}
