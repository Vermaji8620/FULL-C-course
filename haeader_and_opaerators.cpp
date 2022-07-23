#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 45;
    int b = 76;
    // endl ek tarah ka manipulator hai....
    cout << "The similarity of a<b is " << (b > a) << endl; // returns 0 or 1
    // endl is used to go to the next line as there was printf("\n") in C
    cout << "the value of this logical operator is " << ((a > b) || (a == b));
    return 0;
}
