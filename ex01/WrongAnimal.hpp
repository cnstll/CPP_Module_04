#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <string>

class WrongAnimal {

	public:

		WrongAnimal( std::string input_type="Undefined wrong animal" );
		WrongAnimal( WrongAnimal const & src );
		virtual ~WrongAnimal( void );

		WrongAnimal	&operator= ( WrongAnimal const & rhs );
		std::string	getType( void ) const;
		void	makeSound( void ) const;

	protected:
		std::string type;

};
#endif
