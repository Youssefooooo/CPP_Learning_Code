#include <iostream>
#include <cstdlib>
#include <vector>

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        std::cerr << "Error with argument" << std::endl;
        return -1;
    }

    int length = std::atoi(argv[1]);
    if (length <= 0)
    {
        std::cerr << "Expected strictly positive value for array size." << std::endl;
        return -1;
    }


    std::vector<int> array;

    for (int i = 0; i < length; i++)
    {
        array.emplace_back(i + 1);
    }
    

    for (int value : array)
    {
        std::cout << value << std::endl;
    }

    return 0;
}
