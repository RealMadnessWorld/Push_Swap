NAME = push_swap

CC = gcc
FLAGS = -Wall -Werror -Wextra -g
INCLUDES = -I ./Includes
OBJ_PATH = ./objects
SRC_PATH = ./srcs
SRC_PUSH_SWAP = lst_func.c moves.c push_swap.c tools.c

OBJ_NAME = $(SRC_PUSH_SWAP: .c=.o)

SRC = $(addprefix $(SRC_PATH)/, $(SRC_PUSH_SWAP))
OBJ = $(addprefix $(OBJ_PATH)/, $(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(FLAGS) $(OBJ) $(INCLUDES) -o $(NAME)
		@echo "\x1b[32mIt's done. Piss off!!!\033[0m"

$(SRC_PATH)/%.c : $(OBJ_PATH)/%.o
		@mkdir -p $(OBJ_PATH)
		@$(CC) -c $(FLAGS) $(INCLUDES) -o $< $@
		@echo "\x1b[33myeah yeah... I'm working😡\033[0m"

clean:
		@rm -f $(OBJ)
		@echo "\x1b[31mDECAPITATIOOOOOOOOOON!!!!!\x1b[0m"

fclean: clean
		@rm -f $(NAME)
		@echo "\x1b[31mYou killed it😵\x1b[0m"

re: fclean all

.PHONY: all, clean, fclean, re