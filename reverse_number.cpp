#include <iostream>

int main()
{
    int number;
    int digit = 0;
    int reverse = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;

    while (number > 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    std::cout << "Reversed number: " << reverse << "\n";

    return 0;
}