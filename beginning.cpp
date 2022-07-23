#include <iostream>
int sum()
{
    int gh = 2323;
    std::cout << "value of a is" << gh; // << ka matlb hai insertion operator
    return 0;
}
int main(int argc, char const *argv[])
{
    int a = 34, b = 43;
    std::cout << "Hello world";
    printf("\n");
    sum();
    printf("\n");
    std::cout << "the sum of " << a << " and " << b << " is " << a + b;
    return 0;
}
