NAME	=	account

CXX	=	c++
CXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

SRC	=	tests.cpp Account.cpp
OBJ	=	$(SRC:.cpp=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CXX) $^ -o $@

$(OBJ)	:	$(SRC)
	$(CXX) $(CXFLAGS) $^ -c

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re