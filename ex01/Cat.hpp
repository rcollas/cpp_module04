#ifndef CPP_MODULE04_CATS_HPP
#define CPP_MODULE04_CATS_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

	public:
		Cat();
		Cat(Cat const &src);
		~Cat();

		Cat &operator=(Cat const &rhs);

		void makeSound();

	private:
		Brain* m_brain;
};


#endif
