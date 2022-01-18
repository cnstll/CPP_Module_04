NAME = a.out

SRCS = main.cpp  \
	Animal.cpp \
	Brain.cpp \
	Dog.cpp \
	Cat.cpp 

OBJS = $(SRCS:.cpp=.o)

CXX=c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

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
