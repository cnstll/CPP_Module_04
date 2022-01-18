#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>

class Brain {

	public:

		Brain( void);
		Brain( Brain const & src );
		~Brain( void );

		Brain	&operator= ( Brain const & rhs );
		std::string getIdeas( int index) const;
		void	copyIdeas( Brain const * src );
		void	setAnIdea( int index, std::string idea );

	protected:
		std::string	ideas[100];

};
#endif
