NAME = push_swap
BONUS = checker

COMPILER = cc -Wall -Werror -Wextra
SRC = main.c push_swap_utils/cost.c push_swap_utils/push.c push_swap_utils/swap.c push_swap_utils/rotate.c \
      push_swap_utils/sort.c push_swap_utils/list_utils.c push_swap_utils/parser.c push_swap_utils/turk.c\
      push_swap_utils/turk_utils.c push_swap_utils/rule_caller.c push_swap_utils/validator.c
OBJ = $(SRC:.c=.o)
BSRC = bonus/checker.c push_swap_utils/parser.c push_swap_utils/push.c push_swap_utils/swap.c push_swap_utils/rotate.c push_swap_utils/validator.c
BOBJ = $(BSRC:.c=.o)
INC = push_swap.h
LIB = libft/libft.a

all: $(NAME)

$(LIB):
	@make bonus -C libft

$(NAME): $(OBJ) $(LIB)
	$(COMPILER) $(OBJ) -o $(NAME) $(LIB)

%.o: %.c $(INC)
	$(COMPILER) -I. -c $< -o $@

bonus: .bonus

.bonus: $(BOBJ) $(LIB)
	$(COMPILER) $(BOBJ) -o $(BONUS) $(LIB)
	@touch .bonus

clean: 
	@rm -f $(OBJ) $(BOBJ)
	@make clean -C libft

fclean: clean
	@rm -f $(NAME) $(BONUS)
	@make fclean -C libft
	@rm -f .bonus

re: fclean all

.PHONY: all bonus clean fclean re
