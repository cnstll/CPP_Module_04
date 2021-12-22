#include "Cure.hpp"
#include <iostream>
#include "AMateria.hpp"

Cure::Cure( void ){

	std::cout << "Cure - Default constructor called\n";
	return ;
};

Cure::Cure( Cure const & src ){

	std::cout << "Cure - Copy constructor called\n";
	*this = src;
	return ;
};

Cure::~Cure( void ){

	std::cout << "Cure - Destructor called\n";
	return;
};

std::string const & Cure::getType() const {

	return _type;
};

Cure* Cure::clone() const{

	Cure *clonedMateria = new Cure();
	return clonedMateria;
};

void Cure::use(ICharacter& target){

};

Cure	&Cure::operator= ( Cure const & rhs ){

	this-> = ;
	return *this;
};

