#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
    try {
        Bureaucrat Alice("Alice", 2);
        Bureaucrat Bob("Bob", 150);

        Form formA("FormA", 3, 50);
        Form formB("FormB", 150, 150);

        std::cout << formA << std::endl;
        std::cout << formB << std::endl;

        Alice.signForm(formA);

        Bob.signForm(formA);

        Bob.signForm(formB);

        std::cout << formA << std::endl;
        std::cout << formB << std::endl;
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
