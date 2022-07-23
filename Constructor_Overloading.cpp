#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 510;
        b = 150;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int f)
    {
        a = f;
        b = 0;
    }

    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};

main(int argc, char const *argv[])
{
    Complex c1(4, 6); // the value(arguments) can even be passed in this way; i.e; directly---
    c1.printnumber();
    Complex c2;
    c2 = Complex(10); // and can even be passed in this way--- that is first by declaring the object of the class----
    c2.printnumber();
    Complex c3;
    c3.printnumber();
    return 0;
}