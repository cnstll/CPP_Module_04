#include "Animal.hpp" 
#include "Cat.hpp" 
#include "Dog.hpp" 
#include "WrongAnimal.hpp" 
#include "WrongCat.hpp" 
#include <iostream>
#include <string>
#define SIZE 2 

int main( void )
{
    Animal *AnimArray[SIZE];

	for (int index=0; index < SIZE/2; index++)
    {
        AnimArray[index] = new Cat();
    }
	for (int index=SIZE/2; index < SIZE; index++)
    {
        AnimArray[index] = new Dog();
    }

    std::cout << "\n>> Accessing makeSound in array of animals:\n";
    AnimArray[0]->makeSound();
    AnimArray[1]->makeSound();
    
    {
        std::cout << "\n>> Can we Deep Copy Dog ?\n";
        std::cout << "\n>> Creating a original version of Dog...\n";
        Dog og;
        {
            std::cout << "\n>> Creating a copy of Dog...\n";
            Dog copy(og);
            std::cout << "\n>> Destroying copy of Dog...\n";
        }
        std::cout << "\n>>...Without destroying original Dog.\n";
        og.makeSound();
        std::cout << "\n>> Deep Copy test done\n";
    }
    std::cout << "\n>> Deleting elements in the array of animals...\n";
	for (int index=0; index < SIZE; index++)
    {
        delete AnimArray[index];
    }
    
    return (0);
}