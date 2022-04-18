#ifndef CPP_MODULE04_WRONGCAT_HPP
#define CPP_MODULE04_WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal {

	public:
		WrongCat();
		WrongCat(WrongCat const &src);
		~WrongCat();

		WrongCat &operator=(WrongCat const &rhs);

		void makeSound();

	private:
};

#endif
