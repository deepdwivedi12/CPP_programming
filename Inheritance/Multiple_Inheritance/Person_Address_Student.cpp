// Question: Write a C++ program to demonstrate Multiple Inheritance
// using Person and Address as base classes and Student as the derived class.

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Address
{
public:
    string city;
    string state;

    void displayAddress()
    {
        cout << "City: " << city << endl;
        cout << "State: " << state << endl;
    }
};

class Student : public Person, public Address
{
public:
    int rollNo;

    void displayStudent()
    {
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main()
{
    Student s;

    s.name = "Deep";
    s.age = 18;
    s.city = "Bhopal";
    s.state = "Madhya Pradesh";
    s.rollNo = 101;

    s.displayPerson();
    s.displayAddress();
    s.displayStudent();

    return 0;
}
