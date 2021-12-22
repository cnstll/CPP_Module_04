#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria( void ){

	std::cout << "AMateria - Default constructor called\n";
	return ;
};

AMateria::AMateria( AMateria const & src ){

	std::cout << "AMateria - Copy constructor called\n";
	*this = src;
	return ;
};

AMateria::~AMateria( void ){

	std::cout << "AMateria - Destructor called\n";
	return;
};

AMateria	&AMateria::operator= ( AMateria const & rhs ){

	this-> = ;
	return *this;
};

