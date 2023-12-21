#pragma once

const double PI =3.141592653589793;

class Circle
{
    private:
    //private variables
    double radius;

    public:
    //Constructor
    Circle(double m_radius) : radius(m_radius) {}

    //Member functions
    double Area(double radius);


};