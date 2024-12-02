#include "Bureaucrat.hpp"

// Constructor

Bureaucrat::Bureaucrat() : _name("default"), _grade(1) {
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string &name, int grade) : _name(name){
	std::cout << "Bureaucrat second constructor called" << std::endl;
	check_grade(grade);
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &origin) : _name(origin._name), _grade(origin._grade) {
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &origin) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &origin)
		this->_grade = origin._grade;
	return (*this);
}

// Destructor

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called" << std::endl;
}

// Getters

const std::string& Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

// Methods

void Bureaucrat::incrementGrade() {
	check_grade(this->_grade - 1);
	this->_grade--;
}

void Bureaucrat::decrementGrade() {
	check_grade(this->_grade + 1);
	this->_grade++;
}

void Bureaucrat::check_grade(int grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(AForm &form) {
	try {
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << "." << std::endl;
	}
	catch (std::exception &e) {
		std::cout << _name << " couldn't sign " << form.getName() << " because the grade is too low!" << std::endl;
	}
}

// void Bureaucrat::executeForm(const AForm &form) const {

// Exceptions

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

std::ostream & operator << (std::ostream &out, const Bureaucrat &c) {
	out << c.getName() << ", bureaucrat grade is " << c.getGrade() << ".";
	return out;
}
