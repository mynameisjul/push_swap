# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 15:37:29 by jblaye            #+#    #+#              #
#    Updated: 2023/12/18 11:06:39 by jblaye           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SRCS = ./operators/push.c ./operators/rotate.c \
		./operators/swap.c ./operators/rrotate.c \
		./parsing/parsing.c ./parsing/pilecheck.c \
		./sorting/issorted.c ./sorting/threesome.c ./sorting/twosome.c \
		./sorting/mediansort.c ./sorting/finalpos.c ./sorting/mintotop.c \
		./sorting/sortingcost.c ./sorting/sorti.c ./sorting/push_swap.c \
		./utils/multtab.c ./utils/imaxvalue.c ./utils/minlist.c \
		./utils/medianvalue.c ./utils/min.c ./utils/max.c\
		main.c

HEADERS = -I ./push_swap.h

OBJS	= $(SRCS:.c=.o)

CC = cc
CFLAGS	= -Wall -Wextra -Werror -g3 
RM = rm -f

.c.o:
			$(CC) $(CFLAGS) $(HEADERS) -c $< -o $(<:.c=.o)

all:		libft printf $(NAME)

libft:		
			make -C ./libft

printf:		
			make -C ./printf

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(HEADERS) $(SRCS) ./libft/libft.a ./printf/printf.a

clean:
			rm -f $(OBJS)
			make -C ./libft clean
			make -C ./printf clean

fclean:		clean
			rm -f $(NAME)
			make -C ./libft fclean
			make -C ./printf fclean

re:			fclean all

.PHONY:		all clean fclean re libft printf
