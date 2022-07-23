#include <iostream>
using namespace std;

/*

syntax for initialisation list in constructor :
constructor (argument): initialisation-section
{
    assignment+ other code;
}

Class Test{
    int a , b;
    public:
    Test(int i, int j):a(i), b(j){ cout<<"constructor-executed" }
};
*/

class test
{
    int b;// jis order me declaration hua hai, usi order me initialisation v hona chhaaiye,,, nai to koi ek garbage value dedega---
    int a;

public:
    test() {}
    test(int i, int j) : b(j), a(i+b)  // kuch v nai hai just ek constructor ko initialise krne ka naya tarika hai...
    {
        cout << " constructor executed" << endl;
        cout << " the value of a is " << a << endl;
        cout << " the value of b is " << b << endl;
    }
};

int main(int argc, char const *argv[])
{
    test t;
    t = test(400, 6);
    return 0;
}