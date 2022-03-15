#include <iostream>
using namespace std;
class test
{
	int x;
	public:
	void read()
	{
		cout<<"Enter a number\n";
		cin>>x;
	}
	class EVEN{};
	class ODD{};
	void check()
	{
		if(x%2==0)
			throw EVEN();
		else
			throw ODD();
		
	}
};

int main()
{
	test t1;
	t1.read();
	try
	{
		t1.check();
	}
	catch(test :: EVEN)
	{
		cout<<"Number is even\n";
	}
	catch(test :: ODD)
	{
		cout<<"Number is odd\n";
	}
	
	return 0;
}
