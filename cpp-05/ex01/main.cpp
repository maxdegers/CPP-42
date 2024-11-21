#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat alice("Alice", 2);
        Bureaucrat bob("Bob", 150);

        Form formA("FormA", 3, 50);
        Form formB("FormB", 150, 150);

        std::cout << formA << std::endl;
        std::cout << formB << std::endl;

        alice.signForm(formA);

        bob.signForm(formA);

        bob.signForm(formB);

        std::cout << formA << std::endl;
        std::cout << formB << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
