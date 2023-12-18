/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingcost.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julieblaye <julieblaye@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:26:21 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/17 19:08:13 by julieblaye       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_sortcost	sortoptions(t_pile *pa, t_pile *pb, int i)
{
	int 		j;
	t_sortcost	sortcost;

	j = finalpos(*pa, pb->tab[i]);
	sortcost.up = maxtwo(i, j);
	sortcost.down = maxtwo((pa->len - j), (pb->len - i));
	sortcost.adownbup = (pa->len - j) + i;
	sortcost.aupbdown = j + (pb->len - i);
	return (sortcost);
}

int	*sortingcost(t_pile *pa, t_pile *pb)
{
	int			i;
	t_sortcost	sortcost;
	int			*cost;

	i = 0;
	cost = (int *) ft_calloc(pb->len, sizeof(int));
	while (i < (int) pb->len)
	{
		sortcost = sortoptions(pa, pb, i);
		cost[i] = minfour(sortcost.up, sortcost.down, sortcost.adownbup, sortcost.aupbdown);
		i++;
	}
	return (cost);
}
