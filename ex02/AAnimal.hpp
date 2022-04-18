#ifndef CPP_MODULE04_AANIMAL_HPP
#define CPP_MODULE04_AANIMAL_HPP

#include <iostream>

class AAnimal {

	public:
		//AAnimal() = 0;
		//AAnimal(AAnimal const &src);
		virtual ~AAnimal() {};

		//AAnimal &operator=(AAnimal const &rhs);

		virtual void makeSound() = 0;

	protected:
		std::string m_type;
};

#endif
