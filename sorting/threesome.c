/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threesome.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julieblaye <julieblaye@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:58:17 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/14 14:39:28 by julieblaye       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	threesome(t_pile *p)
{
	int	imax;

	imax = imaxvalue(*p);
	if (issorted(p) == 0)
	{
		if (imax == 0)
		{
			rotate(p);
			ft_printf("ra\n");
		}
		if (imax == 1)
		{
			rrotate(p);
			ft_printf("rra\n");
		}
		if (p->tab[0] > p->tab[1])
		{
			swap(p);
			ft_printf("sa\n");
		}
	}
}
