#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getdataSimple()
    {
        cout << " enter the value of a " << endl;
        cin >> a;
        cout << " enter the value of b " << endl;
        cin >> b;
    }
    void performOperationsSimple()
    {
        cout << " the value of a + b is " << a + b << endl;
        cout << " the value of a - b is " << a - b << endl;
        cout << " the value of a * b is " << a * b << endl;
        cout << " the value of a / b is " << a / b << endl;
    }
};
class ScientificCalculator
{
    int a, b;

public:
    void getdataScientific()
    {
        cout << " enter the value of a " << endl;
        cin >> a;
        cout << " enter the value of b " << endl;
        cin >> b;
    }
    void performOperationsScientific()
    {
        cout << " the value of cos a is " << cos(a) << endl;
        cout << " the value of cos a is " << cos(b) << endl;
        cout << " the value of tan a is " << tan(b) << endl;
        cout << " the value of cot a is " << exp(b) << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main(int argc, char const *argv[])
{
    // SimpleCalculator calci;
    // calci.getdata();
    // calci.performOperations();

    HybridCalculator calci;
    calci.getdataScientific();
    calci.performOperationsScientific();

    calci.getdataSimple();
    calci.performOperationsScientific();
    return 0;
}