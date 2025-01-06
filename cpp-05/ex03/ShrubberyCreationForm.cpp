#include "ShrubberyCreationForm.hpp"
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137) , _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &origin) : AForm(origin), _target(origin._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &origin)
{
	if (this != &origin) {
		this->AForm::operator=(origin);
		_target = origin._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	checkExecution(executor);
	std::ofstream outfile;
	outfile.open((_target + "_shrubbery").c_str());
	if (outfile.is_open())
	{
	outfile << "       _-_\n"
			<< "    /~~   ~~\\\n"
			<< " /~~         ~~\\\n"
			<< "{               }\n"
			<< " \\  _-     -_  /\n"
			<< "   ~  \\\\ //  ~\n"
			<< "_- -   | | _- _\n"
			<< "  _ -  | |   -_\n"
			<< "      // \\\\" << std::endl
			<< "       _-_\n"
			<< "    /~~   ~~\\\n"
			<< " /~~         ~~\\\n"
			<< "{               }\n"
			<< " \\  _-     -_  /\n"
			<< "   ~  \\\\ //  ~\n"
			<< "_- -   | | _- _\n"
			<< "  _ -  | |   -_\n"
			<< "      // \\\\" << std::endl;
	outfile.close();
	}
	else
		throw ShrubberyCreationForm::CanNotOpenFile();
	std::cout << "Created a file " << _target + "_shrubbery" << " in the working directory, and writed ASCII trees inside it." << std::endl;
}

const char *ShrubberyCreationForm::CanNotOpenFile::what() const throw()
{
	return ("Can not open file");
}
