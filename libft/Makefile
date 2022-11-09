NAME = rush-02

SRCS = src/main.c src/ft_atoi.c src/ft_putchar.c src/ft_putstr.c src/ft_strdup.c src/ft_strlen.c src/ft_putnbr.c src/ft_rush02.c

OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean

		COMPLEMENTAR
	
CC = gcc 

INC_DIR = include

CFLAGS = -Wall -Werror -Wextra -I$(INC_DIR)

all: ${OBJS}
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}
