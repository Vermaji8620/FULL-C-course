#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
        cout << " agar isme aisa kch likh v de to wo v apne aap hi run ho jayega" << endl;
    }
};

Complex::Complex(int x, int y) // since it contains porameter hemce it is called parameterised constructor
{
    a = x;
    b = y;
}

int main(int argc, char const *argv[])
{
    // implicit call
    Complex a(4, 6);
    a.printnumber();
    // expilicit call
    Complex b = Complex(5, 7);
    b.printnumber();

    return 0;
}
