/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:11:21 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/13 15:24:02 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <aio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"
# include "printf/ft_printf.h"

// STRUCTURES

typedef struct s_pile
{
	int		*tab;
	size_t	len;
}				t_pile;

// UTILS
void	multtab(t_pile *p, int fac);
int		imaxvalue(t_pile p);
int		medianvalue(t_pile p);

// PARSING FUNCTIONS
size_t	isvalidstrpile(char *str);
int		isvalidnbr(char *str);
size_t	isvalidtabpile(int ac, char **av);
int		*strtointtab(char *str, size_t len);
int		*strtabtointtab(char **av, size_t len);
t_pile	parsing(int ac, char **av);
int		duplicatenbrcheck(t_pile pile);

// PUSH_SWAP FUNCTIONS
void	swap(t_pile *p);
void	push(t_pile *src, t_pile *dst);
void	rotate(t_pile *p);
void	rrotate(t_pile *p);

// SORTING ALGORITHM
int		issorted(t_pile *p);
void	threesome(t_pile *p);
void	mediansort(t_pile *pa, t_pile *pb, int median);

#endif