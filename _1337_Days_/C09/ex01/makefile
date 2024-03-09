
CC = gcc
CFLAGS = -Wall -Wextra -Werror


SRCDIR = srcs
INCDIR = includes


SRCS = $(addprefix $(SRCDIR)/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
OBJS = $(SRCS:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating library $(NAME)"
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(SRCDIR)/%.o: $(SRCDIR)/%.c
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	@echo "Cleaning object files"
	@rm -f $(OBJS)

fclean: clean
	@echo "Cleaning library and executable"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
