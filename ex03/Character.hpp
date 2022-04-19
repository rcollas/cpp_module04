#ifndef CPP_MODULE04_CHARACTER_HPP
#define CPP_MODULE04_CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "LinkedList.hpp"

class Character : public ICharacter {

	public:
		Character(std::string name);
		Character(Character const &src);
		~Character();

		Character &operator=(Character const &rhs);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

	private:
		AMateria *m_inventory[4];
		std::string m_name;
		int m_totalItemsEquipped;
};


#endif
