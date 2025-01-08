#include "AForm.hpp"

AForm::AForm() : _name("Default-AForm"), _isSigne(false), _requiredGradeSign(150), _requiredGradeExecute(150) {};

AForm::AForm(const std::string &name, int requiredGradeSign, int requiredGradeExecute) : _name(name), _isSigne(false), _requiredGradeSign(requiredGradeSign), _requiredGradeExecute(requiredGradeExecute)
{
	checkGrade(requiredGradeSign);
	checkGrade(requiredGradeExecute);
}

AForm::AForm(const AForm &src) : _name(src._name), _isSigne(src._isSigne), _requiredGradeSign(src._requiredGradeSign), _requiredGradeExecute(src._requiredGradeExecute){}

AForm &AForm::operator=(const AForm &src)
{
	this->_isSigne = src._isSigne;
	return (*this);
}

AForm::~AForm() {}

bool    	AForm::getIsSigne() const {return _isSigne;}

std::string AForm::getName() const {return _name;}

int			AForm::getRequiredGradeExecute() const {return _requiredGradeExecute;}

int			AForm::getRequiredGradeSign() const {return _requiredGradeSign;}

void		AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= _requiredGradeSign)
		_isSigne = true;
	else
		throw AForm::GradeTooLowException();
}

void AForm::checkExecution(const Bureaucrat &executor) const
{
	if (_isSigne == false)
		throw AForm::isNotSigne();
	if (executor.getGrade() > _requiredGradeExecute)
		throw AForm::GradeTooLowToExecException();
}

void AForm::checkGrade(int grade) const
{
	if (grade < 1)
		throw AForm::GradeTooHighException();
	if (grade > 150)
		throw AForm::GradeTooLowException();
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char* AForm::GradeTooLowToSigneException::what() const throw()
{
	return "Grade is too low to Signe";
}

const char* AForm::GradeTooLowToExecException::what() const throw()
{
	return "Grade is too low to Execute";
}

const char* AForm::isNotSigne::what() const throw()
{
	return "the Form is not Signe";
}

std::ostream &operator<<(std::ostream &out, const AForm &c)
{
	out << c.getName() << ", AForm required Grade to Sign is " << c.getRequiredGradeSign() << ". AForm Required Grade to Execute is " << c.getRequiredGradeExecute() << ". The AForm is Signe ([0] NO , [1] Yes) : " << c.getIsSigne() << "." << std::endl;
	return out;
}