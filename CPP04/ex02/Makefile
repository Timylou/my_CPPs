NAME	=	abstract

CXX		=	c++
CXFLAGS	=	-Wall -Werror -Wextra -g

SRC		=	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp brain.cpp
OBJ		=	$(SRC:.cpp=.o)


all		:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CXX) $^ -o $@

%.o		:	%.cpp
	$(CXX) $(CXFLAGS) $^ -c

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re