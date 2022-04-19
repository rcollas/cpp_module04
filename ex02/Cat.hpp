#ifndef CPP_MODULE04_CATS_HPP
#define CPP_MODULE04_CATS_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {

	public:
		Cat();
		Cat(Cat const &src);
		~Cat();

		Cat &operator=(Cat const &rhs);

		void makeSound();
		void setIdea(std::string idea, int index);
		std::string getIdea(int index);

	private:
		Brain* m_brain;
};


#endif
