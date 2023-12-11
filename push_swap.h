/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:11:21 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/11 15:05:59 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <aio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

// STRUCTURES

typedef struct	s_pile
{
	int		*tab;
	size_t	len;
}				t_pile;

// PARSING FUNCTIONS
size_t	isvalidstrpile(char *str);
int		isvalidnbr(char *str);
size_t	isvalidtabpile(int ac, char **av);
int		*strtointtab(char *str, size_t len);
int		*strtabtointtab(char **av, size_t len);
t_pile	parsing(int ac, char **av);

// PUSH_SWAP FUNCTIONS
void	swap(int **p);
void	push(int **p1, int **p2);

#endif