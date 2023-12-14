/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issorted.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julieblaye <julieblaye@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:28:01 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/14 16:53:13 by julieblaye       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	issorted(t_pile *p, int rev)
{
	size_t	i;

	i = 1;
	multtab(p, rev);
	while (i < p->len && p->tab[i] > p->tab[i - 1])
		i++;
	multtab(p, rev);
	if (i == p->len)
		return (1);
	return (0);
}
