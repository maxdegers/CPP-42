#include "Form.hpp"

Form::Form() : _name("Default-Form"), _isSigne(false), _requiredGradeExecute(150), _requiredGradeSign(150) {};

Form::Form(const std::string name,int requiredGradeSign, int requiredGradeExecute) : _name(name), _isSigne(false)
{
    checkGrade(requiredGradeSign);
    checkGrade(requiredGradeExecute);

    _requiredGradeSign = requiredGradeSign;
    _requiredGradeExecute = requiredGradeExecute;
}

Form &Form::operator=(const Form &src)
{
    //TODO FINIR LE CODE 
}

Form::~Form() {}

void	Form::checkGrade(int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	if (grade > 150)
		throw Form::GradeTooLowException();
}