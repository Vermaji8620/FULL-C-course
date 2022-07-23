// is program ka main ye matlb hai ki jo hm pehle object banate the aur phir functions ko call krte the ........isme object ka jagah pe pointer banana pdega aur pointer se member functions ko call krna pdega---

#include <iostream>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << " the real part is " << real << endl;
        cout << " the imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main(int argc, char const *argv[])
{
    // Complex c1;
    // Complex *ptr = &c1;
    // upar wala dono syntax likh skte hai ya fir ek niche wala syntax---
    Complex *ptr = new Complex; // yaaha pe new 'keyword' ka baad 'object' banaya hua hai 'Complex'---
    //
    (*ptr).setData(1, 54); // pointer ko dereference kr skte hai---
    // (*ptr).getData(); // write this syntax or the syntax below---
    ptr->getData();
    return 0;

    // Complex *ptr=new Complex[4];  syntax for making an array of objects
}
