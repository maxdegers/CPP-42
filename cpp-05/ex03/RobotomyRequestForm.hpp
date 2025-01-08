#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string	    _target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &origin);
	RobotomyRequestForm(std::string const &name);
	RobotomyRequestForm (const RobotomyRequestForm &origin);
	
	~RobotomyRequestForm();

	void	execute(Bureaucrat const & executor) const ;
};

#endif