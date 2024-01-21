#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>

class Vehicle
{
    int registration;
    std::string color;
    enum vehicle_type
    {
        HATCHBACK = 1,
        SEDAN,
        SUV
    };
    int v_type;

public:
    Vehicle();
    Vehicle(int, std::string, int);
    ~Vehicle();
    virtual void Display();
    virtual void Accept();

    int getRegistration() const { return registration; }
    void setRegistration(int registration_) { registration = registration_; }

    std::string getColor() const { return color; }
    void setColor(const std::string &color_) { color = color_; }

    friend std::ostream& operator<<(std::ostream& os, const Vehicle& v);
};

#endif // VEHICLE_H