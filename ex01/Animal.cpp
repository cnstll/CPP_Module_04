#include "Animal.hpp"
#include <iostream>

Animal::Animal( std::string input_type ) : type(input_type)
{

	std::cout << "Animal - Default constructor called\n";
	return ;
};

Animal::Animal( Animal const & src ){

	std::cout << "Animal - Copy constructor called\n";
	*this = src;
	return ;
};

Animal::~Animal( void ){

	std::cout << "Animal - Destructor called\n";
	return;
};

Animal	&Animal::operator= ( Animal const & rhs ){

	this->type = rhs.getType();
	return *this;
};

std::string	Animal::getType( void ) const
{
	return type;
};

void	Animal::makeSound( void ) const
{
	std::cout << "The " << getType() << " does: ??? (**Noise**)\n";
};