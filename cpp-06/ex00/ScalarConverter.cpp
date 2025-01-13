#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter &src)
{
	(void)src;
}

ScalarConverter ScalarConverter::operator=(const ScalarConverter &src)
{
	(void)src;
	return(*this);
}

ScalarConverter::~ScalarConverter(){}

int     isSpecCase(const std::string &literal)
{
	if(literal == "nan" || literal == "+inf" || literal == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << "f" << std::endl;
		std::cout << "double: " << literal << std::endl;
		return 1;
	}
	if(literal == "+inff" || literal == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << literal.substr(0, 4)<< std::endl;
		return 1;
	}
	if(literal == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << literal.substr(0, 3)<< std::endl;
		return 1;
	}
	return 0;
}

void	printType(char	c, int i, float f, double d)
{
	if (i > 127 || i < 0)
		std::cout << "char	: impossible" << std::endl;
	else if (i < 9 || (i > 11 && i < 32) || i == 127)
		std::cout << "char	: Non displayable" << std::endl;
	else
		std::cout << "char	: '" << c << "'" << std::endl;
	if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min())
		std::cout << "int	: impossible" << std::endl;
	else
		std::cout << "int	: " << i << std::endl;
	if (f < 1000000 && f > -1000000 && i - d == 0) {
		std::cout << "float	: " << f << ".0f" << std::endl;
		std::cout << "double	: " << d << ".0" << std::endl;
	}
	else {
		std::cout << "float	: " << f << "f" << std::endl;
		std::cout << "double	: " << d << std::endl;
	}
}

int     isChar(const std::string &literal)
{
	if (literal.length() != 1)
		return (false);
	else
	{
		printType(literal[0],static_cast<int>(literal[0]),static_cast<float>(literal[0]),static_cast<double>(literal[0]));
		return (true);
	}
}

int     isInt(const std::string &literal)
{
	std::stringstream ss(literal);
	int i;
	ss >> i;
	if (!ss.eof() || ss.fail())
		return (false);
	else
	{
		printType(static_cast<char>(i),i,static_cast<float>(i),static_cast<double>(i));
		return (true);
	}
}

int     isFloat(const std::string &literal)
{
	std::stringstream ss(literal);
	float f;
	ss >> f;
	if (ss.eof() || ss.fail() || literal[literal.length() - 1] != 'f')
		return (false);
	else
	{
		printType(static_cast<char>(f),static_cast<int>(f),f,static_cast<double>(f));
		return (true);
	}
}

int     isDouble(const std::string &literal)
{
	std::stringstream ss(literal);
	double d;
	ss >> d;
	if (!ss.eof() || ss.fail())
		return (false);
	else
	{
		printType(static_cast<char>(d),static_cast<int>(d),static_cast<float>(d),d);
		return (true);
	}
}

void    putAllImpossible()
{
	std::cout << "char	: impossible" << std::endl;
	std::cout << "int	: impossible" << std::endl;
	std::cout << "float	: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void ScalarConverter::convert(const std::string &literal)
{
		if (isSpecCase(literal))
			return (void)0;
		if (isChar(literal))
			return (void)0;
		if (isInt(literal))
			return (void)0;
		if (isFloat(literal))
			return (void)0;
		if (isDouble(literal))
			return (void)0;
		putAllImpossible();
}
