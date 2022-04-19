#include "Dog.hpp"

Dog::Dog() : Animal() {

	m_type = "Dog";
	m_brain = new Brain;
	std::cout << "\x1B[33mDog created \033[0m" << std::endl;
}


Dog::~Dog() {

	delete m_brain;
	std::cout << "\x1B[33mDog has been destroyed \033[0m" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src) {

	std::cout << "\x1B[33mDog created by copy \033[0m" << std::endl;
}

Dog& Dog::operator=(const Dog &rhs) {

	this->m_type = rhs.m_type;
	delete this->m_brain;
	this->m_brain = new Brain(*rhs.m_brain);
	return *this;
}

void Dog::makeSound() {

	std::cout << "\x1B[33mWoof \033[0m" << std::endl;
}

void Dog::setIdea(std::string idea, int index) {

	this->m_brain->setIdea(idea, index);
}

std::string Dog::getIdea(int index) {

	return this->m_brain->getIdea(index);
}
