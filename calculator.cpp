#include<iostream>
int main ()
{
    char op;
    double num1;
    double num2;
    double result;
    std::cout<<"******CALCULATOR******\n";
    std::cout<<"Enter the operation you want to perform (+, -, *, /): ";
    std::cin >> op;
    std::cout<<"Enter the first number: ";
    std::cin >> num1;
    std::cout<<"Enter the second number: ";
    std::cin >> num2;
    switch(op)
    {
        case'+':
        result= num1+num2;
        std::cout<<"The result is: "<<result<<"\n";
        break;
        case'-':
        result= num1-num2;
        std::cout<<"The result is: "<<result<<"\n";
        break;
        case'*':
        result= num1*num2;
        std::cout<<"The result is: "<<result<<"\n";
        break;
        case'/':
        result= num1/num2;
        std::cout<<"The result is: "<<result<<"\n";
        break;
        default:
        std::cout<<"Invalid operation\n";
    }

    std::cout<<"**********************\n";
    return 0;
}