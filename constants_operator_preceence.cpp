#include <iostream>
using namespace std;
#include <iomanip>

int main(int argc, char const *argv[])
{
    // CONSTANTS
    const int a = 46; // ye jo hai ekdum javascript k jaise hai jo usme const use krte thee ekdum waise hi .....agr iske niche a k value ko change krne k try krnge to nai hoga

    int b = 56;
    int c = 45;
    int d = 65;

    cout << "the value of b is " << setw(4) << b << endl; // setw jo hai wo needed space chodne k liye diya jaata hai-- aur iske liye <iomanip> include krna padta hai

    // OPERATOR PRECEDENCE
    int x = 3;
    int z = 4;
    // ye chiz ki konsa operator pehle evolve hoga wo net pe mil jayega 'operator precedence k naam se'
    int df = ((((a * 5) + b) - 45) + 87);

    return 0;
}
