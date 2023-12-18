/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threesome.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:58:17 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/18 10:36:34 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	threesome(t_pile *p, int rev)
{
	int	imax;

	imax = imaxvalue(*p);
	if (p->len == 2)
		return (twosome(p));
	if (issorted(p, rev) == 0)
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
