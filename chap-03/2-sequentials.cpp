#include <list>
#include <array>
#include<string>
#include<vector>
#include<stack>

enum Fruit
{
    Abricot,
    Cherry,
    Mango,
    Raspberry,

    Fruit_Count,
};

void try_arrays()
{
    std::array<std::string, Fruit_Count> fruit_names;
    fruit_names[Abricot] = "abricot";
    fruit_names[Cherry] = "cherry";
    fruit_names[Mango] = "mango";
    fruit_names[Raspberry] = "raspberry";
}

void try_lists()
{
    std::list<int> l1 { -2, -3, 7, 200, -8, 6 };
    std::list<int> l2(3, -45);

    std::list<int> l3;
    l3.assign({ 41, 6, 12 });

    std::list<int> l4;
    l4.emplace_front(0);
    l4.emplace_front(4);
    l4.emplace_front(6);

    l1.sort();
    l2.sort();
    l1.merge(l2);

    l3.splice(l3.begin(), l4);
    l3.sort();
}

void try_stacks()
{
    std::stack<int, std::vector<int>> s1;
    s1.emplace(0);
    s1.emplace(1);
    s1.emplace(2);
    for (auto v: s1){
        
    }
}

int main()
{
    try_arrays();
    try_lists();
    try_stacks();

    return 0;
}