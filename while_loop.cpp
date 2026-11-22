#include<iostream>
int distance_read (int d)
{
    return (d-3);
}
int main()
{
    int distance{30};
    while (distance>20)
    {
        std:: cout<<" Distance :"<<distance<<"cm Motor is Moving Forward\n";
        distance=distance_read(distance);
    }
    std::cout<<"Obstacle detected at:"<<distance<<"cm Motor is Stopped\n";
    return 0;
}