# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajoala <ajoala@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/19 16:15:19 by ajoala            #+#    #+#              #
#    Updated: 2023/01/10 18:45:50 by ajoala           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

CC		= 	cc

CFLAGS	=	-Wall -Wextra -Werror

SRCS	=	ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunsigned.c ft_puthex.c ft_putptr.c

OBJS	=	$(SRCS:.c=.o)

RM 		=	rm -f

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

all:	$(NAME)

clean:	
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re

