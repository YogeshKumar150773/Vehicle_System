#include "Vehicle.h"

Vehicle::Vehicle()
{
    int registration = 0;
    std::string color = "N/A";
    int v_type = 1;
}

Vehicle::Vehicle(int regn, std::string _col, int vtype) : registration(regn), color(_col), v_type(vtype)
{
}

Vehicle::~Vehicle()
{
    std::cout << "Vehicle Destructor Called" << std::endl;
}

void Vehicle::Display()
{
    std::cout << "Registration Number : " << registration << std::endl;
    std::cout << "Vehicle Colour      : " << color << std::endl;
    if (v_type == HATCHBACK)
    {
        std::cout << "Vehicle Type : Hatchback" << std::endl;
    }
    else if (v_type == SEDAN)
    {
        std::cout << "Vehicle Type : Sedan" << std::endl;
    }
    else
    {
        std::cout << "Vehicle Type : SUV" << std::endl;
    }
}

void Vehicle::Accept()
{
    std::cout << "Enter the Registration Number : ";
    std::cin >> registration;
    std::cout << "Enter the colour of vehicle   : ";
    std::cin >> color;
x:
    std::cout << "Enter the type of Vehicle     : " << std::endl;
    std::cout << "Press 1 for Hatchback           " << std::endl;
    std::cout << "Press 2 for Sedan               " << std::endl;
    std::cout << "Press 3 for SUV                 " << std::endl;
    std::cin >> v_type;
    if (v_type < 1 || v_type > 3)
    {
        std::cout << "Please enter a valid input ! " << std::endl;
        goto x;
    }
}

std::ostream& operator<<(std::ostream& os, const Vehicle& v)
{
    os << "Registration Number : " << v.registration << std::endl;
    os << "Vehicle Colour      : " << v.color << std::endl;
    if (v.v_type == v.HATCHBACK)
    {
        std::cout << "Vehicle Type : Hatchback" << std::endl;
    }
    else if (v.v_type == v.SEDAN)
    {
        std::cout << "Vehicle Type : Sedan" << std::endl;
    }
    else
    {
        std::cout << "Vehicle Type : SUV" << std::endl;
    }
    return os;
}