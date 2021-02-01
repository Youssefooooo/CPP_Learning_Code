#include <iostream>
#include <string>
#include <tuple>

std::tuple<bool, int, int> parse_params(int argc, const char* const* argv)
{
    const std::tuple<bool, int, int> error { false, 0, 0 };
    if (argc != 3)
    {
        std::cerr << "Program expects 2 parameters!" << std::endl;
        return error;
    }

    std::string num_str = argv[1];
    std::string den_str = argv[2];
    
    int numerator, denominator;
    try
    {
        numerator = std::stoi(num_str);
        denominator = std::stoi(den_str);
    }
    catch (const std::exception&)
    {
        std::cerr << "Program expects 2 integer parameters!" << std::endl;
        return error;
    }
    
    if (denominator == 0)
    {
        std::cerr << "Denominator cannot be null!" << std::endl;
        return error;
    }

    return {true, numerator, denominator};
}

std::tuple<int, int> divide(int numerator, int denominator)
{
    return {numerator % denominator, numerator / denominator};
}


int main(int argc, char** argv)
{
    auto tuple = parse_params(argc, argv);
    if (!std::get<0>(tuple))
    {
        return 1;
    }

    const auto num = std::get<1>(tuple);
    const auto den = std::get<2>(tuple);
    const auto div = divide(num, den);

    std::cout << num << " = " << den << " * " << std::get<1>(div) << " + " << std::get<0>(div) << std::endl;   

    return 0;
}