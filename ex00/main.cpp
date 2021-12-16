#include "Animal.hpp" 
#include "Cat.hpp" 
#include "Dog.hpp" 
#include "WrongAnimal.hpp" 
#include "WrongCat.hpp" 
#include <iostream>
#include <string>

int main( void )
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* k = new WrongCat();

    std::cout <<  "\n>> Animal Names: " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << k->getType() << " " << std::endl;
    std::cout <<  "\n>> Animal Noises: " << std::endl;
    i->makeSound();
    j->makeSound();
    k->makeSound();
    std::cout << std::endl;

    delete meta;
    delete i;
    delete j;
    delete k;
    return (0);
}