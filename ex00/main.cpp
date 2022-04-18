#include "Animal.hpp"
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

	WrongCat strayCat;
	WrongAnimal *heapStrayCat = new WrongCat;

	strayCat.makeSound();
	heapStrayCat->makeSound();

	return 0;
}