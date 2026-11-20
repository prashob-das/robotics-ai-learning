#include <iostream>
int main()
{
    char grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;
switch(grade)
{
    case 'A':
    case 'a':
        std::cout << "Excellent\n";
        break;

    case 'B':
    case 'b':
        std::cout << "Good\n";
        break;

    case 'C':
    case 'c':
        std::cout << "Fair\n";
        break;

    case 'D':
    case 'd':
        std::cout << "Poor\n";
        break;

    case 'F':
    case 'f':
        std::cout << "Fail\n";
        break;

    default:
        std::cout << "Invalid grade\n";
}
}