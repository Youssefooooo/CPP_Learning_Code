#include "Person.h"

Person::Person(const std::string& surname, const std::string& name)
    : _name { name }, _surname { surname },
      _number {PhoneNumber {-1,-1,-1,-1,-1}}
{}

Person::Person(const std::string& surname, const std::string& name, const PhoneNumber& number)
:  _name { name }, _surname { surname },
      _number {number}
{}

   
void Person::set_phone_number(const PhoneNumber& number){
    _number = number; 
}

    bool Person::operator<(const Person& other) const{
         if (_name < other._name)
        {
            return true;
        }
        else if (_name > other._name)
        {
            return false;
        }
        else
        {
            return _surname < other._surname;
        }
    }