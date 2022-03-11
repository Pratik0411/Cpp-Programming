#include <iostream>
using namespace std;
class liquid
{
    public:
    int price=200;
};

class fuel
{
    public:
    int price1=100;
};
class petrol:public liquid, public fuel
{
    public:
    void d1()
    {
        cout<<"price of the liquid is: "<<price<<endl;
    }
};

int main()
{
    liquid l1;
    fuel f1;
    petrol p1;
    p1.d1();

    return 0;
}

