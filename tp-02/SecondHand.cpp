#include "SecondHand.h"

SecondHand::SecondHand(MinuteHand& m) : 
    _min_han {m}
    {}

void SecondHand::advance(){
    _seconds ++;
    if (_seconds == 60){
        _min_han.advance();
        _seconds = 0;
    }
}