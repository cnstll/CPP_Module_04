#include "Dog.hpp"
#include <iostream>

Dog::Dog( std::string type ) : Animal(type)
{

	std::cout << "Dog - Default constructor called\n";
	return ;
};

Dog::Dog( Dog const & src ){

	std::cout << "Dog - Copy constructor called\n";
	*this = src;
	return ;
};

Dog::~Dog( void ){

	std::cout << "Dog - Destructor called\n";
	return;
};

Dog	&Dog::operator= ( Dog const & rhs ){

	this->type = rhs.getType();
	return *this;
};

void	Dog::makeSound( void ) const
{
	std::cout << "The " << getType() << " does: Woof (**Noise**)\n";
};