#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {

	m_type = "WrongCat";
	std::cout << "\x1B[31mWrongCat created \033[0m" << std::endl;
}


WrongCat::~WrongCat() {

	std::cout << "\x1B[31mWrongCat has been destroyed \033[0m" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src) {

	std::cout << "\x1B[31mWrongCat created by copy \033[0m" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs) {

	this->m_type = rhs.m_type;
	return *this;
}

void WrongCat::makeSound() {

	std::cout << "\x1B[31mMeow \033[0m" << std::endl;
}
