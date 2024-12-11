#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat 
{
private:
	const std::string   _name;
	int                 _grade;

public:
	// Constructor
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat (const Bureaucrat &origin);
	Bureaucrat &operator=(const Bureaucrat &origin);
	
	~Bureaucrat();

	// Getters
	const std::string& 	getName() const;
	int 				getGrade() const;

	// Methods
	void 				incrementGrade();
	void 				decrementGrade();
	void				check_grade(int grade);
	void 				executeForm(const AForm &form) const;
	void				signForm(AForm &form);
	
	// Exceptions
	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw();
	};
};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &c);

#endif
