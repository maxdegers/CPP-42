#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Bureaucrat
{
	private:
		const std::string 	_name;
		int				_grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
        Bureaucrat &operator=(const Bureaucrat &src);

        ~Bureaucrat();

		std::string	getName() const;
		int		getGrade() const;

		void		decrementGrade();
		void		incrementGrade();

		void 		checkGrade(int grade);

		void		signForm();

	
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