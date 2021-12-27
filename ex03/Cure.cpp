#include "./includes/AMateria.hpp"
#include "./includes/Cure.hpp"
#include <iostream>

Cure::Cure( std::string const & type ) : _type(type){
	
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

std::string const & Cure::getType(void) const{

	return _type;
};

void Cure::setType( std::string const & type) {

	_type = type;
};

Cure	&Cure::operator= ( const Cure & rhs ){

	this->setType(rhs.getType());
	return *this;
};

Cure* Cure::clone() const{

	Cure *cureClone = new Cure;

	cureClone->setType(this->getType());
	return (cureClone);
};

void Cure::use(ICharacter& target){

	std::cout << "* heals ";
	std::cout << target.getName() << "’s wounds *\n";
};