#include <iostream>
using namespace std;
void demo() throw(int, double)
{
	int a=2;
	if(a==1)
	throw 1;
	else if(a==2)
	throw 'A';
	else if(a==3)
	throw 3.5;
}
int main()
{
	try
	{
		demo();
	}
	catch(int)
	{
		cout<<"Exception cought";
	}
	cout<<"\nEnd of programmm\n";
}
