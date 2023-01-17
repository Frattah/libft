SRCS	=	ft_isalpha.c	ft_isupper.c	ft_islower.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	ft_isprint.c	\
			ft_strlen.c		ft_memset.c		ft_bzero.c		ft_memcpy.c		ft_toupper.c	ft_tolower.c	ft_strncmp.c	\

OBJS	=	$(SRCS:.c=.o)

NAME	=	libft.a

all:	$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clear:
	rm -rf $(OBJS)

fclear:
	rm -rf $(NAME)
