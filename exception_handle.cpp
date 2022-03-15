#include <iostream>
using namespace std;


int main()
{
	int num, result, n1, n2;
	cin>>n1>>n2;
	try
	{
		if(n2==0)
			throw n2;
		else
		{
			result = n1/n2;
			cout<<"\nThe result is : "<<result;
		}
	}

	catch(int x)
	{
		cout<<"\nCant divided by : "<<x;
	}

	cout<<"\nEnd of program\n";
	return 0;
}

