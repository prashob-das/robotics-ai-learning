#include <iostream>

int main()
{
    int number;
    int digit;
    int sum = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;

    while (number > 0)
    {
        digit = number % 10; // Get last digit
        sum = sum + digit;   // Add digit to sum
        number = number / 10; // Remove last digit
    }

    std::cout << "Sum of digits: " << sum << "\n";

    return 0;
}