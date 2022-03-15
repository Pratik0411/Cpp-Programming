#include <iostream>
using namespace std;
int main()
{
	int a=1;
	try
	{
		try
		{
			throw a;
		}
		catch(int x)
		{
			cout<<"\nException in inner try-catch block.\n";
			throw x;
		}
	}
	
	catch(int n)
	{
		cout<<"\nException in outer try-catch block.\n";
	}
	cout<<"end of the program\n";
	return 0;
}

