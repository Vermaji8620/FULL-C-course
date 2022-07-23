#include <iostream>
using namespace std;

class Complex; // iska yeh matlb hota hai ki 'Complex' class jo hai na------wo kahi niche me banaya hua hai--
// to jb function run krte krte niche jata hai to usko jb 'calculator' function ka andar me 'Complex' likha hua milta hai to wo smjah jata hai ki 'Complex' naam ka jo class yaha pe likha hua hai wo hmko niche me mil jayega .....

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex); // aur ye method yaha pe declare kiya hua hai---iska matlb ki bhai ye jo method hai na .....wo niche me na jake na initialise kiya hua hai---
    int sumCompComplex(Complex, Complex);
};

class Complex
{
private:
    int a, b;
    // individually declaring functions as friends----
    // friend int Calculator ::sumRealComplex(Complex, Complex); //  yaha pe private k andar me jo 'a' and 'b' given hai usko bhej do dusre funciton k method k pass me ----
    // friend int Calculator ::sumCompComplex(Complex, Complex);

    // another method---that is;-----dclaring the whole 'calculator' as friend so that all the functions inside that 'calculator' class are accessible ----
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    };

    void printNumber()
    {
        cout << "your number is " << a << " +" << b << " i" << endl;
    };
};

int Calculator::sumRealComplex(Complex o1, Complex o2) // yaha pe jo hai hm 'sumRealComplex' function ko initialise kr de rhe hai....ye wo wala fucntion hai jo ki hm pehle declare kiye the ---- ye do paramter leta hai aur '.' krke apna received paramete rko access krta hai---
{

    return (o1.a + o2.a);
}

int Calculator::sumCompComplex(Complex p1, Complex p2)
{
    return (p1.b + p2.b);
}

main(int argc, char const *argv[])
{
    Complex c1, c2;
    c1.setNumber(1, 2);
    c2.setNumber(3, 4);
    c1.printNumber();
    c2.printNumber();
    Calculator c3;
    cout << "the sum of the real part is " << c3.sumRealComplex(c1, c2);
    printf("\n");
    cout << "the sum of the complex part is " << c3.sumCompComplex(c1, c2);
    return 0;
}