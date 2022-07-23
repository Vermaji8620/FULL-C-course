#include <iostream>
using namespace std;

template <class T1 = int, class T2 = int, class T3 = int> // ye tb execute hoga jab koi data type main se pass nai kiya gaya ho--, but 'data type' defined inside the main has more priority
class TempDefault
{
    T1 a;
    T2 b;
    T3 c;

public:
    TempDefault(T1 p, T2 q, T3 r)
    {
        a = p;
        b = q;
        c = r;
    }
    void temp_display()
    {
        cout << " the value of a is " << a << endl;
        cout << " the value of b is " << b << endl;
        cout << " the value of c is " << c << endl;
    }
};

int main()
{
    TempDefault<int, float, int> TempDefaultobj(1, 444.422, 'C');
    TempDefaultobj.temp_display();
    return 0;
}