/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julieblaye <julieblaye@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:53:28 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/17 17:59:22 by julieblaye       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_swap(t_pile *pa, t_pile *pb)
{
	int	*sortcost;
	int	i;
	int	tmp;
	int test = 0;

	i = 0;
	tmp = 0;
	mediansort(pa, pb, medianvalue(*pa));
	threesome(pa, 1);
	while (pb->len != 0)
	{
		test = 0;
		printf("A = \n");
		while (test < (int) pa->len)
			{
				printf("%d ", pa->tab[test]);
				test++;
			}
		printf("\n");
		printf("B = \n");
		test = 0;
		while (test < (int) pb->len)
			{
				printf("%d ", pb->tab[test]);
				test++;
			}
		printf("\n");
		sortcost = sortingcost(pa, pb);
		i = 0;
		tmp = i;
		while (i < (int) pb->len)
		{
			if (sortcost[i] < sortcost[tmp])
				tmp = i;
			i++;
		}
		sorti(pa, pb, i, sortcost[tmp]);
		free(sortcost);
	}
}
