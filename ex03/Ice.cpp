#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}


Ice::~Ice() {}

Ice::Ice(Ice const &src) : AMateria(src) {

	this->m_type = src.m_type;
}

AMateria* Ice::clone() const {

	return new Ice;
}

void Ice::use(ICharacter &target) {

	std::cout << "* shoots an ice bolt at " << target.getName();
	std::cout << " *" << std::endl;
}