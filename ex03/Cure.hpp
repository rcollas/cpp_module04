#ifndef CPP_MODULE04_CURE_HPP
#define CPP_MODULE04_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

	public:
//		Cure(std::string const & type);
		Cure();
		Cure(Cure const &src);
		~Cure();

		//Ice &operator=(Ice const &rhs);

		AMateria* clone() const;
		void use(ICharacter &target);

	private:
};


#endif
