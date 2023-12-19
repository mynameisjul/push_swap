# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 15:37:29 by jblaye            #+#    #+#              #
#    Updated: 2023/12/19 11:45:18 by jblaye           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

NAME_B	= checker

SRCS = ./operators/push.c ./operators/rotate.c \
		./operators/swap.c ./operators/rrotate.c \
		./parsing/parsing.c ./parsing/pilecheck.c \
		./sorting/issorted.c ./sorting/threesome.c ./sorting/twosome.c \
		./sorting/mediansort.c ./sorting/finalpos.c ./sorting/mintotop.c \
		./sorting/sortingcost.c ./sorting/sorti.c ./sorting/push_swap.c \
		./utils/multtab.c ./utils/imaxvalue.c ./utils/minlist.c \
		./utils/medianvalue.c ./utils/min.c ./utils/max.c \
		main.c

SRCS_B = ./check/checker.c ./gnl/get_next_line.c ./gnl/get_next_line_utils.c \
		./operators/push.c ./operators/rotate.c \
		./operators/swap.c ./operators/rrotate.c \
		./parsing/parsing.c ./parsing/pilecheck.c \
		./sorting/issorted.c ./sorting/threesome.c ./sorting/twosome.c \
		./sorting/mediansort.c ./sorting/finalpos.c ./sorting/mintotop.c \
		./sorting/sortingcost.c ./sorting/sorti.c ./sorting/push_swap.c \
		./utils/multtab.c ./utils/imaxvalue.c ./utils/minlist.c \
		./utils/medianvalue.c ./utils/min.c ./utils/max.c 

HEADERS = -I ./push_swap.h

OBJS	= $(SRCS:.c=.o)

OBJS_B	= $(SRCS_B:.c=.o)

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

$(NAME):	$(OBJS) libft printf
			$(CC) $(CFLAGS) -o $(NAME) $(HEADERS) $(SRCS) ./libft/libft.a ./printf/printf.a

bonus:		$(OBJS_B) libft printf
			$(CC) $(CFLAGS) -o $(NAME_B) $(HEADERS) $(SRCS_B) ./libft/libft.a ./printf/printf.a

clean:
			rm -f $(OBJS)
			rm -f $(OBJS_B)
			make -C ./libft clean
			make -C ./printf clean

fclean:		clean
			rm -f $(NAME)
			rm -f $(NAME_B)
			make -C ./libft fclean
			make -C ./printf fclean
re:			fclean all

.PHONY:		all clean fclean re libft printf 
