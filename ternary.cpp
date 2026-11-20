#include<iostream>
int main()
{
    int grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;
    
   std::cout<<(grade>=50?"You have passed the exam":"You have failed the exam ");

    return 0;
}