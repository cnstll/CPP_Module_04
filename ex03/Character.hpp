#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AMateria.hpp"

class ICharacter {

	public:

		ICharacter( void );
		ICharacter( ICharacter const & src );
		~ICharacter( void );
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
		ICharacter	&operator= ( ICharacter const & rhs );

	private:

};
#endif
