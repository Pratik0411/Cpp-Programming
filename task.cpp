#include <iostream>

using namespace std;

class a
{
    public:
        void displayA()
        {
            cout<<"inside A function\n";
        }
};

class b
{
    public:
        void displayB()
        {
            cout<<"inside B function\n";
        }
};

class c: public a
{
    public:
        void displayC()
        {
            cout<<"inside C function\n";
        }
};

class d: public b
{
    public:
        void displayD()
        {
            cout<<"inside D function\n";
        }
};

class e: public c, public d
{
    public:
        void displayE()
        {
            cout<<"inside E function\n";
        }
};

class f: public e
{
    public:
        void displayF()
        {
            cout<<"inside F function\n";
        }
};

int main()
{
	a ob1; b ob2;c ob3; d ob4; e ob5; f ob6;
	ob1.displayA();
	//ob2.displayA();
	//ob2.displayC();
	//ob2.displayD();	
	
	ob5.displayA();
	ob5.displayC();
	ob5.displayB();
	ob5.displayE();
	
	ob6.displayA();
	ob6.displayB();
	ob6.displayC();
		
	return 0;
}

