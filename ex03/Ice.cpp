#include "Ice.hpp"
#include <iostream>
#include "AMateria.hpp"

Ice::Ice( void ){

	std::cout << "Ice - Default constructor called\n";
	return ;
};

Ice::Ice( Ice const & src ){

	std::cout << "Ice - Copy constructor called\n";
	*this = src;
	return ;
};

Ice::~Ice( void ){

	std::cout << "Ice - Destructor called\n";
	return;
};

Ice	&Ice::operator= ( Ice const & rhs ){

	this-> = ;
	return *this;
};

