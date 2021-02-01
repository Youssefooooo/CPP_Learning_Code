#pragma once

#include "SecondHand.h"
#include "MinuteHand.h"
#include "Event.h"
#include <vector>

class Clock
{
private:
    SecondHand _s;
    MinuteHand _m;
    std::vector<Event> _events;
public:
    Clock();

    void tick();

    void add_event(const Event&);
};

