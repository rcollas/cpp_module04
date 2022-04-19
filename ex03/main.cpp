#include "Ice.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "LinkedList.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

LinkedList itemHistory;

int main() {

//	Ice* snowBall = new Ice;
//	Cure* potion = new Cure;
//	AMateria* snowBallCopy;
//
//	snowBallCopy = snowBall->clone();
//
//	Character brockovicz("Brockovicz");
//
//	ICharacter* arsene = new Character("Arsene");
//
//	brockovicz.equip(snowBall);
//	brockovicz.equip(potion);
//	brockovicz.equip(snowBallCopy);
//	brockovicz.unequip(0);
//	brockovicz.unequip(1);
//	brockovicz.unequip(2);
//	arsene->equip(snowBallCopy);
//	brockovicz.equip(snowBallCopy);
//	brockovicz.use(0, *arsene);
//	brockovicz.use(1, brockovicz);
//	brockovicz.use(2, brockovicz);
//
//	delete arsene;
//
//	MateriaSource* src = new MateriaSource();
//	src->learnMateria(new Ice());
//	src->learnMateria(new Cure());
//	src->learnMateria(new Cure());
//	src->learnMateria(new Cure());
//	src->learnMateria(new Cure());
//	ICharacter* me = new Character("me");
//	AMateria* tmp;
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//	ICharacter* bob = new Character("bob");
//	me->use(0, *bob);
//	me->use(1, *bob);
//	delete bob;
//	delete me;
//	delete src;

	MateriaSource* ori = new MateriaSource();
	MateriaSource copy(*ori);

	ori->learnMateria(new Ice());
	copy.learnMateria(new Cure());

	AMateria* ice = ori->createMateria("ice");
	AMateria* cure = ori->createMateria("cure");
	ICharacter* rob = new Character("rob");
	ICharacter* antoine = new Character("antoine");
	rob->equip(ice);
	rob->equip(cure);
	rob->use(0, *antoine);
	rob->use(1, *antoine);

	delete ori;
	delete rob;
	delete antoine;

	return 0;
}
