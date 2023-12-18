/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finalpos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:03:16 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/18 14:12:15 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	mintab(t_pile p)
{
	int	i;
	int	imin;

	i = 1;
	imin = 0;
	while (i < (int) p.len)
	{
		if (p.tab[i] < p.tab[imin])
			imin = i;
		i++;
	}
	return (imin);
}

int	maxtab(t_pile p)
{
	int	i;
	int	imax;

	i = 1;
	imax = 0;
	while (i < (int) p.len)
	{
		if (p.tab[i] > p.tab[imax])
			imax = i;
		i++;
	}
	return (imax);
}

int	finalpos(t_pile p, int n)
{
	int	i;
	int	pos;
	int	imax;
	int	imin;

	imax = maxtab(p);
	imin = mintab(p);
	i = 1;
	pos = 0;
	if (n > p.tab[imax] || n < p.tab[imin])
		pos = imin;
	else
	{
		if (n > p.tab[p.len - 1] && n < p.tab[0])
			return (0);
		while (i < (int) p.len)
		{
			if (n > p.tab[i - 1] && n < p.tab[i])
				pos = i;
			i++;
		}
	}
	return (pos);
}
