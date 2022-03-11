#include <iostream>
using namespace std;
class person
{
     public:
        int age, height, weight;
};

class student : public person
{
    public:
    void dis1()
    {
        cout<<"this is from student";
    }
};

class itstudent : public student
{
    public:
    void dis2()
    {
        cout<<"this is from  it_student\n";
        cout<<"height of it_student is:"<<height<<endl;
    }
};

int main()
{
    student s1;
    person p1;
    itstudent it1;
    //it1.dis2();
    it1.height=20;
    it1.dis2();

    return 0;
}

