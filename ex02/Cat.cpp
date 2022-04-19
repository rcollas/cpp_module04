#include "Cat.hpp"

Cat::Cat() : AAnimal() {

	m_type = "Cat";
	m_brain = new Brain;
	std::cout << "\x1B[32mCat created \033[0m" << std::endl;
}


Cat::~Cat() {

	if (this->m_brain) {
		delete this->m_brain;
		this->m_brain = 0;
	}
	std::cout << "\x1B[32mCat has been destroyed \033[0m" << std::endl;
}

Cat::Cat(Cat const &src) : AAnimal(src) {

	std::cout << "\x1B[32mCat created by copy \033[0m" << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat &rhs) {

	this->m_type = rhs.m_type;
	if (this->m_brain) {
		delete this->m_brain;
		this->m_brain = 0;
	}
	this->m_brain = new Brain(*rhs.m_brain);

	return *this;
}

void Cat::makeSound() {

	std::cout << "\x1B[32mMeow \033[0m" << std::endl;
}

void Cat::setIdea(std::string idea, int index) {

	this->m_brain->setIdea(idea, index);
}

std::string Cat::getIdea(int index) {

	return this->m_brain->getIdea(index);
}
