#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : virtual public AMateria {

	public:

		Cure( void );
		Cure( Cure const & src );
		~Cure( void ); //make it virtual ?
		std::string const & getType() const; //Returns the materia type
		virtual Cure* clone() const = 0;
		virtual void use(ICharacter& target);
		Cure	&operator= ( Cure const & rhs );

	private:
		std::string	_type;

};
#endif
