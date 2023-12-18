/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:10:51 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/18 11:03:10 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pile	pa;
	t_pile	pb;

	pa = parsing(ac, av);
	pb.len = 0;
	pb.tab = (int *) ft_calloc(pa.len, sizeof(int));
	if (pa.len == 0)
		ft_printf("Error\n");
	else
	{
		if (duplicatenbrcheck(pa) == 0)
			return (ft_printf("Error\n"), 0);
		if(issorted(&pa, 1) == 1)
			return (ft_printf("\n"), 0);
	}
	push_swap(&pa, &pb);
	return (free(pa.tab), free(pb.tab), 0);
}
