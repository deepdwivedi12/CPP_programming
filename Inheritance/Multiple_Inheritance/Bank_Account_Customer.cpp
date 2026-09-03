// Question: Write a C++ program to demonstrate Multiple Inheritance
// using BankAccount and Customer as base classes and AccountHolder as the derived class.

#include <iostream>
using namespace std;

class BankAccount
{
public:
    int accountNo;
    double balance;

    void displayAccount()
    {
        cout << "Account Number: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Customer
{
public:
    string name;
    string city;

    void displayCustomer()
    {
        cout << "Name: " << name << endl;
        cout << "City: " << city << endl;
    }
};

class AccountHolder : public BankAccount, public Customer
{
public:
    void displayDetails()
    {
        cout << "Account Holder Details displayed." << endl;
    }
};

int main()
{
    AccountHolder a;

    a.accountNo = 12345;
    a.balance = 25000;
    a.name = "Deep";
    a.city = "Bhopal";

    a.displayAccount();
    a.displayCustomer();
    a.displayDetails();

    return 0;
}
