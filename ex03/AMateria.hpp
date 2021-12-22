#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "Character.hpp"

class AMateria {

	public:

		AMateria( void );
		AMateria( AMateria const & src );
		~AMateria( void );
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		AMateria	&operator= ( AMateria const & rhs );

	protected:
	[...]
};
#endif
