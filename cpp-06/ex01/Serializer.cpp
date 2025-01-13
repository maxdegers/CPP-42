#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::~Serializer(){}

Serializer::Serializer(const Serializer &origin) {
	(void)origin;
}

Serializer &Serializer::operator=(const Serializer &origin) {
	this->exemple = origin.exemple;
	return (*this);
}

uintptr_t Serializer::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}