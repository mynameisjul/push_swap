/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multtab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:33:57 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/13 11:40:22 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	multtab(t_pile *p, int fac)
{
	size_t	i;

	i = 0;
	while (i < p->len)
	{
		p->tab[i] = fac * p->tab[i];
		i++;
	}
}
