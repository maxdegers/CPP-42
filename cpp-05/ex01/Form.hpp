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
		const int			_requiredGradeSign;
		const int			_requiredGradeExecute;
		Form();
		Form &operator=( const Form &src);
	
	public:
		Form(const Form &src);
		Form(const std::string name, int requiredGradeSign, int requiredGradeExecute);

		~Form();

		bool		getIsSigne() const;
		std::string	getName() const;
		int			getRequiredGradeSign() const;
		int			getRequiredGradeExecute() const;

		void		beSigned( Bureaucrat bureaucrat);

		void		checkGrade(int grade);

	// Exceptions
	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		const char* what() const throw();
	};
	class GradeTooLowToSigneException : public std::exception {
	public:
		const char* what() const throw();
	};
};

std::ostream &operator << (std::ostream &out, const Form &c);

#endif
