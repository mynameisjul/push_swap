/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minlist.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:27:35 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/19 09:48:01 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	minlist(t_pile *pa)
{
	int	i;
	int	inf;

	i = 0;
	inf = 0;
	while (i < (int) pa->len)
	{
		if (pa->tab[i] < pa->tab[inf])
			inf = i;
		i++;
	}
	return (inf);
}
