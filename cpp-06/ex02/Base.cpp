#include "Base.hpp"

Base::~Base(){}

Base *Base::generate()
{
    int random = std::rand()% 3;
    switch(random)
    {
    case 0:
    {
        A *a_class = new A();
        return (a_class);
    }
    case 1:
    {
        B *b_class = new B();
        return (b_class);
    }
    default:
    {
        C *c_class = new C();
        return (c_class);
    }
    }
}

void Base::identify(Base *p)
{
    if (dynamic_cast<A*>(p)) {
        std::cout << "A" << std::endl;
    } else if (dynamic_cast<B*>(p)) {
        std::cout << "B" << std::endl;
    } else if (dynamic_cast<C*>(p)) {
        std::cout << "C" << std::endl;
    } else {
        std::cout << "Unknown type" << std::endl;
    }
}

void Base::identify(Base &p)
{
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (std::bad_cast&) {}

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    } catch (std::bad_cast&) {}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    } catch (std::bad_cast&) {}
}