/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medianvalue.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 13:11:36 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/13 15:06:25 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

int	medianvalue(t_pile p)
{
	size_t	i;
	int		*cp;
	int		tmp;

	i = 1;
	tmp = 0;
	cp = (int *) ft_calloc(p.len, sizeof(int));
	while (cp != 0 && tmp < (int) p.len)
	{
		cp[tmp] = p.tab[tmp];
		tmp++;
	}
	while (cp != 0 && i < p.len)
	{
		if (cp[i - 1] > cp[i])
		{
			tmp = cp[i - 1];
			cp[i - 1] = cp[i];
			cp[i] = tmp;
			i = 0;
		}
		i++;
	}
	i = cp[p.len / 2];
	return (free(cp), i);
}
