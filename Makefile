# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I includes -I libft/includes
AR = ar -rcs

# NAME executable
NAME = libftprintf.a

# Source files
SRCS = ft_printf.c ft_putnbr.c ft_putstr.c

# Object files
OBJS = $(SRCS:.c=.o)

# Rule to build the NAME
$(NAME): $(OBJS)
	cd libft && $(MAKE)
	cp libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

# Rule to compile source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#rule all
all: $(NAME)

# Clean rule
clean:
	rm -f $(OBJS)
	cd libft && $(MAKE) clean

fclean: clean
	rm -f $(NAME)
	cd libft && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re
