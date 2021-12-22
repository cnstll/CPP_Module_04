#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

IMateriaSource::IMateriaSource( void ){

	std::cout << "IMateriaSource - Default constructor called\n";
	return ;
};

IMateriaSource::IMateriaSource( IMateriaSource const & src ){

	std::cout << "IMateriaSource - Copy constructor called\n";
	*this = src;
	return ;
};

IMateriaSource::~IMateriaSource( void ){

	std::cout << "IMateriaSource - Destructor called\n";
	return;
};

IMateriaSource	&IMateriaSource::operator= ( IMateriaSource const & rhs ){

	//this-> = ;
	return *this;
};