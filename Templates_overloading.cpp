// sidha sidha ye matlb hai ki agr do function likha hua hai---ek me template class laga hua hai.. aur dusre me normal class define hai,,,,,to jb 'main' k andar me 'data type' likhayega , tb wo wala function run hoga jisme ki pass kiya hua value ka data-type by default dikhai de rha hai, matlb ki non-template wale function ko top proiority milega---

#include <iostream>
using namespace std;

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Harry<T>::display()
{
    cout << data << endl;
}
//
//
//
//
//
void func(int a)
{
    cout << " I am first func()" << a << endl;
};

template <class T>
void func(T a)
{
    cout << " I am first func()" << a << endl;
};

int main()
{ /*
     Harry<int> h('f');
     // Harry<float> h(5);
     cout << h.data << endl;
     h.display();  */

    func<char>(98); // exact match takes the highest priority
    return 0;
}