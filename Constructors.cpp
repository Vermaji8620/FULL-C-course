// constructor wo function  hai jiska name same hota hai class name k jaisa----aur isko call krne ka jarurat nai pdta hia----khu d hi call ho jata hai

#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    // creating a constructor
    // costructor is a special member function with same name as of the class. It is used to initialise the objects of its class---it is automatically invoked whenever an object is created---
public:
    Complex(); // constructor declaration( default constructor since it is taking no parameter)
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex()
{
    a = 10;
    b = 20;
}

int main(int argc, char const *argv[])
{
    Complex c;
    c.printnumber();
    return 0;
}

// properties=-----

// 1 . it should be declared in the public section of the class
// 2.  they are automatically invoked  whenever the object is created---
// 3.  they dont return values and dont have a valid return type---
// 4.  it can have default argumeents
// 5.  we cannot refer to the address