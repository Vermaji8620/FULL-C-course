#include <iostream>
int main(int argc, char const *argv[])
{
    std::cout << "enter the value of a ";
    int num1, num2;
    printf("\n");
    std::cin >> num1; // is the extraction operator
    std::cout << "the entered value by the user is " << num1;
    std::cout << "enter the value of second number\n";
    std::cin >> num2;
    std::cout << "the value of the second number entered is" << num2;
    printf("\n");
    std::cout << "the sum of " << num1 << " and " << num2 << " is " << num1 + num2;
    return 0;
}
