#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "AMateria.hpp"

class IMateriaSource {

	public:

		IMateriaSource( void );
		IMateriaSource( IMateriaSource const & src );
		~IMateriaSource( void );
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
		IMateriaSource	&operator= ( IMateriaSource const & rhs );
};
#endif
