# LIBFT PATH
LIBFT_PATH = ./libraries/libft

# LIBFT
LIBFT = ${LIBFT_PATH}/libft.a

# FT_PRINTF PATH
FT_PRINTF_PATH = ./libraries/ft_printf

# FT_PRINTF
FT_PRINTF = ${FT_PRINTF_PATH}/libftprintf.a

# SOURCE FILES
SOURCES = push_swap.c operations_1.c operations_2.c operations_3.c index_maker.c more_than_five.c
SOURCES += linked_list_operations.c list_maker.c operations_till_five.c sort.c
SOURCES += ft_print_stack.c error_checker.c ft_stack_size.c free_stack.c

# OBJECT FILES
OBJECTS = ${SOURCES:.c=.o}

# NAME OF THE PROGRAM
NAME = push_swap

# COMPILER
CC = cc

# COMPILER FLAGS
CFLAGS = -g -Wall -Wextra -Werror

# REMOVER
RM = rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o $(<:.c=.o)

all: ${NAME}

${NAME}: ${LIBFT} ${FT_PRINTF} ${OBJECTS} push_swap.h
	${CC} ${CFLAGS} ${OBJECTS} ${FT_PRINTF} ${LIBFT} -o ${NAME}

${LIBFT}:
	${MAKE} -C ${LIBFT_PATH}
${FT_PRINTF}:
	${MAKE} -C ${FT_PRINTF_PATH}

clean:
	${MAKE} -C ${LIBFT_PATH} clean
	${MAKE} -C ${FT_PRINTF_PATH} clean
	${RM} ${OBJECTS}

fclean: clean
	${MAKE} -C ${LIBFT_PATH} fclean
	${MAKE} -C ${FT_PRINTF_PATH} fclean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re libft
