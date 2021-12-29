#include "AMateria.hpp"
#include <iostream>


AMateria::AMateria(std::string const & type){};
AMateria::~AMateria( void ){

	std::cout << "AMateria - Destructor called\n";
	return;
};

AMateria* AMateria::clone() const{};

void AMateria::use(ICharacter& target){};

std::string const & AMateria::getType() const{};