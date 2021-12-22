#include "Character.hpp"
#include <iostream>

ICharacter::ICharacter( void ){

	std::cout << "ICharacter - Default constructor called\n";
	return ;
};

ICharacter::ICharacter( ICharacter const & src ){

	std::cout << "ICharacter - Copy constructor called\n";
	*this = src;
	return ;
};

ICharacter::~ICharacter( void ){

	std::cout << "ICharacter - Destructor called\n";
	return;
};

ICharacter	&ICharacter::operator= ( ICharacter const & rhs ){

	//this-> = ;
	return *this;
};