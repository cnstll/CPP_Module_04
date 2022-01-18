//#include "AMateria.hpp"
#include "Cure.hpp"
//#include "ICharacter.hpp"
#include <iostream>

Cure::Cure( std::string const & typeValue ) : type(typeValue){
	
	std::cout << "Cure - Default constructor called\n";
	return ;
};

Cure::Cure( Cure const & src ){

	std::cout << "Cure - Copy constructor called\n";
	this->setType(src.getType());
	return ;
};

Cure::~Cure( void ){

	std::cout << "Cure - Destructor called\n";
	return;
};

std::string const & Cure::getType(void) const{

	return type;
};

void Cure::setType( std::string const & type) {

	this->type = type;
};

Cure	&Cure::operator= ( const Cure & rhs ){

	(void)rhs;
	return *this;
};

Cure* Cure::clone() const{

	Cure *cureClone = new Cure();

	cureClone->setType(this->getType());
	return (cureClone);
};

void Cure::use(ICharacter& target){

	std::cout << "* heals ";
	std::cout << target.getName() << "’s wounds *\n";
};