SRCDIR := srcs
INCDIR := includes

SRCS := ${SRCDIR}/ft_putchar.c ${SRCDIR}/ft_swap.c ${SRCDIR}/ft_putstr.c ${SRCDIR}/ft_strlen.c ${SRCDIR}/ft_strcmp.c
OBJS := $(SRCS:.c=.o)

CC := cc
CFLAGS := -Wall -Wextra -Werror

NAME := libft.a

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^
	
%.o: %.c
	@$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all
