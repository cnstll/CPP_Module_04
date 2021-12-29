#include "AMateria.hpp"
#include "Ice.hpp"
#include <iostream>

Ice::Ice( std::string const & type ) : _type(type){
	
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

std::string const & Ice::getType(void) const{

	return _type;
};

void Ice::setType( std::string const & type) {

	_type = type;
};

Ice	&Ice::operator= ( const Ice & rhs ){

	this->setType(rhs.getType());
	return *this;
};

Ice* Ice::clone() const{

	Ice *iceClone = new Ice;

	iceClone->setType(this->getType());
	return (iceClone);
};

void Ice::use(ICharacter& target){

	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName() << " *\n";
};