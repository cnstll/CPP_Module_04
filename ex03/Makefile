NAME = a.out

SRCS = main.cpp  \
MateriaSource.cpp \
Ice.cpp \
Cure.cpp \
Character.cpp

OBJS = $(SRCS:.cpp=.o)

CXX=clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

HXXHEADERS = includes

.PHONY: all clean fclean re

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $^ -I ${HXXHEADERS}

clean :
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all
