#pragma once

#include "Driver.h"
#include <iostream>

class Vehicle
{
public:
    virtual ~Vehicle() {}

    virtual unsigned int drive() const
    {
        std::cerr << "Not implemented" << std::endl;
        return 0u;
    }

protected:
    Vehicle(const Driver& driver)
        : _driver { driver }
    {}


    const Driver& _driver;
};
