#ifndef CPP_MODULE04_DOG_HPP
#define CPP_MODULE04_DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {

	public:
		Dog();
		Dog(Dog const &src);
		virtual ~Dog();

		Dog &operator=(Dog const &rhs);

		void makeSound();

	private:
		Brain* m_brain;
};


#endif
