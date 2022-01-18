#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria {

	public:

		Ice( std::string const & type = "ice");
		Ice( Ice const & src );
		virtual ~Ice( void );

		virtual std::string const & getType( void ) const;
		void setType( std::string const & type);
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
		Ice	&operator= ( const Ice & rhs );

	private:
		std::string	type;

};
#endif
