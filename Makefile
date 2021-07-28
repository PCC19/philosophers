NAME = philo

HEADER_DIR =	includes/

LIBFT_DIR =		libft
LIBFT =			$(LIBFT_DIR)/libft.a


SDIR =	./philo/
ODIR =	./objs/

SRCS =	$(SDIR)main.c\

OBJS =	$(patsubst $(SDIR)%.c, $(ODIR)%.o, $(SRCS))

CC = clang
HEADERS = -I./$(HEADER_DIR) -I./$(LIBFT_DIR)
C_FLAGS = -Wall -Werror -Wextra -g
C_SANIT = -fsanitize=address
L_FLAGS = -L ./libft -lft


$(NAME):	$(OBJS) $(LIBFT)
	$(CC) $(OBJS) $(C_FLAGS) $(C_SANIT) $(HEADERS) $(L_FLAGS) -o $@
	echo CONCLUIDO

$(ODIR)%.o: $(SDIR)%.c
		mkdir -p $(ODIR)
		$(CC) $(C_FLAGS) $(HEADERS) -c $< -o $@

$(LIBFT):
	make re -C ./libft

all: philo

clean:
	rm -rf $(ODIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

run:
	./philo

val:	$(OBJS) $(LIBFT)
	$(CC) $(OBJS) $(C_FLAGS) $(HEADERS) $(L_FLAGS) -o $(NAME)
	echo CONCLUIDO
	valgrind --leak-check=full --track-origins=yes --show-leak-kinds=all ./philo
