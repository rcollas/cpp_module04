#ifndef CPP_MODULE04_AANIMAL_HPP
#define CPP_MODULE04_AANIMAL_HPP

#include <iostream>

class AAnimal {

	public:
		AAnimal();
		AAnimal(AAnimal const &src);
		virtual ~AAnimal();

		virtual AAnimal &operator=(AAnimal const &rhs);

		virtual void makeSound() = 0;

	protected:
		std::string m_type;
};

#endif
