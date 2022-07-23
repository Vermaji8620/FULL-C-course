// agar aisa koi function hai jisme ki ek se jada 'data types' lag skta hai... to us case me hm template k andar 'T1' and 'T2'(for example) define kr dete hai......aur jaise needed waise krke main k andar se call kr lete hai--
// kehne ka yeh matlb hai ki kitna jada 'data types' banayenge , utna jada template ka andar class define krna hoaga--


#include <iostream>
using namespace std;

template <class T1, class T2>
class first
{
    T1 mul;
    T2 add;

public:
    void just_take(T1 m)
    {
        mul = m;
        cout << " value of mul is " << mul * 10 << endl;
    }
    void just_add(T1 a, T2 b)
    {
        add = a * b;
        cout << " value of multiplied terms is " << add << endl;
    }
};

int main(int argc, char const *argv[])
{
    first<int, float>firstobj;
    firstobj.just_add(508, 5.1656);
    return 0;
}