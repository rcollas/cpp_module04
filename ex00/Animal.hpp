#ifndef CPP_MODULE04_ANIMAL_HPP
#define CPP_MODULE04_ANIMAL_HPP

#include <iostream>

class AAnimal {

	public:
		AAnimal();
		AAnimal(AAnimal const &src);
		~AAnimal();

		AAnimal &operator=(AAnimal const &rhs);

		virtual void makeSound();

	protected:
		std::string m_type;
};

#endif
