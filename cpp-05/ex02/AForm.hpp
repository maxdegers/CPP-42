#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExecute;
	public:
		// Constructor
		AForm();
		AForm(const std::string &name, int eg, int sg);
		AForm (const AForm &origin);
		AForm &operator=(const AForm &origin);
		
		// Destructor
		virtual ~AForm();

		// Getter
		std::string 	getName() const ;
		int				getSigned() const ;
		int				getEGrade() const ;
		int				getSGrade() const ;

		// Member function
		void			beSigned(const Bureaucrat &signer) ;
		void			is_grade_exe(Bureaucrat const & executor) const ;
		virtual int		execute(Bureaucrat const & executor) const = 0;

		// Exception
		class GradeTooHighException : public std::exception {
		public:
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
		public:
			const char* what() const throw();
		};
		class IsNotSigned : public std::exception {
		public:
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const AForm &c);

#endif
