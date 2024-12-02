#include "Bureaucrat.hpp"

int main() {
	Bureaucrat k("BG1", 150);
	std::cout << k << std::endl;
	std::cout << "---INCREMENT---" << std::endl;
	try{
		k.incrementGrade();
	}
	catch (std::exception &e) {
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	std::cout << k << std::endl;
	Bureaucrat g(k);
	std::cout << g << std::endl;
	std::cout << "---INCREMENT---" << std::endl;
	try{
	g.decrementGrade();
	g.decrementGrade();
	}
	catch (std::exception &e) {
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	try{
	std::cout << g << std::endl;
	Bureaucrat b;
	g = b;
	std::cout << b << std::endl;
	std::cout << "---DECREMENT---" << std::endl;
	b.decrementGrade();
	std::cout << b << std::endl;
	g.incrementGrade();
	std::cout << g << std::endl;
	std::cout << g << std::endl;
	std::cout << b << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Exception : " << e.what() << std::endl;
	}
}
