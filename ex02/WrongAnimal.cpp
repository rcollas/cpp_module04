#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {

	std::cout << "\x1B[35mWrongAnimal created\033[0m" << std::endl;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "\x1B[35mWrongAnimal has been destroyed \033[0m" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {

	*this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs) {

	this->m_type = rhs.m_type;
	return *this;
}

void WrongAnimal::makeSound() {

	std::cout << "\x1B[35mI'M AN ANIMAL \033[0m" << std::endl;
}