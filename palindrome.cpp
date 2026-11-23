#include <iostream>

int main()
{
    int number, original, digit;
    int reverse = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;

    original = number;

    while (number > 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    if (original == reverse)
    {
        std::cout << original << " is a Palindrome Number.\n";
    }
    else
    {
        std::cout << original << " is not a Palindrome Number.\n";
    }

    return 0;
}