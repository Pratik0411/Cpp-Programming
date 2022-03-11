#include <iostream>
using namespace std;
class liquid
{
    public:
    int price=200;
    void d1()
    {
        cout<<"price of the liquid is: "<<price<<endl;
    }
};

class fuel:public liquid
{
    public:
    int price1=100;
    void d2()
    {
        cout<<"price of the liquid is: "<<price1<<endl;
    }
};

class water:public liquid
{
    public:
    int price2=50;
    void d3()
    {
        cout<<"price of the liquid is: "<<price2<<endl;
    }
};

class fluid:public water, public fuel
{
    public:
    void d4()
    {
        cout<<"price of the fluid is: "<<endl;
    }
};

int main()
{
    liquid l1;
    fuel f1;
    water w1;
    fluid ff1;
    ff1.d2();

    return 0;
}

