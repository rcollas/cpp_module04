#ifndef CPP_MODULE04_AMATERIA_HPP
#define CPP_MODULE04_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "LinkedList.hpp"

class LinkedList;
extern LinkedList itemHistory;


class AMateria {

	public:
		AMateria(std::string const & type);
		AMateria(AMateria const &src);
		virtual ~AMateria();

		AMateria &operator=(AMateria const &rhs);

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string m_type;
};

#endif
