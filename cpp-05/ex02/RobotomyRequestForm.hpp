#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string	    _target;
	RobotomyRequestForm();
public:
	// Constructor
	RobotomyRequestForm(std::string const &name);
	RobotomyRequestForm (const RobotomyRequestForm &origin);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &origin);
	
	// Destructor
	~RobotomyRequestForm() {}

	// Methods
	int	execute(Bureaucrat const & executor) const ;
};

#endif