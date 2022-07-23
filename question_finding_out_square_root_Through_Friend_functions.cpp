#include <iostream>
#include <cmath>
using namespace std;
class esehi
{
private:
    int a;
    int b;
    int c;
    int d;

public:
    esehi(int w, int x, int y, int z)
    {
        a = w;
        b = x;
        c = y;
        d = z;
    }

    friend void baharkafunction(esehi);
};

void baharkafunction(esehi esehikaobj)
{
    cout << "the distance between two points is" << pow((pow((esehikaobj.c - esehikaobj.a), 2) + pow((esehikaobj.d - esehikaobj.b), 2)), .5);
}

int main(int argc, char const *argv[])
{
    cout << " enter the points for finding out the distance" << endl;
    int p, q, r, s;
    cin >> p;
    cin >> q;
    cin >> r;
    cin >> s;
    esehi obj(p, q, r, s);
    baharkafunction(obj);
    return 0;
}