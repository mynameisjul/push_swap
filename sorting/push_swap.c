/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:53:28 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/18 10:39:29 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_swap(t_pile *pa, t_pile *pb)
{
	int	*sortcost;
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	if (pa->len == 2)
		return (twosome(pa));
	mediansort(pa, pb, medianvalue(*pa));
	threesome(pa, 1);
	while (pb->len != 0)
	{
		i = 0;
		tmp = i;
		sortcost = sortingcost(pa, pb);
		while (i < (int) pb->len)
		{
			if (sortcost[i] < sortcost[tmp])
				tmp = i;
			i++;
		}
		sorti(pa, pb, tmp, sortcost[tmp]);
		free(sortcost);
	}
	mintotop(pa);
}
