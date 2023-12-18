/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julieblaye <julieblaye@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:11:21 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/17 16:09:47 by julieblaye       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <aio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>
# include "libft/libft.h"
# include "printf/ft_printf.h"

// STRUCTURES

typedef struct s_pile
{
	int		*tab;
	size_t	len;
}				t_pile;

typedef struct s_sortcost
{
	int	up;
	int	down;
	int	aupbdown;
	int	adownbup;
}				t_sortcost;

// UTILS
void		multtab(t_pile *p, int fac);
int			imaxvalue(t_pile p);
int			medianvalue(t_pile p);
int			mintwo(int a, int b);
int 		minfour(int a, int b, int c, int d);
int			maxtwo(int n1, int n2);

// PARSING FUNCTIONS
size_t		isvalidstrpile(char *str);
int			isvalidnbr(char *str);
size_t		isvalidtabpile(int ac, char **av);
int			*strtointtab(char *str, size_t len);
int			*strtabtointtab(char **av, size_t len);
t_pile		parsing(int ac, char **av);
int			duplicatenbrcheck(t_pile pile);

// PUSH_SWAP FUNCTIONS
void		swap(t_pile *p);
void		push(t_pile *src, t_pile *dst);
void		rotate(t_pile *p);
void		rrotate(t_pile *p);

// SORTING ALGORITHM
int			issorted(t_pile *p, int rev);
void		threesome(t_pile *p, int rev);
void		mediansort(t_pile *pa, t_pile *pb, int median);
int			finalpos(t_pile p, int n);
t_sortcost	sortoptions(t_pile *pa, t_pile *pb, int i);
int			*sortingcost(t_pile *pa, t_pile *pb);
void		sorti(t_pile *pa, t_pile *pb, int j, int cost);
void		push_swap(t_pile *pa, t_pile *pb);

#endif