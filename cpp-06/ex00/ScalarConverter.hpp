#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

class ScalarConverter
{
	private:

	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		ScalarConverter operator=(const ScalarConverter &src);
		~ScalarConverter();

		void	convert(std::string num);
};

#endif