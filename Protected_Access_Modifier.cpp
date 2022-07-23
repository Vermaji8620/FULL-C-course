#include <iostream>
using namespace std;

class Base
{
    int b;

protected: // private k '''jaisa''' hi hai protected ...bs taki inherit ho sake mera jo v variable jo ki 'private' me hai, isiliye hm 'private' wala variable ko protectes bana dete hai taki bs inheritance k liye use kr sake and not for anything else
    int a;
};

/*

for a protected member:-
                            Public----derivation          Private---derivation       Protected----derivation

3. Public members               public                      private                     protected
1. Private members              not inherited               not inherited               not inherited
2. Protected members            protected                   private                     protected

 */

class Derived : protected Base
{
};

int main(int argc, char const *argv[])
{
    Base b;
    Derived d;
    // cout << d.a << endl; // will not work since 'a' is protected in 'base' as well as 'derived' class..(see the table above)
    return 0;
}