SRC = ft_putchar.c \
	ft_putstr.c \
	ft_strlen.c \
	ft_putchar.o \
	ft_strcmp.c \
	ft_swap.c
SRCDIR = ./srcs/
OBJ = ${SRC:.c=.o}
INC = ./includes/
NAME = libft.a
%.o: ${SRCDIR}%.c
	gcc -I ${INC} -c $< -o $@
all: ${OBJ}
	ar rc ${NAME} ${OBJ}
clean:
	rm -rf ${OBJ}
fclean: clean
	rm -rf libft.a
re: fclean all