#include <iostream>
using namespace std;

class binary
{
    string s; // by default this is private that is it cannot be used outside the class.... but can be totally used inside the class

public:
    void read();
    void ones_compliment();
    void chk_bin();
};

void binary::read()
{
    cout << "enter a binary number" << endl;
    cin >> s;
}

void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compliment()
{
    chk_bin(); // this is called the nesting of the functions --- it can also be called here rather than caling it outside the function
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        }
        else if (s[i] == '1')
        {
            s[i] = '0';
        }
    }
    for (int j = 0; j < s.length(); j++)
    {
        cout << s[j];
    }
};
int main(int argc, char const *argv[])
{
    binary b;
    b.read();
    b.chk_bin();
    b.ones_compliment();
    return 0;
}