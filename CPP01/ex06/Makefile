NAME	=	harlFilter

CXX		=	c++
CXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g

SRC		=	main.cpp Harl.cpp
OBJ		=	$(SRC:.cpp=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CXX) $^ -o $@

%.o		:	%.cpp
	$(CXX) $(CXFLAGS) $< -c

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clear fclean re