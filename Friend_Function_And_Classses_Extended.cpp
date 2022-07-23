#include <iostream>
using namespace std;

class c2; // yaha pe hm declare kr derhe hai ki bhai ye c2 naam ka jo function ha na ye niche hai---ye isiliye krna pada kyunki 'friend void exchange(c1 &, c2 &);' me c2 ko paass krrhe hai...to jb compiler code ko execute krte krte, 'friend wala c2' me pahuchega to waha pe puchega ki ye c2 kon hai tb yaaha pe surity dena hoga ki ---' ha niche me kahi pe jake c2 pakka initialise kiya hua hai-----

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &); // yaha pe hm bata rhe hai ki 'exchange' jo hai mera wo ek function hai jo ki c1 ka 'friend' hai....'friend' hai kehne ka matlb hai ki usko hm patameters pass kr skte hai---aur parameeter me hm 'class' k related kch v pass kr de skte hai---yahha pe class ka address pass kiya gaya hai---

public:
    void indtaa(int a)
    {
        val1 = a;
    }
    void display()
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indtaa(int a)
    {
        val2 = a;
    }
    void display()
    {
        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y) // yaha pe aake wo parameter ko receive krna hota hai jo ki pass kiya gaya ho.... aur isi k hi andar hm 'class' ya fir koi 'class k related' (jo ki poass hua hai ), uska object baanate hai--- yaha pe 'x' and 'y' object hai---
{
    int temp = x.val1; // aur banaaya hua object se hm class ka function ka variables and other things access kr skta hai---
    x.val1 = y.val2;
    y.val2 = temp;
}

main(int argc, char const *argv[])
{
    c1 oc1; // creating 'oc1' which is the object of the class 'c1'
    c2 oc2; // creating 'oc2' which is the object of the class 'c2'

    oc1.indtaa(34);
    oc2.indtaa(67);
    exchange(oc1, oc2); // in the funciton that is declared outside , we need to pass the 'objects of the classes' as parameters--- kyunki upar me ('exchange' ka andar me)wo ek tarah ka class ka object('x' and 'y') hi hai bana diya gaya hai ----
    cout << "the value after exchanging becomes:";
    oc1.display();
    cout << "the value after exchanging becomes:";
    oc2.display();
    return 0;
}