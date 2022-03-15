#include<iostream>
#include<exception>
using namespace std;

class divide
{
	private:
	int *x, *y;
	public:
	divide()
	{
		x=new int();
		y=new int();
		cout<<"Enter two numbers\n";
		cin>>*x>>*y;
		try
		{
			if(*y==0)\
			{
				throw *x;
			}
		}
		catch(int)
		{
			delete x; delete y;
			cout<<"Second number can not be zero!\n";
			throw;
		}
	}
	~divide()
	{
		try
		{
			delete x; delete y;
		}
		catch(...)
		{
			cout<<"Error while deallocating memory\n";
		}
	}
	float division()
	{
		return (float)*x / *y;
	}	
};

int main()
{
	try
	{
		divide d;
		float res = d.division();
		cout<<"Result of division is: "<<res<<endl;
	}
	catch(...)
	{
		cout<<"Unknown exception\n";
	}
	
	return 0;
}
