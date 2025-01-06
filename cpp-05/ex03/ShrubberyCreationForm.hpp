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
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &origin);

public:
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm (const ShrubberyCreationForm &origin);
	
	~ShrubberyCreationForm();

	void	execute(Bureaucrat const & executor) const;

	class CanNotOpenFile : public std::exception {
	public:
		const char* what() const throw();
	};
};

#endif