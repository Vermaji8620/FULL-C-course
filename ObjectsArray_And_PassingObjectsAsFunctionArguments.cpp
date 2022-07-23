#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    int salary;

public:
    void setid()
    {
        salary = 122;
        cout << "enter the id of the employee";
        cin >> id;
    };
    void getid()
    {
        cout << "the id of the enployee is " << id << endl;
    };
};

int main(int argc, char const *argv[])
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setid();
    // harry.getid();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    return 0;
}