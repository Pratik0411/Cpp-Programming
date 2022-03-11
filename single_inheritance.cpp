#include <iostream>

using namespace std;

class animal
{
    public:
        int leg = 4;
        void display1()
        {
            cout<<"inside animal function\n";
        }
};
class dog : public animal
{
    public:
        int tail = 1;
        void display2()
        {
            cout<<"No of tails: "<<tail;
        }
};

int main()
{
    animal a1; dog d1;
    a1.display1();
    d1.display2();

    return 0;
}

