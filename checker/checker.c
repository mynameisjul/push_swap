/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:25:08 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/18 11:33:55 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void checker(ac, av)
{
	t_pile	pa;
	char	*cmd;

	pa = parsing(ac, av);
	
	while ()
	if (pa.len == 0)

	else
	{
		if (duplicatenbrcheck(pa) == 0)
			return (ft_printf("Error\n"), 0);
		if(issorted(&pa, 1) == 1)
			return (ft_printf("\n"), 0);
	}
}