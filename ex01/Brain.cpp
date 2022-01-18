#include "Brain.hpp"
#include <iostream>

Brain::Brain( void ){

	std::cout << "Brain - Default constructor called\n";
	return ;
};

Brain::Brain( Brain const & src ){

	std::cout << "Brain - Copy constructor called\n";
	*this = src;
	return ;
};

Brain::~Brain( void ){

	std::cout << "Brain - Destructor called\n";
	return;
};

std::string Brain::getIdeas ( int index ) const {

	if (index < 100 && index >= 0)
		return (ideas[index]);
	else
		return (NULL);
};

void	Brain::copyIdeas( Brain const * src ){

	for (int index=0; index < 100; index++)
		this->ideas[index] = src->getIdeas(index);
}


void	Brain::setAnIdea( int index, std::string idea )
{
	this->ideas[index] = idea;
}

Brain	&Brain::operator= ( Brain const & rhs ){

	copyIdeas(&rhs);
	return *this;
};