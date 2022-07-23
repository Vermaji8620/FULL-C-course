#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;

public:
    simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }

    // simple(int c)
    // {
    //     data1 = c;
    //     data2 = 3794;      // upar wala contructor aur yeh wala constructor dono ek sath kaam nai krega-- kyunki by default dono me ek hi argument de rhe hai hm
    // }

    void printdata()
    {
        cout << " the value of data is " << data1 << " and " << data2 << endl;
    };
};

int main(int argc, char const *argv[])
{
    simple s(1);
    s.printdata();
    return 0;
}
