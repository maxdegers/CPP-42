#include "Form.hpp"
#include "Bureaucrat.hpp"

static void	check_grade(int grade) {
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}
// Constructor

Form::Form() : _name("default"), _isSigned(false) , _gradeToSign(1), _gradeToExecute(1) {
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const std::string &name, int grade_to_sign, int grade_to_execute) : _name(name), _gradeToSign(grade_to_sign), _gradeToExecute(grade_to_execute) {
    std::cout << "Form second constructor called" << std::endl;
    check_grade(grade_to_sign);
    check_grade(grade_to_execute);
    this->_isSigned = false;
}

Form::Form(const Form &origin) : _name(origin._name), _isSigned(origin._isSigned), _gradeToSign(origin._gradeToSign), _gradeToExecute(origin._gradeToExecute) {
    std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &origin) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &origin)
		this->_isSigned = origin._isSigned;
	return (*this);
}

// Destructor

Form::~Form() {
    std::cout << "Form destructor called" << std::endl;
}

// Getters

const std::string& Form::getName() const {
    return this->_name;
}

int Form::getGradeToSign() const {
    return this->_gradeToSign;
}

int Form::getGradeToExecute() const {
    return this->_gradeToExecute;
}

// Methods

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    this->_isSigned = true;
}


// Exceptions

const char* Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream & operator << (std::ostream &out, const Form &c) {
	if (c.getGradeToSign())
		out << "Name of form is " << c.getName() << "." << std::endl << "The Form is signed." << std::endl << "The grade required to execute is " << c.getGradeToExecute() << "." << std::endl << "And the grade required to sign is " << c.getGradeToSign() << ".";
	else
		out << "Name of form is " << c.getName() << "." << std::endl << "The Form is not signed." << std::endl << "The grade required to execute is " << c.getGradeToExecute() << "." << std::endl << "And the grade required to sign is " << c.getGradeToSign() << ".";
	return out;
}
