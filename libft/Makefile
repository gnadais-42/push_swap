# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gnadais- <gnadais-@student.42porto.co      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 16:38:17 by gnadais-          #+#    #+#              #
#    Updated: 2025/10/20 14:51:26 by gnadais-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
COMP = cc
CFLAGS = -Wall -Werror -Wextra

SRC = ./ft_isalpha.c ./ft_isdigit.c ./ft_isalnum.c ./ft_isascii.c ./ft_isprint.c \
	./ft_strlen.c ./ft_memset.c ./ft_bzero.c ./ft_memcpy.c ./ft_memmove.c ./ft_strlcpy.c \
	./ft_strlcat.c ./ft_toupper.c ./ft_tolower.c ./ft_strchr.c ./ft_strrchr.c \
	./ft_strncmp.c ./ft_memchr.c ./ft_memcmp.c ./ft_strnstr.c ./ft_atoi.c ./ft_calloc.c \
	./ft_strdup.c ./ft_substr.c ./ft_strjoin.c ./ft_strtrim.c ./ft_split.c ./ft_itoa.c \
	./ft_strmapi.c ./ft_striteri.c ./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c \
	./ft_putnbr_fd.c ./ft_printf.c printf_utils/conversion.c printf_utils/putchar_count.c \
	printf_utils/puthex_count.c printf_utils/putnbr_count.c printf_utils/putptr_count.c \
	printf_utils/putstr_count.c GNL/get_next_line_bonus.c GNL/get_next_line_utils_bonus.c
OBJ = $(SRC:.c=.o)
BSRC = ./ft_lstnew_bonus.c ./ft_lstadd_front_bonus.c ./ft_lstsize_bonus.c \
	./ft_lstlast_bonus.c ./ft_lstadd_back_bonus.c ./ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ./ft_lstiter_bonus.c ./ft_lstmap_bonus.c
BOBJ = $(BSRC:.c=.o)
INC = ./libft.h

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o: %.c $(INC)
	$(COMP) $(CFLAGS) -I. -c $< -o $@

bonus: .bonus

.bonus: $(OBJ) $(BOBJ)
	ar -rcs $(NAME) $(OBJ) $(BOBJ)
	touch .bonus

clean:
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME) .bonus

re: fclean all

.PHONY: all clean fclean re bonus
