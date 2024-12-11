#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	std::string		_target;
	ShrubberyCreationForm();
public:
	// Constructor
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm (const ShrubberyCreationForm &origin);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &origin);
	
	// Destructor
	~ShrubberyCreationForm() {}

	// Methods
	int	execute(Bureaucrat const & executor) const;

	// Exceptions
	class CanNotOpenFile : public std::exception {
	public:
		const char* what() const throw();
	};
};

#endif