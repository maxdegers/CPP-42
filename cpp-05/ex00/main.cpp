#include <iostream>
#include "Bureaucrat.hpp"

int main() {
    std::cout << "=== Testing Bureaucrat ===" << std::endl;

    try {
        Bureaucrat alice("Alice", 1);
        std::cout << alice << std::endl;

        alice.incrementGrade(); // Should throw GradeTooHighException
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Bureaucrat bob("Bob", 150);
        std::cout << bob << std::endl;

        bob.decrementGrade(); // Should throw GradeTooLowException
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Bureaucrat invalidHigh("InvalidHigh", 0); // Invalid grade (too high)
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        Bureaucrat invalidLow("InvalidLow", 151); // Invalid grade (too low)
    } catch (std::exception &e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
