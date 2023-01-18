NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

RM = rm -rf

SRCS = ft_isptr.c ft_printf.c ft_putnbr.c  ft_putstr.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

.o: .c
	cc $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

git:
	git add *.c *.h  Makefile
	sleep 2
	git commit -m "Automated commit from Makefile"
	git push

