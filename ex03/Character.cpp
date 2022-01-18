#include "Character.hpp"
//#include "AMateria.hpp"
#include <iostream>

Character::Character( std::string name ) : _name(name)
{

	std::cout << "Character - Default constructor called\n";
	_inventory = new  AMateria*[4];
	return ;
};

void Character::deepCopy(Character const & src){

if (src._inventory)
{
	this->_inventory = new  AMateria*[4];
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = src._inventory[i];
	}
}
else
	this->_inventory = 0;
};

Character::Character( Character const & src ){

	std::cout << "Character - Copy constructor called\n";
	*this = src;
	return ;
};

void	Character::destroyInventory( AMateria **inventory )
{
	delete [] inventory;
};

Character::~Character( void ){

	std::cout << "Character - Destructor called\n";
	destroyInventory(this->_inventory);
	return;
};

std::string const & Character::getName() const {

	return _name;
};

int		Character::getIndexOfNextEmptySlot( void ){

	int	indexOfEmptySlot = 0;
	for (int i = 0; i < 4; i++)
	{
		indexOfEmptySlot = i;
		if (_inventoryState[i] == SLOT_EMPTY)	
			break;
	}
	if (indexOfEmptySlot == 3 && _inventoryState[indexOfEmptySlot] == SLOT_FULL)
		indexOfEmptySlot = -1;
	return (indexOfEmptySlot);
};

bool	Character::inventoryIsFull( void ){

	if (getIndexOfNextEmptySlot() == -1)
		return (true);
	else
		return (false);
};

void	Character::fillInventory(AMateria *newMateria, int index){

	_inventory[index] = newMateria;
};

void	Character::dropFromInventory(int index){

	_inventory[index] = NULL;
};

void Character::equip(AMateria* m){

	if (inventoryIsFull() == false)
	{
		int currentInventoryIndex = getIndexOfNextEmptySlot();
		std::cout << "Adding `" << m->getType() << "` to inventory slot #" << currentInventoryIndex << " of " << this->getName() << "...\n";
		fillInventory(m, currentInventoryIndex);
		_inventoryState[currentInventoryIndex] = SLOT_FULL; 
	}
	else
		std::cout << "Inventory is full! Unequip before adding new materia...\n";
};

void Character::unequip(int idx){

	if (idx < 0 || idx > 3)
	{
		std::cerr << "ERROR: inventory index out of range \n";
		return ;
	}
	else
		std::cout << "Unequip slot #" << idx << " from "<< this->getName() << "'s inventory...\n";
	_inventoryState[idx] = SLOT_EMPTY;
};

void Character::use(int idx, ICharacter& target){

	if (idx < 0 || idx > 3)
	{
		std::cerr << "ERROR: inventory index out of range \n";
		return ;
	}
	if (_inventoryState[idx] == 1)
	{
		_inventory[idx]->use(target);
	}
	else
	{
		std::cout << "* uses its bare hands on ";
		std::cout << target.getName() << " *\n";
	}
};

Character	&Character::operator= ( Character const & rhs ){

	if (this != &rhs)
		deepCopy(rhs);
	return *this;
};