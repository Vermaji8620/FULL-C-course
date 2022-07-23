#include <iostream>
using namespace std;

class A
{
    int a_take;

public:
    A() {}
    A(int a)
    {
        a_take = a;
    }
    virtual void A_give();
};

void A::A_give()
{
    cout << " value of a is" << a_take << endl;
}

class B : public A
{

    int b_take;

public:
    B() {}
    B(int b, int a) : A(a)
    {
        b_take = b;
    }
    friend void b_give(B);
};

void b_give(B b)
{
    cout << " the value of b is " << b.b_take << endl;
}

class C : public A
{
    int c_take;

public:
    C() {}
    C(int c, int p) : A(p)
    {
        c_take = c;
    }
    void A_give()
    {
        cout << " the value of c is " << c_take << endl;
    }
};

int main(int argc, char const *argv[])
{
    A a(54);
    a.A_give();
    B b(85, 100);
    b.A_give();

    A *ptr[1];
    C c(10, 12);
    ptr[0] = &c;
    ptr[0]->A_give();
    return 0;
}