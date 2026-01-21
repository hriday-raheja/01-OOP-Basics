#include<iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout<<"This is Base class";
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout<<"This is Derived class";   // overriding
    }
};

int main()
{
    Derived d;
    d.show();          // derived version called
    return 0;
}
