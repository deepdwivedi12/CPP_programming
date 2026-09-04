// Question: Write a C++ program to demonstrate Multiple Inheritance
// using Person and Job as base classes and Employee as the derived class.

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

class Job
{
public:
    string jobTitle;
    double salary;

    void displayJob()
    {
        cout << "Job Title: " << jobTitle << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Employee : public Person, public Job
{
public:
    int employeeId;

    void displayEmployee()
    {
        cout << "Employee ID: " << employeeId << endl;
    }
};

int main()
{
    Employee e;

    e.name = "Deep";
    e.age = 18;
    e.jobTitle = "Data Analyst";
    e.salary = 50000;
    e.employeeId = 101;

    e.displayPerson();
    e.displayJob();
    e.displayEmployee();

    return 0;
}
