#include "WrongAnimal.hpp" 
#include <iostream>

WrongAnimal::WrongAnimal( std::string input_type ) : type(input_type)
{

	std::cout << "WrongAnimal - Default constructor called\n";
	return ;
};

WrongAnimal::WrongAnimal( WrongAnimal const & src ){

	std::cout << "WrongAnimal - Copy constructor called\n";
	*this = src;
	return ;
};

WrongAnimal::~WrongAnimal( void ){

	std::cout << "WrongAnimal - Destructor called\n";
	return;
};

WrongAnimal	&WrongAnimal::operator= ( WrongAnimal const & rhs ){

	this->type = rhs.getType();
	return *this;
};

std::string	WrongAnimal::getType( void ) const
{
	return type;
};

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "The " << getType() << " does: ??? (**Noise**)\n";
};