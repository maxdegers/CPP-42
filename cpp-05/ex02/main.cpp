#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    std::srand(std::time(0));
    std::cout << "=== Testing AForm and Derived Forms ===\n";

    // Bureaucrates valides
    Bureaucrat alice("Alice", 1);
    Bureaucrat bob("Bob", 150);

    // Formulaires dérivés
    ShrubberyCreationForm shrubbery("Garden");
    RobotomyRequestForm robotomy("Robot");
    PresidentialPardonForm pardon("Zaphod");

    // Tentatives de signatures et exécutions
    alice.signForm(shrubbery);
    alice.executeForm(shrubbery);

    alice.signForm(robotomy);
    alice.executeForm(robotomy); // Succès ou échec aléatoire

    alice.signForm(pardon);
    alice.executeForm(pardon);

    // Tests d'exceptions
    try {
        bob.executeForm(shrubbery); // Grade insuffisant
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << '\n';
    }

    try {
        ShrubberyCreationForm unsignedForm("UnsignedTest");
        alice.executeForm(unsignedForm); // Non signé
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << '\n';
    }

    return 0;
}
