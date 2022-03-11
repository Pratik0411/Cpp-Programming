#include<iostream>
using namespace std;
class ABC
{
	public:
	void display()
	{
		cout<<"this is parent class\n";
	}
};
class XYZ : public ABC
{
	public:
	void display()
	{
		cout<<"this is child class\n";
	}
};

int main()
{
	XYZ x;
	x.display();
}
