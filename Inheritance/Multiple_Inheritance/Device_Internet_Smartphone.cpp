// Question: Write a C++ program to demonstrate Multiple Inheritance
// using Device and Internet as base classes and Smartphone as the derived class.

#include <iostream>
using namespace std;

class Device
{
public:
    string brand;

    void displayDevice()
    {
        cout << "Brand: " << brand << endl;
    }
};

class Internet
{
public:
    string networkType;

    void displayInternet()
    {
        cout << "Network: " << networkType << endl;
    }
};

class Smartphone : public Device, public Internet
{
public:
    string model;

    void displayPhone()
    {
        cout << "Model: " << model << endl;
    }
};

int main()
{
    Smartphone s;

    s.brand = "Samsung";
    s.networkType = "5G";
    s.model = "Galaxy S24";

    s.displayDevice();
    s.displayInternet();
    s.displayPhone();

    return 0;
}
