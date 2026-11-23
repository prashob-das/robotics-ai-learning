 #include <iostream>

int main()
{
    int number, count = 0;

    std::cout << "Enter a number: ";
    std::cin >> number;

    do
    {
        number = number / 10;
        count++;
    }
    while (number > 0);

    std::cout << "Number of digits: " << count << "\n";

    return 0;
}