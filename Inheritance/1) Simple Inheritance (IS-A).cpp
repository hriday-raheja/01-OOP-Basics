#include<iostream>
using namespace std;

class Person
{
public:
    void showPerson()
    {
        cout<<"I am a person";   // base class function
    }
};

class Student : public Person   // Student IS-A Person
{
public:
    void showStudent()
    {
        cout<<"\nI am a student";   // derived class function
    }
};

int main()
{
    Student s;
    s.showPerson();   // calling base class function
    s.showStudent();  // calling derived class function
    return 0;
}

