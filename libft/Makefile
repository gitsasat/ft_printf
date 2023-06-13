# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs

# NAME executable
NAME = libft.a

# Source files
SRCS = ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c	\
		ft_memmove.c \
		ft_memchr.c	\
		ft_memcmp.c	\
		ft_strlen.c	\
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c	\
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c	\
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c \

SRCSB =	ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstmap.c	\

# Object files
OBJS = $(SRCS:.c=.o)
OBJSB = $(SRCSB:.c=.o)

# Rule to build the NAME
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJSB)
	$(AR) $(NAME) $(OBJSB)

# Rule to compile source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#rule all
all: $(NAME)

# Clean rule
clean:
	rm -f $(OBJS) $(OBJSB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
