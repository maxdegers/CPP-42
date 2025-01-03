#include <iostream>

#include "Bureaucrat.hpp"

int main() {
	try{
		try{
			std::cout << "Bobo -> Grade 151:" << std::endl;
			Bureaucrat Bobo("Bobo", 151);
		}
		catch (std::exception &e){
			std::cerr << "Exception : " << e.what() << std::endl;
		}
		try{
			std::cout << "Jeff -> Grade 0:" << std::endl;
			Bureaucrat Jeff("Jeff", 0);
		}
		catch (std::exception &e){
			std::cerr << "Exception : " << e.what() << std::endl;
		}
		try{
			std::cout << "Jeff -> Grade 0:" << std::endl;
			Bureaucrat Jeff("Jeff", 0);
		}
		catch (std::exception &e){
			std::cerr << "Exception : " << e.what() << std::endl;
		}
		std::cout << "---INCREMENT---" << std::endl;
		Bureaucrat Geralde("Geralde", 150);
		std::cout << Geralde << std::endl;
		try{
			Geralde.incrementGrade();
		}
		catch (std::exception &e) {
			std::cerr << "Exception : " << e.what() << std::endl;
		}
		Bureaucrat Bernard("Bernard", 1);
		std::cout << Bernard << std::endl;
		try{
			Bernard.incrementGrade();
		}
		catch (std::exception &e) {
			std::cerr << "Exception : " << e.what() << std::endl;
		}
		std::cout << "---DECREMENT---" << std::endl;
		std::cout << Geralde << std::endl;
		try{
			Geralde.decrementGrade();
			std::cout << Geralde << std::endl;
			Geralde.decrementGrade();
		}
		catch (std::exception &e) {
			std::cerr << "Exception : " << e.what() << std::endl;
		}
		std::cout << Bernard << std::endl;
		try{
			Bernard.decrementGrade();
		}
		catch (std::exception &e) {
			std::cerr << "Exception : " << e.what() << std::endl;
		}
	}
	catch (std::exception &e) {
			std::cerr << "Exception : " << e.what() << std::endl;
		}
}
