/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twosome.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 10:36:48 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/18 10:38:01 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	twosome(t_pile *p)
{
	if (issorted(p, 1) == 0)
	{
		swap(p);
		ft_printf("sa\n");
	}
}