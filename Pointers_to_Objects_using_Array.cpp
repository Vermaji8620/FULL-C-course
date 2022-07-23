// is program me hm class ka bohot sara objects baanane ka jagah pe ek hi array bana rahe hai jiske andar sb objects ko dedehre hai. ... and fir har ek object se desired member functions ko call krne se acha, ek 'pointer' declare krke usko pinpoint krwa de array ka sabhi positions me and phir usi pointer(jo array k desired position pe present ho) se desired member funcitons ko call kre ---

#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setdata(int a, float data)
    {
        id = a;
        price = data;
    }
    void getdata()
    {
        cout << " code of this item is " << id << endl;
        cout << " price of this item is " << price << endl;
    }
};

int main(int argc, char const *argv[])
{
    int size = 2;

    // general store  item
    // veggies item
    // hardware item
    ShopItem *ptr = new ShopItem[size]; // size ka jitna store krne bhar ka memory bana do jisme ki class ka objects rahe --- and pointer ko array ka 0th position pe point krwa do
    int p, i;
    float q;
    ShopItem *ptrTemp = ptr; // ptrTemp ko v ek pointer bana diye jo ki ptr k equal hoga...yani ki array ka firstposition ko point krega---
    for (i = 0; i < size; i++)
    {
        cout << " id and price of item " << i + 1 << endl;
        cin >> p >> q;
        (*ptr).setdata(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "item number: " << i + 1 << endl;
        ptrTemp->getdata();
        ptrTemp++;
    }

    delete[] ptr;
    ptrTemp = NULL;

    return 0;
}
