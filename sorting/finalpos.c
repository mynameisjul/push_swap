/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finalpos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julieblaye <julieblaye@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:03:16 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/17 21:20:18 by julieblaye       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	finalpos(t_pile p, int n)
{
	int	sup;
	int	inf;
	int	i;

	inf = -1;
	sup = -1;
	i = 0;
	if (p.tab[0] < p.tab[p.len - 1] && n > p.tab[p.len - 1])
		return (0);
	while (i < (int) p.len)
	{
		
	}
	return (j);
}
