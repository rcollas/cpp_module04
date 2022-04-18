#ifndef CPP_MODULE04_CATS_HPP
#define CPP_MODULE04_CATS_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

	public:
		Cat();
		Cat(Cat const &src);
		virtual ~Cat();

		Cat &operator=(Cat const &rhs);

		void makeSound();

	private:
		Brain* m_brain;
};


#endif
