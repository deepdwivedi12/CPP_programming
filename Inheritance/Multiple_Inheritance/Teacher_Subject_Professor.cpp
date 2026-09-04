// Question: Write a C++ program to demonstrate Multiple Inheritance
// using Teacher and Subject as base classes and Professor as the derived class.

#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;
    string department;

    void displayTeacher()
    {
        cout << "Teacher Name: " << name << endl;
        cout << "Department: " << department << endl;
    }
};

class Subject
{
public:
    string subjectName;
    int credits;

    void displaySubject()
    {
        cout << "Subject: " << subjectName << endl;
        cout << "Credits: " << credits << endl;
    }
};

class Professor : public Teacher, public Subject
{
public:
    void displayProfessor()
    {
        cout << "Professor details displayed." << endl;
    }
};

int main()
{
    Professor p;

    p.name = "Deep";
    p.department = "Computer Science";
    p.subjectName = "Data Analytics";
    p.credits = 4;

    p.displayTeacher();
    p.displaySubject();
    p.displayProfessor();

    return 0;
}
