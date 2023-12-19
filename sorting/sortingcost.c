/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortingcost.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:26:21 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/19 09:46:17 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_sortcost	sortoptions(t_pile *pa, t_pile *pb, int i)
{
	int			j;
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
	t_sortcost	sc;
	int			*cost;

	i = 0;
	cost = (int *) ft_calloc(pb->len, sizeof(int));
	while (i < (int) pb->len)
	{
		sc = sortoptions(pa, pb, i);
		cost[i] = minfour(sc.up, sc.down, sc.adownbup, sc.aupbdown);
		i++;
	}
	return (cost);
}
