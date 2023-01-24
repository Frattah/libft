SRCS	=	$(shell find . -name "*.c" ! -name "main.c")

OBJS	=	$(SRCS:.c=.o)

NAME	=	libft.a

all:	$(NAME)

bonus: all

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

compile:
	cc main.c -L. -lft $(NAME) -g

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME)

re: clean fclean all compile
