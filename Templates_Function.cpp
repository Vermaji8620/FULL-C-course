#include <iostream>
using namespace std;

// float funcaverage(int a, int b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// };

// float funcaverage2(int a, float b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// };

template <class T>
void swapp(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
};

template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main(int argc, char const *argv[])
{
    float a;
    a = funcAverage(5, 3);
    cout << " the average of these numbers is " << a << endl;
    int x = 5;
    int y = 7;
    swapp(x, y);
    cout<< x<< endl;
    cout<< y<< endl;
    return 0;
}