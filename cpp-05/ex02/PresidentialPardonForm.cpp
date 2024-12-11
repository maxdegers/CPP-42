#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default") {
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5) , _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &origin) : AForm(origin), _target(origin._target) {
	std::cout << "Copy constructor operator called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &origin) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &origin) {
		this->AForm::operator=(origin);
		_target = origin._target;
	}
	return (*this);
}

int PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	is_grade_exe(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return (0);
}