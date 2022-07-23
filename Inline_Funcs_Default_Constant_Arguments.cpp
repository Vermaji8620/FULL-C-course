// inline funciton----
// jb hm koi function ko call krte hai tb hota yeh hai ki atual parameter se baar baar value copy hoke formal parameter me jata hai and then waha pe operation hoke fir return hoke fir wapis aata hai---to isme bhot TIME laghta ha--------to inline kya krta hai ki actual paraamter ka values apne pas copy krke rakh leta hai aur jb v fir functin call hota hai to sidha pehle se copy kiya hua value chipka deta hai

// aur isko tabhi use krna chahaiye jb return me chota function ho ho...nai to agar bada function to jb copy kuya hua value ko pass krega to bhot jada memory kha jayega.

#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    // not recommended for using inline with below lines
    static int c = 0;
    c += 1;
    int p = a * b;
    return p;
}

int moneyreceived(int currentmoney, float factor = 23.782)
{
    return currentmoney + factor;
}
int main(int argc, char const *argv[])
{
    int a, b;
    cout << "enter the vlaue of a" << endl;
    cin >> a;
    cout << "enter the value of b" << endl;
    cin >> b;
    cout << "The value is" << product(a, b) << endl;
    // cout << "The value is" << product(a, b) << endl;
    // cout << "The value is" << product(a, b) << endl;
    // cout << "The value is" << product(a, b) << endl;
    // cout << "The value is" << product(a, b) << endl;
    // cout << "The value is" << product(a, b) << endl;
    // cout << "The value is" << product(a, b) << endl;
    int money = 1000000;
    cout << "if you have " << money << "rs in your bank account"
         << "you will receive" << moneyreceived(money) << "in your bank account after 1 year";
    return 0;
}