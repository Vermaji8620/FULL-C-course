#include <iostream>
using namespace std;

class shop
{
    int counter;
    int itemid[100];
    int itemprice[100];

public:
    void initcounter()
    {
        counter = 1;
    };
    void displayprice();
    void setprice();
};

void shop ::setprice()
{
    cout << "enter the id of your item number" << counter << endl;
    cin >> itemid[counter];
    cout << "enter the price of your item number" << counter << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop ::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    shop dukkan;
    dukkan.initcounter();
    dukkan.setprice();
    dukkan.setprice();
    dukkan.setprice();
    dukkan.setprice();
    dukkan.displayprice();
    return 0;
}