#pragma once

#include "MinuteHand.h"

class SecondHand
{
private:
    int _seconds = 0;
    MinuteHand& _min_han;
public:
    SecondHand(MinuteHand& m);

    int get_seconds() const {
        return _seconds; 
    }

    void advance();
};

