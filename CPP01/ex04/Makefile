NAME	=	replace

CC		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g

SRC		=	main.cpp
OBJ		=	$(SRC:.cpp=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CC) $^ -o $@

%.o		:	%.c
	$(CC) $(CFLAGS) $< -c

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clear fclean re