/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mintotop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:18:47 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/19 09:46:54 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	mintotop(t_pile *pa)
{
	int	i;
	int	inf;

	i = 0;
	inf = minlist(pa);
	if (inf < (int) pa->len / 2)
	{
		while (inf != 0)
		{
			rotate(pa);
			ft_printf("ra\n");
			inf--;
		}
	}
	else
	{
		while (inf != (int) pa->len)
		{
			rrotate(pa);
			ft_printf("rra\n");
			inf++;
		}
	}
}
