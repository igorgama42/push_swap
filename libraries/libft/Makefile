# Name of the project
NAME = libft.a

# Function files
SRCS += ft_atoi.c ft_mat_size.c ft_strlen.c ft_isdigit.c ft_split.c ft_calloc.c ft_substr.c ft_bzero.c

# Function Objects
SRCS_OBJS = $(SRCS:.c=.o)

# Compiler
CC = cc

# Compiler Flags
C_FLAGS = -Wall -Werror -Wextra

%.o: %.c
	$(CC) $(C_FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(SRCS_OBJS)
	ar -r $@ $^

clean:
	rm -f $(SRCS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
