#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(){}

Intern Intern::operator=(const Intern &src)
{
    (void)src;
	return *this;
}

Intern::Intern(const Intern &src)
{
    (void)src;
}

Intern::~Intern(){}

static int hashLevel(std::string level) {
	unsigned int hash = 0;
	for (unsigned int i = 0; level[i]; i++){
		hash = hash * 43 + level[i];
	}
	return (hash);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	switch (hashLevel(name))
	{
		case 1231330906: //presidential pardon
        {
			std::cout << "Intern creates " << name << std::endl;
			return (new PresidentialPardonForm(target));
		}
		case 471008488: //robotomy request
        {
			std::cout << "Intern creates " << name << std::endl;
			return (new RobotomyRequestForm(target));
		}
		case 1032646283: //shrubbery creation
        {
			std::cout << "Intern creates " << name << std::endl;
			return (new ShrubberyCreationForm(target));
		}
		default:
			throw NotAForm();
	}
}

const char *Intern::NotAForm::what() const throw()
{
	return ("The form name passed as parameter doesn't exist.");
}