#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string	       _target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string const &name);
	PresidentialPardonForm (const PresidentialPardonForm &origin);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &origin);

	~PresidentialPardonForm();

	void	execute(Bureaucrat const & executor) const ;
};

#endif