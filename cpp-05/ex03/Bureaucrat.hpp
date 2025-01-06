#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string 	_name;
		int					_grade;
		
		Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &src);

	public:
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat(const std::string& name, int grade);

        ~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;

		void		decrementGrade();
		void		incrementGrade();

		void 		checkGrade(int grade);

		void		signForm(AForm &form);
		void		executeForm(AForm const & form);

	
	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &c);


#endif