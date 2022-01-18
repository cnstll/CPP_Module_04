NAME = a.out

SRCS = main.cpp  \
MateriaSource.cpp \
Ice.cpp \
Cure.cpp \
Character.cpp
#AMateria.cpp

OBJS = $(SRCS:.cpp=.o)

CXX=c++

CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98 -fsanitize=address

#HXXHEADERS = -I ./includes

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $^

clean :
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all
