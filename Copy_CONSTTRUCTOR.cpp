// when any copy constructor is not defined , then the compiler itself supplies a copy constructor to each and every claass

#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj) // when no copy constructor is found, compiler supplies its own copy constructor
    {
        cout << "copy constructor called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the number for the object is " << a << endl;
    }
};

main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    // z1 should exactly resemble z
    Number z1(x); // copy constructor invoked
    z1.display(); // z1 should exaactly resemble x or y

    z2 = z; //  copy constructor is not  called here

    Number z3(z);
    z3.display();

    return 0;
}