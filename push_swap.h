/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:11:21 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/12 17:22:19 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <aio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"

// STRUCTURES

typedef struct s_pile
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
int		duplicatenbrcheck(t_pile pile);
t_list	*tabtolist(t_pile tabpile);

// PUSH_SWAP FUNCTIONS
void	swap(t_pile *p);
// void	push(t_pile *src, t_pile *dst);
void	rotate(t_pile *p);
void	rrotate(t_pile *p);

#endif