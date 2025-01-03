NAME = megaphone


SRCS = megaphone.cpp


OBJS = $(SRCS:.cpp=.o)

CC = c++
FSANTIZE = -fsanitize=address -g3
CFLAGS = -Wall -Wextra -Werror -std=c++98
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: src/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
