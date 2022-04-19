#include "AAnimal.hpp"

AAnimal::AAnimal() {

	std::cout << "\x1B[34mAnimal created\033[0m" << std::endl;
}

AAnimal::~AAnimal() {

	std::cout << "\x1B[34mAnimal has been destroyed \033[0m" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src) {

	*this = src;
}

AAnimal& AAnimal::operator=(const AAnimal &rhs) {

	this->m_type = rhs.m_type;
	return *this;
}

void AAnimal::makeSound() {}