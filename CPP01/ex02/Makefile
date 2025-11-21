NAME	=	brain

CC	=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g

SRC	=	main.cpp
OBJ	=	$(SRC:.cpp=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CC) $^ -o $@

$(OBJ)	:	$(SRC)
	$(CC) $(CFLAGS) $^ -c

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re