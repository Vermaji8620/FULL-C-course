#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swappointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int referenceswapper(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int & allswapper(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main(int argc, char const *argv[])
{
    int x = 4;
    int y = 5;
    cout << " the value of x is " << x << " and y is " << y << endl;
    // swap(x, y); // this will not swap a and b bcoz in such a case copy of a function is created that will definitely not alter the value of the actual function
    // swappointer(&x, &y); // this will swap the values
    // referenceswapper(x, y); // c++ reference variable ---even this will swap the value
    allswapper(x, y)=4545; // c++ reference variable ---even this will swap the value and set the value of x as 4545

    cout << " the value of x is " << x << " and y is " << y << endl;

    return 0;
}