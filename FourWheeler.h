#ifndef FOURWHEELER_H
#define FOURWHEELER_H

#include "Vehicle.h"

class FourWheeler : public Vehicle
{
    std::string brand;
    enum air_conditioner
    {
        ON = 1,
        OFF
    };
    int air_con;

public:
    FourWheeler();
    FourWheeler(int, std::string, int, std::string, int);
    ~FourWheeler();

    void Display();
    void Accept();

    std::string getBrand() const { return brand; }
    void setBrand(const std::string &brand_) { brand = brand_; }

    friend std::ostream& operator<<(std::ostream& os, const FourWheeler& fw);
};

#endif // FOURWHEELER_H
