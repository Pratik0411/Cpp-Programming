#include <iostream>
using namespace std;
	int a;
void demo() throw(int)
{
	cin>>a;
	if(a==1)
	throw 1;
	else if(a==2)
	throw 2;
	else if(a==3)
	throw 2;
}
int main()
{
	try
	{
		demo();
	}
	catch(int)
	{
		cout<<"Exception cought\nNumber is: "<<a;
	}
	cout<<"\nEnd of programmm\n";
}
