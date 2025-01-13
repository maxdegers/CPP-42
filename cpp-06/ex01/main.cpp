#include "Serializer.hpp"
#include <iomanip> //pour L'affichage
int main()
{
	std::cout << "--------------------------------------------------------------" << std::endl;

    Data test;
    test.exemple = 120;

    uintptr_t base = Serializer::serialize(&test);
    Data* ret = Serializer::deserialize(base);

    std::cout << "+-------------------------+----------------------------------+" << std::endl;
    std::cout << "| Step                   | Value                            |" << std::endl;
    std::cout << "+-------------------------+----------------------------------+" << std::endl;
    std::cout << "| Data value             | " << std::setw(32) << test.exemple << " |" << std::endl;
    std::cout << "| Data address           | " << std::setw(32) << &test << " |" << std::endl;
    std::cout << "+-------------------------+----------------------------------+" << std::endl;
    std::cout << "| Serializer             |                                  |" << std::endl;
    std::cout << "| Serialized uintptr_t   | " << std::setw(20)<< "0x" << std::hex << base << " |" << std::endl;
    std::cout << "+-------------------------+----------------------------------+" << std::endl;
    std::cout << "| Deserializer           |                                  |" << std::endl;
    std::cout << "| Deserialized Data value| " << std::setw(32) << std::dec << ret->exemple << " |" << std::endl;
    std::cout << "| Deserialized address   | " << std::setw(32) << ret << " |" << std::endl;
    std::cout << "+-------------------------+----------------------------------+" << std::endl;

    return 0;
}
