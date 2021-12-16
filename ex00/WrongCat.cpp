#include <iostream>
#include "WrongCat.hpp" 

WrongCat::WrongCat( std::string type ) : WrongAnimal(type)
{
	std::cout << "WrongCat - Default constructor called\n";
	return ;
};

WrongCat::WrongCat( WrongCat const & src ){

	std::cout << "WrongCat - Copy constructor called\n";
	*this = src;
	return ;
};

WrongCat::~WrongCat( void ){

	std::cout << "WrongCat - Destructor called\n";
	return;
};

WrongCat	&WrongCat::operator= ( WrongCat const & rhs ){

	this->type = rhs.getType();
	return *this;
};

void	WrongCat::makeSound( void ) const
{
	std::cout << "The " << getType() << " does: Meow (**Noise**)\n";
};