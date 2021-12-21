#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal{

	public:

		Dog( std::string type="Dog" );
		Dog( Dog const & src );
		void deepCopy( Dog const & src );
		virtual ~Dog( void );

		Dog	&operator= ( Dog const & rhs );
		virtual void	makeSound( void ) const;

	private:
		Brain *_brain;
};
#endif
