#include <iostream>
using namespace std;
class person
{
    private:
        int age=20;
    protected:
        int height=170;
    public:
        int weight=62;
        
};

class student : public person
{
    public:
    void dis1()
    {
        cout<<"this is from student\n";
        //cout<<"age is: "<<age<<endl;
        cout<<"height is: "<<height<<endl;
        cout<<"weight is: "<<weight<<endl;
    }
};

class itstudent : public student
{
    public:
    void dis2()
    {
        cout<<"this is from it_student\n";
        //cout<<"age is: "<<age<<endl;
        cout<<"height is: "<<height<<endl;
        cout<<"weight is: "<<weight<<endl;
    }
};

int main()
{
    person p1;
    student s1;
    itstudent it1;
    s1.dis1();
    it1.dis2();
    return 0;
}

