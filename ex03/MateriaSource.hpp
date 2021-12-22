#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

	public:

		MateriaSource( void );
		MateriaSource( MateriaSource const & src );
		~MateriaSource( void );
		~MateriaSource();
		void learnMateria(AMateria *materiaToLearn);
		AMateria *createMateria(std::string const & type);
		MateriaSource	&operator= ( MateriaSource const & rhs );
		int	getSourceCurrentMemSlot( void );
		void	setSourceCurrentMemSlot( int memSlot );
//		AMateria *getSourceMemorySlot(int index);
		AMateria *getNextMemSlot( void );
	
	private:
		AMateria	**_sourceMemory;
		int	_activeMemSlot;
};
#endif
