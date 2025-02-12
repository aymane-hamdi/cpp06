C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = 	main.cpp\
			convert.cpp ScalarConverter.cpp\

OBJ = $(SRC:.cpp=.o)

NAME = converte

all: $(NAME)

$(NAME):$(OBJ)
	$(C++) $(FLAGS) $(OBJ) -o $(NAME) 

%.o: %.cpp ScalarConverter.hpp
	$(C++) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re