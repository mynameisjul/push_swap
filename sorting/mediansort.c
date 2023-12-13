/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mediansort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:07:21 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/13 16:37:57 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	mediansort(t_pile *pa, t_pile *pb, int median)
{
	size_t	totlen;

	totlen = pa->len;
	while (pa->len > totlen / 2 && pa->len > 3)
	{
		if (pa->tab[0] > median)
		{
			push(pa, pb);
			ft_printf("pb\n");
		}
		else
		{
			rotate(pa);
			ft_printf("ra\n");
		}
	}
	while (pa->len > 3)
	{
		push(pa, pb);
		ft_printf("pb\n");
	}
}
