#ifndef CPP_MODULE04_ANIMAL_HPP
#define CPP_MODULE04_ANIMAL_HPP

#include <iostream>

class Animal {

	public:
		Animal();
		Animal(Animal const &src);
		~Animal();

		Animal &operator=(Animal const &rhs);

	protected:
		std::string m_type;
};

#endif
