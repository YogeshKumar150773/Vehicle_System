#include "FourWheeler.h"

FourWheeler::FourWheeler()
{
    brand = "N/A";
    air_con = 1;
}

FourWheeler::FourWheeler(int regn, std::string _col, int vtype, std::string fw_brand, int fw_air_con) : Vehicle(regn, _col, vtype), brand(fw_brand), air_con(fw_air_con)
{
}

FourWheeler::~FourWheeler()
{
    std::cout << "Four Wheeler Destructor Called" << std::endl;
}

void FourWheeler::Display()
{
    Vehicle::Display();
    std::cout << "Brand of Vehicle is : " << brand << std::endl;
    std::cout << "Air Conditioner is  : ";
    if (air_con == 1)
    {
        std::cout << "ON" << std::endl;
    }
    else
    {
        std::cout << "OFF" << std::endl;
    }
}

void FourWheeler::Accept()
{
    Vehicle::Accept();
    std::cout << "Enter the Brand you wish to Purchase : ";
    std::cin >> brand;
x:
    std::cout << "Enter the Condition of AC you want in your Four Wheeler : ";
    std::cout << "Press 1 for ON" << std::endl;
    std::cout << "Press 2 for OFF" << std::endl;
    std::cin >> air_con;
    if (air_con < 1 || air_con > 2)
    {
        std::cout << "Please Enter a valid Input" << std::endl;
        goto x;
    }
}

std::ostream &operator<<(std::ostream &os, const FourWheeler &fw)
{
    os << static_cast<Vehicle>(fw) << std::endl;
    os << "Brand of Vehicle is : " << fw.brand << std::endl;
    os << "Air Conditioner is  : ";
    if (fw.air_con == 1)
    {
        os << "ON" << std::endl;
    }
    else
    {
        os << "OFF" << std::endl;
    }
    return os;
}
