/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imaxvalue.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:49:48 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/13 13:10:24 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	imaxvalue(t_pile p)
{
	size_t	i;
	int		imax;

	imax = 0;
	i = 0;
	while (i < p.len)
	{
		if (p.tab[i] > p.tab[imax])
			imax = (int) i;
		i++;
	}
	return (imax);
}
