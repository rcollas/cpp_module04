#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}


Cure::~Cure() {}

Cure::Cure(Cure const &src) : AMateria(src) {

	this->m_type = src.m_type;
}

AMateria* Cure::clone() const {

	return new Cure(*this);
}

void Cure::use(ICharacter &target) {

	std::cout << "* heals " << target.getName();
	std::cout << "'s wounds *" << std::endl;
}
