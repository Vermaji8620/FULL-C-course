#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number();
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}

void Student::get_roll_number()
{
    cout << " the roll number is " << roll_number << endl;
}
//
//
//
//
//
//
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam::get_marks()
{
    cout << "the marks obtained in maths are:" << maths << endl;
    cout << "the marks obtained in physics are:" << physics << endl;
}
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
class Result : public Exam
{
    float percentage;

public:
    void displayResult()
    {
        get_roll_number();
        get_marks();
        cout << " your percentage is " << (maths + physics) / 2 << endl;
    }
};

int main(int argc, char const *argv[])
{
    /*
    Notes:-
        1.  if we are inheriting B from A and C from B (A----->B------->C)
        2.  A is the base class for B and B is the  base class of C
        3.  A---->B-------->C is called inheritance path


    */

    Result harry;
    harry.set_roll_number(420);
    harry.set_marks(99.9, 100);
    harry.get_roll_number();
    harry.get_marks();
    harry.displayResult();
    return 0;
}