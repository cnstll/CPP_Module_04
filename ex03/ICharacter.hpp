#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include "AMateria.hpp"
#include <string>

class ICharacter {

	public:

		//ICharacter( void );
		//ICharacter( ICharacter const & src );
		virtual ~ICharacter() {};
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		//ICharacter	&operator= ( ICharacter const & rhs );

};
#endif