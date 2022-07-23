#include <iostream>
using namespace std;

int main()
{
    float d = 73.374f; //  by default double smajh leta hai---- to hmko specifically bolne k  liye 'f' lagana padta hai ki ha wo floating type ka number hai----

    // niche waala syntax 'long' k liye hai---
    long double e = 43.435l; // 'L' ya fir 'l' , and 'f' ya fir 'F' use kr skte hai

    double sd = 424.46;

    cout << "the value of float is " << d << " and the size of float is " << sizeof(d) << " the value of long is " << e << "and the size of long is " << sizeof(e) << "the value of double is " << sd << "the size of double is " << sizeof(sd);

    return 0;
}