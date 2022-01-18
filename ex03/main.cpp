#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;
	std::cout << "Filling Materia Source...\n";
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	Cure cureYips("cure Yips");	
	Cure *cureClone = cureYips.clone();	
	std::cout << cureClone->getType() << std::endl;
	src->learnMateria(cureClone);

	std::cout << std::endl;
	std::cout << "Create characters Jim and Bob...\n";
	ICharacter* me = new Character("Jim");
	ICharacter* bob = new Character("Bob");

	std::cout << std::endl;
	std::cout << "Create new materia to be added to source and used by the character...\n";
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	tmp = src->createMateria("cure Yips");
	me->equip(tmp);

	std::cout << std::endl;
	std::cout << "Using the new materia on Bob...\n";
	std::cout << "(use slot 0): ";
	me->use(0, *bob);
	std::cout << "(use slot 1): ";
	me->use(1, *bob);
	std::cout << "(use slot 2): ";
	me->use(2, *bob);
	std::cout << "(use slot 3): ";
	me->use(3, *bob);
	std::cout << "(use slot 42): ";
	me->use(42, *bob);

	std::cout << std::endl;
	std::cout << "(unequip slot 42): ";
	me->unequip(42);
	me->unequip(3);
	me->equip(tmp);
	me->use(3, *bob);

	std::cout << std::endl;
	std::cout << "End of simulation...\n";
	delete bob;
	delete me;
	delete src;
	return 0;
}
