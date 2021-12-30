#include "AMateria.hpp"
#include <iostream>

AMateria::~AMateria( void ){

	std::cout << "AMateria - Destructor called\n";
	return;
};

AMateria* AMateria::clone() const{};

void AMateria::use(ICharacter& target){return ;};

AMateria::AMateria(std::string const & type){void(type); return 0;};

std::string const & AMateria::getType() const{return "";};