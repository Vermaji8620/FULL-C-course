// there are two ways listed of 'this' keyword in thi program---
#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a; // 1. jo argument pass hua hai function ka andar me wo declaration wale variable se alag hona chahiye---lekin agar hm 'this' keyword use krte hai to aisa hona jaruri nai hai...
    }
    void getdata()
    {
        cout << " the value of a is " << a << endl;
    }
};

int main(int argc, char const *argv[])
{
    // 2.  this is a keyword which is a pointer which points to the object which invokes the member functions---
    A a;
    a.setdata(4);
    a.getdata();
    return 0;
}