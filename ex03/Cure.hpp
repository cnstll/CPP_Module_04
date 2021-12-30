#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
//#include "ICharacter.hpp"

class Cure : public AMateria {

	public:

		Cure( void );
		Cure( std::string const & type);
		Cure( Cure const & src );
		virtual ~Cure( void );

		virtual std::string const & getType( void ) const;
		void setType( std::string const & type);
		virtual Cure* clone() const;
		virtual void use(ICharacter & target);
		Cure	&operator= ( const Cure & rhs );

	private:
		std::string	_type;

};
#endif
