#ifndef CPP_MODULE04_CATS_HPP
#define CPP_MODULE04_CATS_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public AAnimal {

	public:
		Cat();
		Cat(Cat const &src);
		~Cat();

		Cat &operator=(Cat const &rhs);

		void makeSound();

	private:
};


#endif
