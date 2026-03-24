NAME	=	form

CXX		=	c++
CXFLAGS	=	-Wall -Wextra -Werror -g

SRC		=	main.cpp Bureaucrat.cpp Form.cpp
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

.PHONY	:	all clean fclean re