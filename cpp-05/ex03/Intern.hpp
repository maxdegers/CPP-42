#ifndef INTERN_HPP
#define INTERN_HPP


#include <iostream>
#include "AForm.hpp"

class Intern
{
    private:
    Intern(const Intern &src);
    Intern &operator=(const Intern &src);

    public:
    Intern();
    
    ~Intern();

    AForm *makeForm(const std::string &name, const std::string &target);

    class NotAForm : public std::exception
    {
	    public:
		    const char* what() const throw();
	};
};

#endif