#include<iostream>
using namespace std;

class Number
{
    int value;

public:
    void set(int v)
    {
        value = v;            // assigning value
    }

    Number operator + (Number n)
    {
        Number temp;
        temp.value = value + n.value;   // adding two objects
        return temp;
    }

    void show()
    {
        cout<<"Value: "<<value;
    }
};

int main()
{
    Number n1, n2, n3;

    n1.set(15);
    n2.set(25);

    n3 = n1 + n2;      // overloaded + operator

    n3.show();
    return 0;
}

