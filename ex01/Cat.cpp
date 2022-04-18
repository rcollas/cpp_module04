#include "Cat.hpp"

Cat::Cat() : Animal() {

	m_type = "Cat";
	m_brain = new Brain();
	std::cout << "\x1B[32mCat created \033[0m" << std::endl;
}


Cat::~Cat() {

	delete m_brain;
	std::cout << "\x1B[32mCat has been destroyed \033[0m" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src) {

	std::cout << "\x1B[32mCat created by copy \033[0m" << std::endl;
}

Cat& Cat::operator=(const Cat &rhs) {

	this->m_type = rhs.m_type;
	return *this;
}

void Cat::makeSound() {

	std::cout << "\x1B[32mMeow \033[0m" << std::endl;
}
