#include<iostream>
int main(){
    int battery_level;
    std::cout<<"Enter the battery percentage of the robot: ";
    std::cin>>battery_level;
    std::clog<<"[LOG] battery value recieved:"<<battery_level<<"%.\n";
    if(battery_level<0||battery_level>100){
        std::cerr<<"[ERROR] battery value is invalid.\n";
        return 1;
    }
    std::cout<<"Robot percentage is: "<<battery_level<<"%.\n";
    if(battery_level<20){
        std::cout<<"[WARNING] battery level is low.\n";
    }
    else
    {
        std::cout<<"Robot is ready to operate.\n";
    }
    return 0;
}