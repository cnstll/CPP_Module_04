#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria {

	public:

		Ice( void );
		Ice( Ice const & src );
		~Ice( void );

		std::string const & getType() const; //Returns the materia type
		virtual Ice* clone() const = 0;
		virtual void use(ICharacter& target);
		Ice	&operator= ( Ice const & rhs );

	private:
		std::string	_type;

};
#endif
