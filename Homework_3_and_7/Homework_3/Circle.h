#ifndef Circle_H
#define Circle_H

#include <iostream>

using namespace std;

class Circle
{
private:

    double r = 0;    

public:
    Circle()
    {

    }

    ~Circle()
    {

    }


    double Set_r();

    void Print_parametres();

    double Get_diameter();

    double Get_circumference_length();

    double Get_area();
};

#endif