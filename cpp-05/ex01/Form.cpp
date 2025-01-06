#include "Form.hpp"

Form::Form() : _name("Default-Form"), _isSigne(false), _requiredGradeSign(150), _requiredGradeExecute(150) {};

Form::Form(const std::string name, int requiredGradeSign, int requiredGradeExecute) : _name(name), _isSigne(false), _requiredGradeSign(requiredGradeSign), _requiredGradeExecute(requiredGradeExecute)
{
	checkGrade(requiredGradeSign);
	checkGrade(requiredGradeExecute);
}

Form::Form(const Form &src) : _name(src._name), _isSigne(src._isSigne), _requiredGradeSign(src._requiredGradeSign), _requiredGradeExecute(src._requiredGradeExecute){}

Form &Form::operator=(const Form &src)
{
	this->_isSigne = src._isSigne;
	return (*this);
}

Form::~Form() {}

bool    	Form::getIsSigne() const {return _isSigne;}

std::string Form::getName() const {return _name;}

int			Form::getRequiredGradeExecute() const {return _requiredGradeExecute;}

int			Form::getRequiredGradeSign() const {return _requiredGradeSign;}

void	Form::beSigned( Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() <= _requiredGradeSign)
		_isSigne = true;
	else
		throw Form::GradeTooLowToSigneException();
}

void	Form::checkGrade(int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char* Form::GradeTooLowToSigneException::what() const throw()
{
	return "Grade is too low to Signe";
}

std::ostream &operator<<(std::ostream &out, const Form &c)
{
	out << c.getName() << ", Form required Grade to Sign is " << c.getRequiredGradeSign() << ". Form Required Grade to Execute is " << c.getRequiredGradeExecute() << ". The Form is Signe ([0] NO , [1] Yes) : " << c.getIsSigne() << "." << std::endl;
	return out;
}