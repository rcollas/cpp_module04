#include "Character.hpp"

Character::Character(std::string name) : ICharacter() {

	this->m_name = name;
	this->m_totalItemsEquipped = 0;
	for (int i = 0; i < 4; i++)
		this->m_inventory[i] = 0;
}

Character::~Character() {

	//for (int i = 0; i < m_totalItemsEquipped; i++)
	//	delete m_inventory[i];
}

Character::Character(Character const &src) {

	delete [] *this->m_inventory;
	*this->m_inventory = *(new AMateria*[4]);
	for (int i = 0; i < 4; i++)
		this->m_inventory[i] = src.m_inventory[i];
}

std::string const & Character::getName() const {

	return this->m_name;
}

void Character::equip(AMateria* m) {

	if (this->m_totalItemsEquipped == 4) {
		return ;
	} else {
		this->m_inventory[m_totalItemsEquipped] = m;
	}
	this->m_totalItemsEquipped++;
}

void Character::unequip(int idx) {

	if (idx < 4 && idx >= 0 && this->m_inventory[idx]) {
		this->m_inventory[idx] = 0;
	}
}

void Character::use(int idx, ICharacter &target) {

	if (idx > 3) {
		return ;
	} else if (m_inventory[idx]) {
		m_inventory[idx]->use(target);
	}
}