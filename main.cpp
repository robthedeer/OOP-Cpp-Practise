#include<iostream>
#include"circle.hpp"
#include"circle.cpp"

using namespace std;

int main()
{
    //Circle object
    double radius;
    cout<<"Enter radius:";
    cin>>radius;

    Circle circle(radius);

    double area =circle.Area(radius);

    cout<<"Area: "<<area<<endl;



    return 0;
}