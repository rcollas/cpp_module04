#include "Animal.hpp"

Animal::Animal() {

	std::cout << "\x1B[34mAnimal created\033[0m" << std::endl;
}

Animal::~Animal() {

	std::cout << "\x1B[34mAnimal has been destroyed \033[0m" << std::endl;
}

Animal::Animal(Animal const &src) {

	*this = src;
}

Animal& Animal::operator=(const Animal &rhs) {

	this->m_type = rhs.m_type;
	return *this;
}