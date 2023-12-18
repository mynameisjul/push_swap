/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mediansort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:07:21 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/18 13:47:28 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	mediansort(t_pile *pa, t_pile *pb, int median)
{
	size_t	totlen;

	totlen = pa->len;
	while (pa->len > 3)
	{
		push(pa, pb);
		ft_printf("pb\n");
		if (pb->tab[0] >= median && pb->len > 3)
		{
			rotate(pb);
			ft_printf("rb\n");
		}
	}
}
