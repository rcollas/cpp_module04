#ifndef CPP_MODULE04_ICE_HPP
#define CPP_MODULE04_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

	public:
		//Ice(std::string const & type);
		Ice();
		Ice(Ice const &src);
		~Ice();

		//Ice &operator=(Ice const &rhs);

		AMateria* clone() const;
		void use(ICharacter &target);

	private:
};


#endif
