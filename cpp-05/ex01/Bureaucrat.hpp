#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>

#include "Form.hpp"

class Form;

class Bureaucrat {
private:
	const std::string   _name;
	int                 _grade;

public:

	// Exceptions
	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw();
	};

	// Constructor & Destructor
	Bureaucrat();
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat(const std::string& name, int grade);

	~Bureaucrat();

	// Getters
	const std::string& 	getName() const;
	int 				getGrade() const;

	// Methods
	void 				incrementGrade();
	void 				decrementGrade();
	void 				signForm(Form& form);

	// Overload << operator
	friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
};

#endif
