#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource( void ){

	std::cout << "MateriaSource - Default constructor called\n";
	_sourceMemory = new AMateria*[4];
	_activeMemSlot = 0;
	return ;
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

AMateria *MateriaSource::getMemSlot( void ){

	int currentMemSlot = getSourceCurrentMemSlot();


	return AMateria;
};

int	MateriaSource::getSourceCurrentMemSlot( void ){

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

	//this-> = ;
	return *this;
};