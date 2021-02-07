#pragma once

#include "Person.h"
#include <set>
#include <ostream>
#include <string>

class PhoneBook
{
friend std::ostream& operator<<(std::ostream& stream, const PhoneBook& book);

public:
    bool empty();

    void insert(const Person& p);

    const Person& operator[](int index);

    const Person* first_of_family(std::string name);

    std::set<Person>::iterator begin();

    std::set<Person>::iterator end();
private:
    std::set<Person> _book;
};



