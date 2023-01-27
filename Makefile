# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frmonfre <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 15:28:07 by frmonfre          #+#    #+#              #
#    Updated: 2023/01/27 15:28:22 by frmonfre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	$(shell find . -name "*.c" ! -name "main.c")

OBJS	=	$(SRCS:.c=.o)

NAME	=	libft.a

all:	$(NAME)

bonus: all

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

compile:
	cc main.c -L. -lft $(NAME) -g -Wall -Wextra -Werror

clean:
	rm -rf $(OBJS)

fclean:
	rm -rf $(NAME)

re: clean fclean all compile
