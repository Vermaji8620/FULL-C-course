#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displaypoint()
    {
        cout << " the point is " << x << ", " << y << endl;
    }
};

// create a function that takes 2 points and computes the distance between the two points---( make it a friend function)

main(int argc, char const *argv[])
{
    Point p(1, 1);
    Point q(4, 6);
    p.displaypoint();
    q.displaypoint();
    return 0;
}