#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void printnumber()
    {
        cout << " your roll number is " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << " You result is :" << endl
             << "maths: " << maths << endl
             << " physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{

protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << " your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        printnumber();
        print_marks();
        print_score();
        cout << " Your total score is " << total << endl;
    }
};

int main(int argc, char const *argv[])
{
    Result harry;
    harry.set_marks(78.3, 78.5);
    harry.set_number(4200);
    harry.set_score(9);
    harry.display();
    return 0;
}