NAME = libft.a
FLAGS = -Wall -Werror -Wextra
FILES = *.c
OBJS = *.o
LIB_PATH = ./ 
SRCS = ft_split.c ft_itoa.c ft_strchr.c ft_strdup.c \
		ft_strjoin.c ft_strmapi.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_atoi.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memcmp.c ft_strncmp.c ft_tolower.c ft_toupper.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_calloc.c \
		ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_bzero.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_striteri.c

all: $(NAME)

$(NAME): $(OBJS)
	  ar rc $(NAME) $(OBJS)

$(OBJS): 
	gcc $(FLAGS) -I $(LIB_PATH) -c $(SRCS)  

RM = /bin/rm -rf

clean:
	$(RM) *.o
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

git:
	git status
	sleep 1
	git add *.c *.h Makefile
	git commit -m "automatic commit"
	git push
