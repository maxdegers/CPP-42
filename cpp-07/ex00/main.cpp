#include "Base.hpp"
#include <cstdlib>
#include <ctime>

int main() {
    // Initialisation du générateur aléatoire
    std::srand(static_cast<unsigned>(std::time(NULL)));

    // Générer et identifier plusieurs instances aléatoires
    for (int i = 0; i < 5; ++i) {
        std::cout << "----- Test " << i + 1 << " -----" << std::endl;

        // Génération d'une instance aléatoire
        Base* obj = Base::generate();
        if (!obj) {
            std::cout << "Failed to generate object" << std::endl;
            continue;
        }

        // Identifier via un pointeur
        std::cout << "Identify using pointer: ";
        Base::identify(obj);

        // Identifier via une référence
        std::cout << "Identify using reference: ";
        Base::identify(*obj);

        // Nettoyage de l'objet
        delete obj;
        std::cout << std::endl;
    }

    return 0;
}