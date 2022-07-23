#include <iostream>
using namespace std;
//
//
//
class Base
{
    int data1; // private by default and non-inheritable
public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int Base::getdata1()
{
    return data1; // data1 to mera privately defined hai ...to hmko yeh kisi v dusre class ka andar me accessible to nai hoga..... isilye hm ek ek 'getdata1' function 'publicly' define krrhe hai jisme ki 'data1' ko define kr de rhe hai....now my 'data1' is accessible but 'indirectly' , that is through 'getdata1' function
}
int Base::getdata2()
{
    return data2;
}
//
//
//
//
class Derived : public Base // class is being derived publically
{
    int data3;

public:
    void process();
    void display();
};

void Derived::process()
{
    data3 = data2 * getdata1();
}
void Derived::display()
{
    cout << "the value of data1 is " << getdata1() << endl;
    cout << "the value of data2 is " << data2 << endl;
    cout << "the value of data3 is " << data3 << endl;
}
//
//
//
int main(int argc, char const *argv[])
{
    Derived der;
    der.setdata(); // we have created an object of the 'Derived' class and called the function of the 'Base' class .. This is possible since we have inherited the first function into the second one ---
    der.process();
    der.display();
    return 0;
}