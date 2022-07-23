#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void BankDeposit::show()
{
    cout << endl
         << "principal amount was" << principal << endl
         << "returnvalue after " << years << "is " << returnvalue << endl;
}

int main(int argc, char const *argv[])
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "enter the value of p y and r" << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    bd3.show();
    return 0;
}