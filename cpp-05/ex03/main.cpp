#include <iostream>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main() {
    try
    {
        std::cout << "=== Testing Intern ===\n";

        Intern intern;
        Bureaucrat alice("Alice", 1);

        // Création de formulaires par Intern
        AForm* shrubbery = intern.makeForm("shrubbery creation", "Garden");
        AForm* robotomy = intern.makeForm("robotomy request", "Robot");
        AForm* pardon = intern.makeForm("presidential pardon", "Zaphod");

        // Signature et exécution
        alice.signForm(*shrubbery);
        alice.executeForm(*shrubbery);

        alice.signForm(*robotomy);
        alice.executeForm(*robotomy);

        alice.signForm(*pardon);
        alice.executeForm(*pardon);

        // Type inconnu
        try {
            AForm* unknown = intern.makeForm("unknown type", "Target");
            delete unknown;
        } catch (const std::exception &e) {
            std::cerr << "Exception: " << e.what() << '\n';
        }

        // Libération de mémoire
        delete shrubbery;
        delete robotomy;
        delete pardon;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}
