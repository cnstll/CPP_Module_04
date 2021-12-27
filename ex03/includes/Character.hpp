#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#define SLOT_FULL 1
#define SLOT_EMPTY 0

class Character : public ICharacter {

	public:

		Character( std::string _name="Anonymous");
		void	deepCopy(Character const & src);
		Character( Character const & src );
		virtual ~Character( void );

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, Character& target);
		Character	&operator= ( Character const & rhs );
		AMateria	*getInventoryMateria(int index);	
		bool	*getInventoryState( void );	
		void	setInventoryState(int index, bool state);
		bool	inventoryIsFull( void );
		int		getIndexOfNextEmptySlot( void );
		void	fillInventory(AMateria *newMateria, int index);
		void	dropFromInventory(int index);
		void	destroyInventory( AMateria **inventory );

	private:
		std::string _name;
		AMateria **_inventory;
		bool	_inventoryState[4]{0, 0, 0, 0};
};
#endif
