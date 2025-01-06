#include "RobotomyRequestForm.hpp"
#include <cmath>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45) , _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &origin) : AForm(origin), _target(origin._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &origin)
{
	if (this != &origin)
	{
		this->AForm::operator=(origin);
		_target = origin._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	checkExecution(executor);
	std::cout << "DrrrrDrrrrrDRRRRRRRR....." << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << _target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "The robotomy failed." << std::endl;
}
