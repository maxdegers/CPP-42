#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string 	_name;
		bool				_isSigne;
		int					_requiredGradeSign;
		int					_requiredGradeExecute;
	
	public:
		Form();
		Form(const std::string name, int requiredGradeSign, int requiredGradeExecute);
		Form &operator=( const Form &src);

		~Form();

		void	getIsSigne();

		void	beSigned( Bureaucrat bureaucrat);

		void	checkGrade(int grade);

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

std::ostream &operator << (std::ostream &out, const Form &c);

#endif
