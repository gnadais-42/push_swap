NAME = push_swap

COMPILER = cc -Wall -Werror -Wextra
SRC = main.c push_swap_utils/cost.c push_swap_utils/push.c push_swap_utils/swap.c push_swap_utils/rotate.c \
      push_swap_utils/sort.c push_swap_utils/list_utils.c push_swap_utils/parser.c push_swap_utils/turk.c\
      push_swap_utils/turk_utils.c push_swap_utils/rule_caller.c
OBJ = $(SRC:.c=.o)
INC = push_swap.h
LIB = libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIB)
	$(COMPILER) $(OBJ) -o $(NAME) $(LIB)

%.o: %.c $(INC)
	$(COMPILER) -I. -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
