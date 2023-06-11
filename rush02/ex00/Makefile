name = rush-02

SRCS = Srcs/main.c Srcs/ft_putnbr.c Srcs/ft_atoi.c Src/ft_strlen.c Srcs/ft_line_value.c Srcs/ft_putstr.c Srcs/ft_line_key.c

objs = ${SRCS:.c=.o}

HEAD = Includes/ft_rush02.h

rm = rm -f

cc = cc

cflags = -Wall -Wextra -Werror

all: ${name}

${name}: ${objs}
	${cc} -o ${name} ${SRCS} -I../ ${cflags}

clean:
	rm -f ${objs}

fclean: clean
	rm -f ${name}

re: fclean all

.PHONY: all clean fclean re
