#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    };

    friend Complex sumComplex(Complex o1, Complex o2); // can also be declared insiode the private section---

    void printNumber()
    {
        cout << "your number is " << a << " +" << b << " i" << endl;
    };
};

Complex sumComplex(Complex o1, Complex o2) // yaha pe ek function banaaya hai jo ki Complex return krega...
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();
    printf("\n");
    c2.setNumber(5, 8);
    c2.printNumber();
    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}

// properties of friend functions
// 1.  not in the scope of the class
// 2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() is invalid
// 3. can be invoked without the help of any object
// 4. usually contains the objects as aarguments
// 5. cannot be declared inside the public or the private section of the class
// 6. cannot access the members directly by their names and need object_name.member_name to access any member
