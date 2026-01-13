#include<iostream>
using namespace std;

class Student
{
    string name;        // stores student name
    int rollNo;         // stores roll number

public:
    void getDetails()
    {
        cout<<"Enter Name: ";
        cin>>name;      // taking name
        cout<<"Enter Roll No: ";
        cin>>rollNo;    // taking roll number
    }

    void displayDetails()
    {
        cout<<"\nName: "<<name;      // printing name
        cout<<"\nRoll No: "<<rollNo; // printing roll number
    }
};

int main()
{
    Student s1;         // creating object
    s1.getDetails();   // calling input function
    s1.displayDetails(); // calling display function
    return 0;
}

