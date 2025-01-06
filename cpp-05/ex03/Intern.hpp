#ifndef INTERN_HPP
#define INTERN_HPP


#include <iostream>
#include "AForm.hpp"

class Intern
{
    public:
    Intern();
    Intern(const Intern &src);
    Intern operator=(const Intern &src);
    ~Intern();

    AForm *makeForm(std::string name, std::string target);

    class NotAForm : public std::exception
    {
	    public:
		    const char* what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const Intern &c);

#endif