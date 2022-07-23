#include <iostream>
using namespace std;

class binary
{
private:
public:
    string str;
    int to_check;
    void takinginput()
    {
        cout << "enter the binary number" << endl;
        cin >> str;
    };

    void checking()
    {
        for (int i = 0; i < str.length(); i++)
        {
            if ((str[i] == '0') || (str[i] == '1'))
            {
                to_check = 0;
            }
            else
            {
                cout << "this is an invalid binary number" << endl;
                to_check = 1;
                break;
            }
        }
        if (to_check == 0)
        {
            displayingoutput();
        }
    }

    void displayingoutput()
    {
        cout << "the binary number input is ";
        for (int i = 0; i < str.length(); i++)
        {
            cout << str[i];
        }
        printf("\n");
        complementoutput();
    };
    void complementoutput()
    {
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '0')
            {
                str[i] = '1';
            }
            else
            {
                str[i] = '0';
            }
        }
        cout << "the complement output is " << str << endl;
    }
};

int main(int argc, char const *argv[])
{
    binary bin;
    bin.takinginput();
    bin.checking();
    return 0;
}