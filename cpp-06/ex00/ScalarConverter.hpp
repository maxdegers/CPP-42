#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits>
#include <cmath>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		ScalarConverter operator=(const ScalarConverter &src);
		~ScalarConverter();

		static void	convert(const std::string &literal);
};

#endif