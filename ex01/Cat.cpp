#include "Cat.hpp"
#include <iostream>

Cat::Cat( std::string type ) : Animal(type), _brain(new Brain())
{
	std::cout << "Cat - Default constructor called\n";
	return ;
};

void Cat::deepCopy( Cat const & src ){

	delete _brain;
	if (src._brain)
	{
		this->type = src.getType();
		this->_brain = new Brain();
		this->_brain->copyIdeas(src._brain);
	}
	else
		this->_brain = NULL;
};

Cat::Cat( Cat const & src ){

	std::cout << "Cat - Copy constructor called\n";
	*this = src;
	return ;
};

Cat::~Cat( void ){

	std::cout << "Cat - Destructor called\n";
	delete _brain;
	return;
};

Cat	&Cat::operator= ( Cat const & rhs ){

	if (this != &rhs)
	{
		deepCopy(rhs);
	}
	return *this;
};

void	Cat::makeSound( void ) const
{
	std::cout << "The " << getType() << " does: Meow (**Noise**)\n";
};
