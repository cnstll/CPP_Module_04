#ifndef CHARACTER_HPP
#define CHARACTER_HPP
//#include "AMateria.hpp"
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

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		Character	&operator= ( Character const & rhs );
		AMateria	*getInventoryMateria(int index);	
		bool	inventoryIsFull( void );
		int		getIndexOfNextEmptySlot( void );
		void	fillInventory(AMateria *newMateria, int index);
		void	dropFromInventory(int index);
		void	destroyInventory( AMateria **inventory );

	private:
		std::string _name;
		AMateria **_inventory;
		bool	_inventoryState[4];
};
#endif
