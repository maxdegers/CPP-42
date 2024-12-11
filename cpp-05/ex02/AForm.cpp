#include "AForm.hpp"
#include "Bureaucrat.hpp"

static void	check_grade(int grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

// Constructor
AForm::AForm() : _name("default"), _gradeToSign(1), _gradeToExecute(1)
{
	this->_signed = false;
}

AForm::AForm(const std::string &name, int sg, int eg) : _name(name), _gradeToSign(sg), _gradeToExecute(eg)
{
	check_grade(_gradeToSign);
	check_grade(_gradeToExecute);
	this->_signed = false;
}

AForm::AForm(const AForm &origin) : _name(origin._name) , _signed(origin._signed), _gradeToSign(origin._gradeToSign), _gradeToExecute(origin._gradeToExecute) {
	std::cout << "Copy constructor operator called" << std::endl;
}

AForm &AForm::operator=(const AForm &origin) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &origin)
		this->_signed = origin._signed;
	return (*this);
}

// Destructor
AForm::~AForm() {}


// Getter
std::string AForm::getName() const
{
	return this->_name;
}

int AForm::getEGrade() const
{
	return (this->_gradeToExecute);
}

int AForm::getSGrade() const
{
	return (this->_gradeToSign);
}

int AForm::getSigned() const
{
	return (this->_signed);
}

// Member function
void AForm::beSigned(const Bureaucrat &signer)
{
	if (signer.getGrade() > this->_gradeToSign)
		throw (AForm::GradeTooLowException());
	this->_signed = true;
}

void AForm::is_grade_exe(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw AForm::IsNotSigned();
	if (executor.getGrade() > _gradeToExecute)
		throw AForm::GradeTooLowException() ;
}

// Exception
const char *AForm::GradeTooHighException::what() const throw()
{
	return ("The grade is Too High.");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("The grade is Too Low.");
}

const char *AForm::IsNotSigned::what() const throw()
{
	return ("The Form is not signed.");
}


// Overload
std::ostream & operator << (std::ostream &out, const AForm &c) {
	if (c.getSigned())
		out << "Name of form is " << c.getName() << "."
		<< std::endl << "The Form is signed."
		<< std::endl << "The grade required to execute is "
		<< c.getEGrade() << "." << std::endl
		<< "And the grade required to sign is " << c.getSGrade() << ".";
	else
		out << "Name of form is " << c.getName()
		<< "." << std::endl << "The Form is not signed."
		<< std::endl << "The grade required to execute is "
		<< c.getEGrade() << "." << std::endl
		<< "And the grade required to sign is " << c.getSGrade() << ".";
	return out;
}