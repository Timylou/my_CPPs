NAME	=	interface

CXX		=	c++
CXFLAGS	=	-Wall -Wextra -Werror -g

SRC		=	main.cpp Materia.cpp Character.cpp Ice.cpp Cure.cpp
OBJ		=	$(SRC:.cpp=.o)

INCLUDE	=	-Iinclude

all		:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CXX) $^ -o $@

%.o		:	src/%.cpp
	$(CXX) $(INCLUDE) $(CXFLAGS) $< -c

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re