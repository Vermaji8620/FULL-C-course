// function overloading me kehne ka ye matlb hai ki agr  same name se function banaate hai to wo apne aap paramter ke hisab se pta laga leeta hai ki konsa function k andar jaana h usko according to the number of parameters defined 

#include <iostream>
using namespace std;

void sum(int a, int b)
{
    printf("%d ", a + b);
}

void sum(int a, int b, int c)
{
    printf("%d", a + b * c);
}
int main(int argc, char const *argv[])
{
    printf("the sum for the function having two parameters is\n");
    sum(54, 45);
    printf("the sum for the function having three parameters is\n");
    sum(54, 45), 100;

    return 0;
}