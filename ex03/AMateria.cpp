#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : m_type(type) {

	itemHistory.add(this);
}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const &src) {

	itemHistory.add(this);
	this->m_type = src.m_type;
	*this = src;
}

void AMateria::use(ICharacter &target) {

	std::cout << "Unknown used on " << target.getName();
	std::cout << std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs) {

	this->m_type = rhs.m_type;
	return *this;
}

std::string const & AMateria::getType() const {

	return this->m_type;
}
