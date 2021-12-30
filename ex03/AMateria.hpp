#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "ICharacter.hpp"
#include <string>

class ICharacter;

class AMateria {

	public:

		AMateria(void) {};
		AMateria(std::string const & type);
		virtual ~AMateria( void ) {};
		virtual std::string const & getType() const = 0;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) = 0;
};
#endif