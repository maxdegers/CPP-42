#include "Bureaucrat.hpp"



Bureaucrat::Bureaucrat() : _name("Default-Bureaucrat"), _grade(150){}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	checkGrade(grade);
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name)
{
	_grade = src._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
	{
		_grade = src.getGrade();
	}
	return (*this);

}

Bureaucrat::~Bureaucrat(){}

std::string 	Bureaucrat::getName() const {return _name;}
int 			Bureaucrat::getGrade() const {return _grade;}

void			Bureaucrat::decrementGrade()
{
	int  tmp = this->getGrade();

	tmp ++;
	checkGrade(tmp);
	this->_grade = tmp;
}

void	Bureaucrat::incrementGrade()
{
	int  tmp = this->getGrade();

	tmp --;
	checkGrade(tmp);
	this->_grade = tmp;
}

void	Bureaucrat::checkGrade(int grade) const
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::signForm(AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " couldn't sign " << form.getName() << " because " << &e << "." << std::endl;
	}
	
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << "." << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << _name << " couldn't executed " << form.getName() << " because " << e.what() << "." << std::endl;
	}
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &c)
{
	out << c.getName() << ", bureaucrat grade is " << c.getGrade() << "." << std::endl;
	return out;
}