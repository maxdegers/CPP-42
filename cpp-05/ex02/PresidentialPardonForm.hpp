#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string	       _target;
	PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &origin);
	PresidentialPardonForm (const PresidentialPardonForm &origin);
public:
	PresidentialPardonForm(const std::string &name);

	~PresidentialPardonForm();

	void	execute(Bureaucrat const &executor) const ;
};

#endif