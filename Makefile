NAME = push_swap

FLAGS = -Wall -Werror -Wextra -g
SRC_PUSH_SWAP = lst_func.c swap.c push_swap.c tools.c push.c rot.c\
				rev_rot.c check_argv.c pre_sort.c short_sort.c\
				trackers.c big_boy_sort.c Super_Saiyan_Sort.c

OBJ = $(SRC_PUSH_SWAP:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(OBJ) -o $(NAME)
	@echo "\x1b[32mCongrats!!!! It compiled!!!😊\x1b[0m"

clean:
	@rm -f $(OBJ)
	@echo "\x1b[31mNOOOOOOOOO!!!!!\x1b[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\x1b[31m*Gets dragged through a portal to hell*\x1b[0m"

re: fclean all

.PHONY: all, clean, fclean, re
