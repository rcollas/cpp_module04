#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < 4; i++) {
		this->m_materia[i] = 0;
	}
	std::cout << "construct operator" << std::endl;
}


MateriaSource::~MateriaSource() {}

MateriaSource::MateriaSource(MateriaSource const &src) {

	for (int i = 0; i < 4; i++) {
		if (this->m_materia[i]) {
			itemHistory.erase(this->m_materia[i]);
		}
	}
	for (int i = 0; i < 4; i++) {
		if (src.m_materia[i]) {
			this->m_materia[i] = src.m_materia[i]->clone();
			//itemHistory.add(this->m_materia[i]);
		}
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {

	for (int i = 0; i < 4; i++) {
		itemHistory.erase(m_materia[i]);
	}
	*this->m_materia = *(new AMateria*[4]);
	for (int i = 0; i < 4; i++) {
		m_materia[i] = rhs.m_materia[i]->clone();
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {

	for (int i = 0; i < 4; i++) {
		if (!m_materia[i]) {
			m_materia[i] = materia->clone();
			return ;
		}
	}
	std::cout << "\x1B[31mMateria source is full\033[0m" << std::endl;
}

AMateria* MateriaSource::createMateria(const std::string &type) {

	for (int i = 0; i < 4; i++) {
		if (m_materia[i] && m_materia[i]->getType() == type) {
			return m_materia[i]->clone();
		}
	}
	return 0;
}
