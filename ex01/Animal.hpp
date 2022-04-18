#ifndef CPP_MODULE04_ANIMAL_HPP
#define CPP_MODULE04_ANIMAL_HPP

#include <iostream>

class Animal {

	public:
		Animal();
		Animal(Animal const &src);
		virtual ~Animal();

		Animal &operator=(Animal const &rhs);

		virtual void makeSound();

	protected:
		std::string m_type;
};

#endif
