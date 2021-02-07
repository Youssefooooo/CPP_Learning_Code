#include "PhoneBook.h"

bool PhoneBook::empty(){
    return _book.empty();
}

void PhoneBook::insert(const Person& p){
    auto it = _book.find(p);
    if (it != _book.end())
        _book.erase(it);
    _book.insert(p);
}

const Person& PhoneBook::operator[](int index){
    auto it = _book.begin();
    std::advance(it, index);
    return *(it);
}

const Person* PhoneBook::first_of_family(std::string name){
    auto it = _book.begin();
    while (it != _book.end() && (*it).get_name() <= name){
        if ((*it).get_name() == name)
            return &(*it);
        std::advance(it, 1);
    }
    return nullptr;
}

std::set<Person>::iterator PhoneBook::begin() {
    return _book.begin();
}

std::set<Person>::iterator PhoneBook::end() {
    return _book.end();
}



std::ostream& operator<<(std::ostream& stream, const PhoneBook& book){
    for (auto p : book._book){
        if (p.get_phone_number().is_valid())
            stream << p.get_full_name() 
                    << " - "
                    << p.get_phone_number() 
                    << std::endl;
    }
    return stream;
}