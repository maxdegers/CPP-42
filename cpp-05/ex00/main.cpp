#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat john("John", 150);
		std::cout << john << std::endl;

		john.decrementGrade();
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat jane("Jane", 1);
		std::cout << jane << std::endl;

		jane.incrementGrade();
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat invalid("Invalid", 0);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	try {
		Bureaucrat invalid("Invalid", 151);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
