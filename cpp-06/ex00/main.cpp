#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <literal>" << std::endl;
        return 1;
    }

    try {
        ScalarConverter::convert(argv[1]);
        // std::cout << "  char: " << std::endl;
        // ScalarConverter::convert("z");
        // std::cout << "  int:"  << std::endl;
        // ScalarConverter::convert("10");
        // std::cout << "  float:" << std::endl;
        // ScalarConverter::convert("42.0f");
        // std::cout << "  double:" << std::endl;
        // ScalarConverter::convert("21.0");
        // std::cout << "  -inff:" << std::endl;
        // ScalarConverter::convert("-inff");
        // std::cout << "  +inff:" << std::endl;
        // ScalarConverter::convert("+inff");
        // std::cout << "  nanf:" << std::endl;
        // ScalarConverter::convert("nanf");
        // std::cout << "  -inf:" << std::endl;
        // ScalarConverter::convert("-inf");
        // std::cout << "  +inf:" << std::endl;
        // ScalarConverter::convert("+inf");
        // std::cout << "  nan:"  << std::endl;
        // ScalarConverter::convert("nan");

    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
