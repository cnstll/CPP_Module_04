#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
#include <string>

class WrongCat : public WrongAnimal {

	public:

		WrongCat( std::string type="WrongCat" );
		WrongCat( WrongCat const & src );
		virtual ~WrongCat( void );

		WrongCat	&operator= ( WrongCat const & rhs );
		void	makeSound( void ) const;
};
#endif