#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "Character.hpp"

class AMateria {

	public:

		AMateria( void );
		AMateria( AMateria const & src );
		AMateria(std::string const & type);
		virtual ~AMateria( void );
		std::string const & getType() const = 0;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
		AMateria	&operator= ( AMateria const & rhs );

};
#endif
