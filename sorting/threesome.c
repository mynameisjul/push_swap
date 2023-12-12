/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threesome.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:58:17 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/12 18:26:47 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	threesome(t_pile *p, char c)
{
	int	imax;
	int	i;

	i = 0;
	imax = 0;
	if (issorted(p) == 1)
		return ;
	if (p->tab[1] > p->tab[imax])
		imax = 1;
	if (p->tab[2] > p->tab[imax])
		imax = 2;
	if (imax = 0)
	{
		rotate(p);
	}	
}