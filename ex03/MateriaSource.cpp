//#include "AMateria.hpp"
//#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

class AMateria;

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
		_sourceMemoryDup = 0;	
	}
	return _sourceMemoryDup;
};

MateriaSource::MateriaSource( MateriaSource const & src ){

	std::cout << "MateriaSource - Copy constructor called\n";
	deepCopy(src);
	return ;
};

void	MateriaSource::destroySource( void )
{
	for (int i = 0; i < (getSourceCurrentMemSlot() % 4); i++)
	{
		delete _sourceMemory[i];
	}
	delete [] _sourceMemory;
};

MateriaSource::~MateriaSource( void ){

	std::cout << "MateriaSource - Destructor called\n";
	destroySource();
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
	AMateria *copy = materiaToLearn;

	std::cout << "Learning `" << materiaToLearn->getType() << "` on slot " << currentMemSlot << "...\n";
	if (currentMemSlot >= 4)
		delete _sourceMemory[currentMemSlot % 4];
	_sourceMemory[currentMemSlot % 4] = copy;
	currentMemSlot++;
	setSourceCurrentMemSlot(currentMemSlot);
};

int	MateriaSource::findMateriaByType(std::string const typeToFind)
{
	int currentMemSlot = getSourceCurrentMemSlot();
	int indexMateriaFound = -1;
	for (int i = 0; i < currentMemSlot; i++)
	{
		if (_sourceMemory[i % 4]->getType() == typeToFind)
		{
			indexMateriaFound = i % 4;
			break ;
		}
	}
	return indexMateriaFound;
}

AMateria* MateriaSource::createMateria(std::string const & type){

	int indexOfMateria = findMateriaByType(type); 
	AMateria *createdMateria = indexOfMateria != -1 ? _sourceMemory[indexOfMateria] : 0;
	if (indexOfMateria != -1)
		std::cout << "Creating materia `" << type << "` from source #" << indexOfMateria << "...\n";
	else
	{
		std::cout << "Materia creation failed: `" << type << "` unknown...\n";
		return nullptr;
	}
	return (createdMateria);
};

MateriaSource	&MateriaSource::operator= ( MateriaSource const & rhs ){

	if (this != &rhs)
	{
		deepCopy(rhs);
	}
	return *this;
};