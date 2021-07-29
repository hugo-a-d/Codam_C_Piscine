Name = rush-02

SRC = main.c ft_atoi.c ft_strcmp.c ft_strlen.c make_numb_index_two.c make_numb_index_.c read_file.c 

HDR = ../headers/header.h

CC = gcc

CFLAGS = -Wextra -Werror -Wall

all: $(NAME)
	@gcc $(CFLAGS) -o $(NAME) $(SRC)

clean:

fclean:	clean
	@/bin/rm -f $(NAME)

re: fclean all

.phony: clean

.phony: fclean