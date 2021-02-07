#pragma once

#include <array>
#include <ostream>

class PhoneNumber
{
friend std::ostream& operator<<(std::ostream& stream, const PhoneNumber& number);

public:
    PhoneNumber(int n1, int n2, int n3, int n4, int n5);

    bool is_valid() const {
        for (auto i: _number){
            if (i < 0 || i > 99) return false;
        }
        return true;
    } 
private:
    std::array<int, 5> _number;
};


