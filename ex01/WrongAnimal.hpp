#ifndef CPP_MODULE04_WRONGANIMAL_HPP
#define CPP_MODULE04_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		~WrongAnimal();

		WrongAnimal &operator=(WrongAnimal const &rhs);

		void makeSound();

	protected:
		std::string m_type;
};

#endif
