#include "./includes/Character.hpp"
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
	this->_inventory = nullptr;
};

Character::Character( Character const & src ){

	std::cout << "Character - Copy constructor called\n";
	if (this != &src)
		deepCopy(src);
	return ;
};

void	Character::destroyInventory( AMateria **inventory )
{
	for (int i = 0; i < 4; i++)
	{
		delete inventory[i];
	}
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


bool	*Character::getInventoryState( void ){

	return &_inventoryState[0]; 
};	

void	Character::setInventoryState(int index, bool state){

	_inventoryState[index] = state;
};

int		Character::getIndexOfNextEmptySlot( void ){

	int	indexOfEmptySlot = 0;
	for (int i = 0; i < 4; i++)
	{
		indexOfEmptySlot = i;
		if (getInventoryState()[i] == SLOT_EMPTY)	
			break;
	}
	if (indexOfEmptySlot == 4)
		indexOfEmptySlot == -1;
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

	int currentInventoryIndex = getIndexOfNextEmptySlot();

	if (inventoryIsFull() == false)
	{
		fillInventory(m, currentInventoryIndex);
		setInventoryState(currentInventoryIndex, 1);
	}
};

void Character::unequip(int idx){

	setInventoryState(idx, 0);
};

void Character::use(int idx, Character& target){

	if (getInventoryState()[idx] == 1)
	{
		(getInventoryMateria(idx))->use(target);
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