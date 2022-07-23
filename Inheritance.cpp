#include <iostream>
using namespace std;

// base class
class Employee
{

public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
};

// Dervied class syntax

// class {{derived-class-name}}::{{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc....
// }

// NOTE:-
// 1.  default visibility mode is 'private'
// 2. 'private' visibility mode...public members of the base class becomes the private members of the derived classs---
// 2. 'public' visibility mode...public members of the base class becomes the public members of the derived classs---
// 3. 'private' members of the base class are never inherited--

// creating a programmer class derived from employee base class
class Programmer : Employee /* if over here we write (class Programmer:public Employee) then the syntax 'cout << skillf.id << endl;' would definitely work  */
{
public:
    int languagecode = 9;
    Programmer(int inpid)
    {
        id = inpid; // this 'id' that has come from the 'employee' class has gone into the 'private' section of the 'programmer' class and then initialised over here---
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main(int argc, char const *argv[])
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    Programmer skillf(28451);
    skillf.getdata();
    // cout << skillf.id << endl;  //this is wrong bcoz we are accessing the member 'id' of the base class 'employee'  into the derived class 'programmer' and the 'id' member by default gets into the 'private' section of the 'programmer class.  And as we know that the scope of any variable present in the 'private' section is just there in its own class... Hence here it wont workF-----
    return 0;
}