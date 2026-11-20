#include<iostream>
int main()
{
int robot_max_distance =100;
double robot_distance;
std::cout << "Where is your robot now ? \n";
std::cin>>robot_distance;
std::cout<<(robot_distance>robot_max_distance?"Your robot is out of range ":"Your Robot is  in range");
    return 0;
}   