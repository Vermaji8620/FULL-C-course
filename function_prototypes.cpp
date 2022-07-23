#include <iostream>
using namespace std;

// niche me function initialise krne k pehle isiliye declare kiya hua hai kyunki function ka naam pehle aa ja rha hai 'main' k andar aur jb aisa ho rha hai  --tb wo khoj nai pa rha hai ki function yaha pe likha hua to hai lekin ye function initialise nai kiya hua hai--to isiliye ye surity dene k liye hm function ko pehle hi declare kr derhe hai---

int sum(int, int); // using of formal parameters
int main(int argc, char const *argv[])
{
    sum(5, 2);
    return 0;
}
int sum(int a, int b)
{
    cout << a + b << endl;
    return 0;
}