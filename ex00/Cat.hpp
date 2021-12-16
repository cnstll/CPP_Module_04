#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <string>

class Cat : public Animal {

	public:

		Cat( std::string type="Cat" );
		Cat( Cat const & src );
		virtual ~Cat( void );

		Cat	&operator= ( Cat const & rhs );
		virtual void	makeSound( void ) const;
};
#endif