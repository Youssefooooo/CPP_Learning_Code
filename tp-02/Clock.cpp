#include "Clock.h"

Clock::Clock() : 
    _s {SecondHand {_m}}
    {}

void Clock::tick(){
    _s.advance();
    for (auto e : _events){
        e.notify_time(_m.get_minutes(), _s.get_seconds());
    }
}

void Clock::add_event(const Event& e){
    _events.emplace_back(e);
}