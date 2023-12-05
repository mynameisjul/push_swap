# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 15:37:29 by jblaye            #+#    #+#              #
#    Updated: 2023/12/05 16:53:26 by jblaye           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRCS = push.c push_swap_utils.c rotate.c  swap.c main.c

HEADERS = ./push_swap.h

OBJS	= $(SRCS:.c=.o)

CC = cc
CFLAGS	= -Wall -Wextra -Werror -I
RM = rm -f

.c.o:
			$(CC) $(CFLAGS) $(HEADERS) -c $< -o $(<:.c=.o)

all:		libft $(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) $(HEADERS) $(SRCS)

libft:		
			make -C ./libft

clean:
			rm -f $(OBJS)
			make -C ./libft clean

fclean:		clean
			rm -f $(NAME)
			make -C ./libft fclean

re:			fclean all

.PHONY:		all clean fclean re
