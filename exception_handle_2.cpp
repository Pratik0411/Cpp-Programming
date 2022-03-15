#include <iostream>
using namespace std;


int main()
{
	int n1, n2;
	cout<<"Enter first number\n"; cin>>n1;
	cout<<"Enter second number\n"; cin>>n2;
	try
	{
		if(n2!=n1)
		{
			float div = (float)n1/n2;
			if(div<0)
				throw 'e';
			cout<<"n1/n2 = "<<div<<endl;
		}
		else
		{
			throw n2;
		}
	}

	catch(int e)
	{
		cout<<"\nException: Division by zero\n";
	}
	
	catch(char st)
	{
		cout<<"\nException: Division is less than 1\n";
	}
	
	catch(...)
	{
		cout<<"\nException: Unknown\n";
	}

	return 0;
}

