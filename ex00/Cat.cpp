#include "Cat.hpp"
#include <iostream>

Cat::Cat( std::string type ) : Animal(type)
{
	std::cout << "Cat - Default constructor called\n";
	return ;
};

Cat::Cat( Cat const & src ){

	std::cout << "Cat - Copy constructor called\n";
	*this = src;
	return ;
};

Cat::~Cat( void ){

	std::cout << "Cat - Destructor called\n";
	return;
};

Cat	&Cat::operator= ( Cat const & rhs ){

	this->type = rhs.getType();
	return *this;
};

void	Cat::makeSound( void ) const
{
	std::cout << "The " << getType() << " does: Meow (**Noise**)\n";
};