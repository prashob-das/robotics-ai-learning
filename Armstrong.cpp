#include <iostream>

int main()
{
    int number, original, digit;
    int sum = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;

    original = number;

    while (number > 0)
    {
        digit = number % 10;
        sum = sum + (digit * digit * digit);
        number = number / 10;
    }

    if (original == sum)
    {
        std::cout << original << " is a Armstrong Number.\n";
    }
    else
    {
        std::cout << original << " is not a Armstrong Number.\n";
    }

    return 0;
}