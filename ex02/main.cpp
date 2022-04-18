#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {

	Dog	husky;
	Cat bengal;

	husky.makeSound();
	AAnimal *animal = &husky;
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

	AAnimal* herd[10];

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

	return 0;
}