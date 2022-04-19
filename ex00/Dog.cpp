#include "Dog.hpp"

Dog::Dog() : Animal() {

	m_type = "Dog";
	std::cout << "\x1B[33mDog created \033[0m" << std::endl;
}


Dog::~Dog() {

	std::cout << "\x1B[33mDog has been destroyed \033[0m" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src) {

	std::cout << "\x1B[33mDog created by copy \033[0m" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs) {

	this->m_type = rhs.m_type;
	return *this;
}

void Dog::makeSound() {

	std::cout << "\x1B[33mWoof \033[0m" << std::endl;
}