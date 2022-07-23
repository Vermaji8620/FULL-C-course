#include <iostream>
using namespace std;

class esehi
{
    string name[10];
    int roll[10];
    static int counter;

public:
    void input()
    {
        cout << "enter the name" << endl;
        cin >> name[counter];
        cout << "enter the roll of the student" << endl;
        cin >> roll[counter];
        cout << "the counter at present is " << counter << endl;
    };
    void output()
    {
        cout << "the name of esehi is " << name[counter] << " and the rolll of the esehi is " << roll[counter] << endl;
        counter++;
        cout << "the counter now is " << counter << endl;
    };
};

int esehi::counter;

int main(int argc, char const *argv[])
{
    esehi dodo, fofo, gogo;
    dodo.input();
    dodo.output();

    fofo.input();
    fofo.output();

    gogo.input();
    gogo.output();
    return 0;
}