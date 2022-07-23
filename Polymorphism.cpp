#include <iostream>
using namespace std;

class BaseClass
{

public:
    int var_base;
    virtual void display()
    {
        cout << " displaying baseclass1 variable" << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{

public:
    int var_derived;
    virtual void display()
    {
        cout << " displaying base class variable var_defined " << var_derived << endl;
        cout << " displaying derived class variable var_defined " << var_base << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 34; // not allowed since pointer of the 'BaseClass' created even though points to the Derived_Class, still , on calling the function, the properties and the methods derived from the base_class can just be accessed--
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 5000;
    derived_class_pointer->display();

    return 0;
}