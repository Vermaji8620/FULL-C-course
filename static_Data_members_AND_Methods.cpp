// isme agar hm count k use krte hai to iska matlb ki hm employee class k andar jitna items hai----harry, lovish, rohan ----ye teeno ka count deta hai hmko---isilye hm static variable ka use krte hai---- jo ki by default 0 se initialise ho jata hai

// static variables ko ek baar funciton ka andar aur ek baar function ke bahar initialise krna ppadta hai----

#include <iostream>
using namespace std;

class Employee
{
private:
    static int count;
    int id;

public:
    void setdata()
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    };
    void getdata()
    {
        cout << "the id of the employee is " << id << "and this is employee number " << count << endl;
    };
    static void getcount()
    {
        // cout<<id ; // throws an error bcoz ye static function jo ki sirf static members ko hi access deta hai--- jaise ki niche wala line me count ko hm use kr pa rhe hai ...bcoz 'count' ek static variable hai---
        cout << "the value of count is" << count << endl;
    }
};

int Employee::count; // defaullt value is 0

main(int argc, char const *argv[])
{
    Employee harry, rohan, lovish;
    // count is the static data member of the employee class
    harry.setdata();
    harry.getdata();
    Employee::getcount();

    rohan.setdata();
    rohan.getdata();
    Employee::getcount();

    lovish.setdata();
    lovish.getdata();
    Employee::getcount();

    return 0;
}