C++ = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 
SRC = 	main.cpp\
			Serializer.cpp\

OBJ = $(SRC:.cpp=.o)

NAME = Serializer

all: $(NAME)

$(NAME):$(OBJ)
	$(C++) $(FLAGS) $(OBJ) -o $(NAME) 

%.o: %.cpp Serializer.hpp
	$(C++) $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re