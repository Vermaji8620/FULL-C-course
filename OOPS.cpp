#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1); // declaration ki ha  bhai baad me mil jayega function tmko
    void getdata()
    {
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
        cout << "value of c is " << c << endl;
        cout << "value of d is " << d << endl;
        cout << "value of e is " << e << endl;
    };
};

void Employee::setdata(int a1, int b1, int c1) // scope resolution operator
{
    a = a1;
    b = b1;
    c = c1;
}

int main(int argc, char const *argv[])
{
    Employee harry;
    harry.setdata(1, 2, 4);
    // harry.a = 3874; // gives an error bcoz 'a' is defined in the private variable o not accessible outside
    harry.d = 76;
    harry.e = 760;
    harry.getdata();
    return 0;
}