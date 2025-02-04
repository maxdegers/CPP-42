#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string 	_name;
		bool				_isSigne;
		const int			_requiredGradeSign;
		const int			_requiredGradeExecute;
	
	protected:
		void 		checkExecution(const Bureaucrat &executor) const;
		void		checkGrade(int grade) const;
	
	public:
		AForm();
		AForm(const AForm &src);
		AForm &operator=(const AForm &src);
		AForm(const std::string &name, int requiredGradeSign, int requiredGradeExecute);

		virtual ~AForm();

		bool			getIsSigne() const;
		std::string		getName() const;
		int				getRequiredGradeSign() const;
		int				getRequiredGradeExecute() const;
		virtual void	execute(const Bureaucrat &executor) const = 0;

		void			beSigned(Bureaucrat &bureaucrat);

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
	class GradeTooLowToExecException : public std::exception {
	public:
		const char* what() const throw();
	};
	class isNotSigne : public std::exception {
	public:
		const char* what() const throw();
	};
};

std::ostream &operator << (std::ostream &out, const AForm &c);

#endif
