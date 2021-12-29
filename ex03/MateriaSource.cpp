#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource( void ){

	std::cout << "MateriaSource - Default constructor called\n";
	_sourceMemory = new AMateria*[4];
	_activeMemSlot = 0;
	return ;
};

AMateria **MateriaSource::deepCopy( MateriaSource const & src ){

	AMateria **_sourceMemoryDup = new AMateria*[4];

	if (src._sourceMemory)	
	{
		int srcCurrentMemSlot = src.getSourceCurrentMemSlot();
		setSourceCurrentMemSlot(srcCurrentMemSlot);
		for (int i = 0; i < srcCurrentMemSlot; i++)
		{
			_sourceMemoryDup[i] =
				src._sourceMemory[i]->clone();
		}
	}
	else
	{
		setSourceCurrentMemSlot(0);
		_sourceMemoryDup = nullptr;	
	}
	return _sourceMemoryDup;
};

MateriaSource::MateriaSource( MateriaSource const & src ){

	std::cout << "MateriaSource - Copy constructor called\n";
	deepCopy(src);
	return ;
};

MateriaSource::~MateriaSource( void ){

	std::cout << "MateriaSource - Destructor called\n";
	return;
};

int	MateriaSource::getSourceCurrentMemSlot( void ) const{

	return _activeMemSlot;
};

void	MateriaSource::setSourceCurrentMemSlot( int memSlot ){
	_activeMemSlot = memSlot;
};

void MateriaSource::learnMateria(AMateria *materiaToLearn){

	int currentMemSlot = getSourceCurrentMemSlot();
	AMateria *copy = materiaToLearn; //Check AMateria assignement

	delete _sourceMemory[currentMemSlot];
	_sourceMemory[currentMemSlot] = copy;
	currentMemSlot++;
	if (currentMemSlot > 3)
		setSourceCurrentMemSlot(0);
	else
		setSourceCurrentMemSlot(++currentMemSlot);
};

AMateria* MateriaSource::createMateria(std::string const & type){

	AMateria *createdMateria;

	return (createdMateria);
};

MateriaSource	&MateriaSource::operator= ( MateriaSource const & rhs ){

	if (this != &rhs)
	{
		deepCopy(rhs);
	}
	return *this;
};