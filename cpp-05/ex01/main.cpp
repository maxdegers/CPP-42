#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    std::cout << "=== Testing Form ===\n";

    // Bureaucrates valides
    Bureaucrat alice("Alice", 50);
    Bureaucrat bob("Bob", 100);

    // Formulaire valide
    Form contract("Contract", 75, 50);

    std::cout << contract << '\n';

    // Signature réussie
    alice.signForm(contract);
    std::cout << contract << '\n';

    // Tentative de re-signature
    try {
        bob.signForm(contract);
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << '\n';
    }

    // Formulaires invalides (exceptions)
    try {
        Form invalidHigh("InvalidHigh", 0, 50);
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << '\n';
    }

    try {
        Form invalidLow("InvalidLow", 151, 150);
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << '\n';
    }

    return 0;
}
