#pragma once

#include <string>
#include "PhoneNumber.h"

class Person
{
public:
    Person(const std::string& name, const std::string& surname);
    Person(const std::string& name, const std::string& surname, const PhoneNumber& number);

    std::string get_full_name() const{
        return _surname + " " + _name;
    }

    std::string get_name() const{
        return _name;
    }

    const PhoneNumber& get_phone_number() const{
        return _number;
    }

    void set_phone_number(const PhoneNumber& number);

    bool operator<(const Person& other) const;
private:
   std::string _name;
   std::string _surname;
   PhoneNumber _number;
};
