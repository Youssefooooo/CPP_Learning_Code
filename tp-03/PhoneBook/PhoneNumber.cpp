#include "PhoneNumber.h"

PhoneNumber::PhoneNumber(int n1, int n2, int n3, int n4, int n5)
: _number {n1, n2, n3, n4, n5}
{}

std::ostream& operator<<(std::ostream& stream, const PhoneNumber& number){
    int i = 0;
    for (auto n: number._number){
        if (i != 0)
           stream << ' ';
        if (n < 10)
            stream << '0' << n;
        else 
            stream << n;
        i++;
    }
    return stream;
}
