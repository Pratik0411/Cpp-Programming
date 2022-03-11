#include<iostream>
using namespace std;
class base
{
	public:
	int i;
	void displaybase()
	{
		cout<<"inside base\n";
	}
};

class derived:public base
{
	public:
	void displayderived()
	{
		cout<<"inside derived\n";	
	}	
};

int main()
{
	derived dv1;
	base* ptr;
	ptr = &dv1;
	ptr->displaybase();
	//ptr->displayderived();
	((derived *)ptr)->displaybase();
	((derived *)ptr)->displayderived();
}
