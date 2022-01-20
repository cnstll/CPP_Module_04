#include "Dog.hpp"
#include <iostream>

Dog::Dog( std::string type ) : Animal(type), _brain(new Brain())
{

	std::cout << "Dog - Default constructor called\n";
	return ;
};

void Dog::deepCopy( Dog const & src ){

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

Dog::Dog( Dog const & src ){

	std::cout << "Dog - Copy constructor called\n";
	Dog::deepCopy( src );
	return ;
};

Dog::~Dog( void ){

	std::cout << "Dog - Destructor called\n";
	delete _brain;
	return;
};

Dog	&Dog::operator= ( Dog const & rhs ){

	if (this != &rhs)
	{
		deepCopy(rhs);
	}
	return *this;
};

void	Dog::makeSound( void ) const
{
	std::cout << "The " << getType() << " does: Woof (**Noise**)\n";
};
