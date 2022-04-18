#ifndef CPP_MODULE04_DOG_HPP
#define CPP_MODULE04_DOG_HPP

#include "Animal.hpp"

class Dog : public AAnimal {

	public:
		Dog();
		Dog(Dog const &src);
		~Dog();

		Dog &operator=(Dog const &rhs);

		void makeSound();

	private:
};


#endif
