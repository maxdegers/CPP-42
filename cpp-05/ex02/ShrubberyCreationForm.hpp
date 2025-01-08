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
	ShrubberyCreationForm (const ShrubberyCreationForm &origin);

public:
	ShrubberyCreationForm(const std::string &target);
	
	~ShrubberyCreationForm();

	void	execute(const Bureaucrat &executor) const;

	class CanNotOpenFile : public std::exception {
	public:
		const char* what() const throw();
	};
};

#endif