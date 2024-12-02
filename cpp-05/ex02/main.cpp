#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try {
		std::cout << "---SHRUBBERY---" << std::endl;
		Bureaucrat first("Toto", 130);
		ShrubberyCreationForm shrub("Barry");
		std::cout << shrub << std::endl;
		std::cout << first << std::endl;
		first.signForm(shrub);
		shrub.execute(first);
		std::cout << "---ROBOTOMY---" << std::endl;
		const Bureaucrat sec("Momo", 20);
		RobotomyRequestForm roboto("Thom");
		std::cout << roboto << std::endl;
		std::cout << sec << std::endl;
		roboto.beSigned(sec);
		roboto.execute(sec);
		std::cout << "---PRESIDENTIAL---" << std::endl;
		const Bureaucrat third("Benji", 4);
		PresidentialPardonForm presi("Max");
		std::cout << presi << std::endl;
		std::cout << third << std::endl;
		presi.beSigned(third);
		presi.execute(third);
	}
	catch (std::exception &e)
	{
		std::cerr << "Exeption : " << e.what() << std::endl;
	}
}