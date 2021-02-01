#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
#include<array>

int main()
{
    /*
    std::vector<int> v { 0, 1, 2,3,4 };
 
    v.assign({0, 2, 32, -4, 3});
    v.clear();
    for (auto l: v){
        std::cout << l << std::endl;
    }
    */
    std::array<char, 3> v {'a', 'b', 'c'};
    for (auto l: v){
        std::cout << l << std::endl;
    }
    return 0;
}