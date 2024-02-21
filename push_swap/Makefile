NAME = push_swap
LIBFT = libft
LIBFTA = libft/libft.a
CC = gcc -g
CFLAGS = -Wall -Wextra -Werror
CFILES = utils.c sort_func.c basic_sorts.c sorter.c rule_a.c rule_b.c rule_both.c quick_sort.c freeeeee.c push_swap.c
OBJS = $(CFILES:.c=.o)

BOLD_YELLOW	=	\033[1;33m
BOLD_GREEN  =	\033[0;32m
NO_COLOR	=	\033[0m

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@echo "🚧 $(BOLD_YELLOW)Make: Starting the compilation..."
	@make -C $(LIBFT)
	@cc $(CFLAGS) $(OBJS) $(LIBFTA) -o $(NAME)
	@echo "📟 $(BOLD_GREEN)Push_Swap ready$(NO_COLOR)!"

all: $(NAME)

clean:
	@make clean -C $(LIBFT)
	@rm -rf $(OBJS)
	@echo "🧼 $(BOLD_YELLOW)Push_Swap Clean: $(NO_COLOR)Removed object files"

fclean: clean
	@make fclean -C $(LIBFT)
	@rm -f $(NAME)
	@echo "🧼 $(BOLD_YELLOW)Push_Swap Clean: $(NO_COLOR)Removed all!"

re: fclean all
