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
	// Constructor
	PresidentialPardonForm(std::string const &name);
	PresidentialPardonForm (const PresidentialPardonForm &origin);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &origin);

	// Destructor
	~PresidentialPardonForm() {}

	// Methods
	int	execute(Bureaucrat const & executor) const ;
};

#endif