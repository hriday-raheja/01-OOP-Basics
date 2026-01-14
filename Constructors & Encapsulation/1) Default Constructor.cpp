#include<iostream>
using namespace std;

class Student
{
    int roll;
    float marks;

public:
    Student()                 // default constructor
    {
        roll = 0;             // default roll
        marks = 0;            // default marks
    }

    void display()
    {
        cout<<"\nRoll: "<<roll;     // printing roll
        cout<<"\nMarks: "<<marks;   // printing marks
    }
};

int main()
{
    Student s;               // constructor called automatically
    s.display();             // displaying default values
    return 0;
}

