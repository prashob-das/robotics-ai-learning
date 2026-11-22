#include<iostream>
#include<chrono> //required for using chrono 
#include<thread> //required for using simulate the working of the robot
using namespace std::chrono_literals; //required for using the literals like 1s, 1ms etc
int main(){
    auto motor_run_time = 2s; //time for which the motor will run
    auto sensor_interval = 100ms;
    auto boot_delay = 500ms; //time taken by the robot to boot up
    //also do math with them
    auto total_startup_time = boot_delay + 1s; //500ms + 1s = 1500ms
    //to get a plain number we use - .count() function
    std::cout<<"Motor Run Time: " << motor_run_time.count() << " seconds\n";
    std::cout<<"Sensor Interval: " << sensor_interval.count() << " ms\n";
    std::cout<<"Boot Delay: " << boot_delay.count() << " milliseconds\n";
    //comparing the durations
    if(motor_run_time > sensor_interval){
        std::cout<<"Motor run time is greater than sensor interval\n";
    }
    else{
        std::cout<<"Sensor interval is greater than motor run time\n";
    }
    return 0;
}