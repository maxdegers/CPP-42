#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : _name("Default"), _grade(150){}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	checkGrade(grade);
	this->_grade = grade;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &src)
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

void			Bureaucrat::incrementGrade()
{
	int  tmp = this->getGrade();

	tmp --;
	checkGrade(tmp);
	this->_grade = tmp;
}

void	Bureaucrat::checkGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
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
	out << c.getName() << ", bureaucrat grade is " << c.getGrade() << ".";
	return out;
}