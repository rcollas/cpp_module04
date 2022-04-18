#include "Ice.hpp"
#include "Character.hpp"
#include "Cure.hpp"

int main() {

	Ice* snowBall = new Ice;
	Cure* potion = new Cure;
	AMateria* snowBallCopy;

	snowBallCopy = snowBall->clone();

	Character brockovicz("Brockovicz");

	ICharacter* arsene = new Character("Arsene");

	brockovicz.equip(snowBall);
	brockovicz.equip(potion);
	brockovicz.equip(snowBallCopy);
	brockovicz.unequip(10);
	brockovicz.unequip(1);
	brockovicz.unequip(2);
	brockovicz.use(0, *arsene);
	brockovicz.use(1, brockovicz);

	delete arsene;
}