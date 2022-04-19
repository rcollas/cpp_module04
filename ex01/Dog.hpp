#ifndef CPP_MODULE04_DOG_HPP
#define CPP_MODULE04_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

	public:
		Dog();
		Dog(Dog const &src);
		~Dog();

		Dog &operator=(Dog const &rhs);

		void makeSound();
		void setIdea(std::string idea, int index);
		std::string getIdea(int index);

	private:
		Brain* m_brain;
};


#endif
