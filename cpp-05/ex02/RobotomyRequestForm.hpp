#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	std::string	    _target;
	RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &origin);
	RobotomyRequestForm (const RobotomyRequestForm &origin);

public:
	RobotomyRequestForm(const std::string &name);
	
	~RobotomyRequestForm();

	void	execute(Bureaucrat const &executor) const ;
};

#endif