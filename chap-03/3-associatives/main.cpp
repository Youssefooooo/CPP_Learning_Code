#include <set>
#include <iostream>
#include <unordered_set>
#include "keys.h"
int main()
{
    std::unordered_set<HashableDog> dogs;
    HashableDog d {"medor", "rott"};
    dogs.emplace(d);
    HashableDog gus { "gus", "bordercollie" };
    dogs.emplace(gus);
    HashableDog medor_clone = d;
    dogs.emplace(medor_clone);
    std::cout << dogs.size() << std::endl;
    return 0;
}