#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {

	{
		std::cout << "******************************" << std::endl;
		std::cout << "*********Basic tests**********" << std::endl;
		std::cout << "******************************" << std::endl;

		Dog husky;
		Cat bengal;

		husky.makeSound();
		Animal *animal = &husky;
		animal->makeSound();
		animal = &bengal;
		animal->makeSound();
		bengal.makeSound();

		animal = new Dog;

		animal->makeSound();

		WrongCat strayCat;
		WrongAnimal *heapStrayCat = new WrongCat;

		strayCat.makeSound();
		heapStrayCat->makeSound();

		delete heapStrayCat;
		delete animal;
	}

	{
		Animal *herd[10];

		std::cout << "******************************" << std::endl;
		std::cout << "*******Array of Animal********" << std::endl;
		std::cout << "******************************" << std::endl;

		for (int i = 0; i < 5; i++) {
			herd[i] = new Dog;
			herd[i]->makeSound();
		}
		for (int i = 0; i < 5; i++) {
			herd[i + 5] = new Cat;
			herd[i + 5]->makeSound();
		}

		for (int i = 0; i < 10; i++)
			delete herd[i];
	}

	std::cout << "******************************" << std::endl;
	std::cout << "********Deep copy test********" << std::endl;
	std::cout << "******************************" << std::endl;

	Cat *original = new Cat;
	Cat *ptrCopyCat;
	Cat copyCat;

	ptrCopyCat = original;

	ptrCopyCat->setIdea("I'm the shadow copy cat", 2);
	std::cout << ptrCopyCat->getIdea(2) << std::endl;
	original->setIdea("I'm the original cat", 19);
	std::cout << original->getIdea(19) << std::endl;
	std::cout << original->getIdea(2) << std::endl;

	copyCat = *original;
	copyCat.setIdea("I'm the deep copy cat", 0);
	std::cout << copyCat.getIdea(0) << std::endl;
	std::cout << original->getIdea(0) << std::endl;

	delete original;

	return 0;
}