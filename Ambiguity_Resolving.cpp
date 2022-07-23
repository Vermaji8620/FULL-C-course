#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << " how are you";
    }
};

class Base2
{
public:
    void greet()
    {
        cout << " kaise ho ";
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << " hello world";
    }
};

class D : public B
{
    int a;
    // D's new say method will overwrite base class's say method
public:
    void say()
    {
        cout << "Hello world my beautiful people";
    }
};

int main(int argc, char const *argv[])
{ // ambiguity 1:
    Derived d;
    // d.greet();
    //
    //
    //
    // ambuiguity 2:
    B b;
    // b.say();
    D dd;
    dd.say();

    return 0;
}