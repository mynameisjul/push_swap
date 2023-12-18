/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finalpos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:03:16 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/18 10:16:27 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	finalpos(t_pile p, int n)
{
	int	i;
	int	pos;
	
	i = 1;
	pos = 0;
	while (i < (int) p.len)
	{
		if (p.tab[i] > p.tab[pos])
			pos = i;
		i++;
	}
	if (n > p.tab[pos])
		return ((pos + 1) % (int) p.len);
	i = 1;
	pos = 0;
	while (i < (int) p.len)
	{
		if (p.tab[i] > n && p.tab[i - 1] < n)
			pos = i;
		i++;
	}
	return (pos);
}
