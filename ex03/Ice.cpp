//#include "AMateria.hpp"
#include "Ice.hpp"
#include <iostream>

Ice::Ice( std::string const & typeValue ) : type(typeValue){
	
	std::cout << "Ice - Default constructor called\n";
	return ;
};

Ice::Ice( Ice const & src ){

	std::cout << "Ice - Copy constructor called\n";
	this->setType(src.getType());
	return ;
};

Ice::~Ice( void ){

	std::cout << "Ice - Destructor called\n";
	return;
};

std::string const & Ice::getType(void) const{

	return type;
};

void Ice::setType( std::string const & type) {

	this->type = type;
};

Ice	&Ice::operator= ( const Ice & rhs ){

	(void)rhs;
	return *this;
};

Ice* Ice::clone() const{

	Ice *iceClone = new Ice();

	iceClone->setType(this->getType());
	return (iceClone);
};

void Ice::use(ICharacter& target){

	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName() << " *\n";
};