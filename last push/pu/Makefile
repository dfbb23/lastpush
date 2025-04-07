NAME = push_swap

SRC = big_sort.c check_error.c ft_apply1.c ft_case_ab.c \
      ft_case_ba.c ft_checksorted.c ft_find.c ft_free.c \
      ft_rotate_type.c push_swap.c ft_process.c ft_checkdup.c \
      operasion2.c operation.c operation3.c

LIBFT = ./libft/libft.a

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C libft  

clean:
	rm -f $(OBJ)
	make -C libft clean  

fclean: clean
	rm -f $(NAME)
	make -C libft fclean  

re: fclean all

all: $(NAME)

.PHONY: all clean fclean re
