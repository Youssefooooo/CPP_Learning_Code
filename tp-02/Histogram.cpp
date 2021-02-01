#include "Histogram.h"
#include <iostream>

Histogram::Histogram() : 
    _count  {new unsigned[26]}
    {
    for (auto i = 0; i < 26; i ++){
        _count[i] = 0;
    } 
    }

Histogram::Histogram(const Histogram& h) :
    Histogram{}
    {
    for (auto i = 0; i < 26; i ++){
        _count[i] = h._count[i];
    }
}

Histogram::~Histogram(){
    delete[] _count;
} 

Histogram& Histogram::operator=(const Histogram& other){
    if (this != &other)
    {
        _count = other._count;
    }

    return *this;
}

void Histogram::print() const{
    for (auto i = 0; i < 26; i ++){
        std::cout << 'a' + i << " :" << _count[i] << std::endl;
    }
}

void Histogram::analyze(const std::string& word){
    for(const auto c: word)
        if((c >= 'a') && (c <= 'z'))
            _count[c - 'a']++;
}

int main()
{
    Histogram h1,h2;
    Histogram h3{Histogram{h1}};
    return 0;
}
