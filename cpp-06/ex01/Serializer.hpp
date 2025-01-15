#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include "Data.hpp"

class Serializer : Data{
private:
	Serializer();
	~Serializer();
	Serializer (const Serializer &origin);
	Serializer &operator=(const Serializer &origin);
public:
	static uintptr_t 	serialize(Data* ptr);
	static Data* 		deserialize(uintptr_t raw);
};

#endif