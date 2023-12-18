/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julieblaye <julieblaye@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:10:51 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/17 17:35:00 by julieblaye       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pile	pa;
	t_pile	pb;
	//size_t	i = 0;

	pa = parsing(ac, av);
	pb.len = 0;
	pb.tab = (int *) ft_calloc(pa.len, sizeof(int));
	if (pa.len == 0)
		printf("Invalid argument(s)\n");
	else
	{
		if (duplicatenbrcheck(pa) == 0)
			return (printf("One or more numbers are duplicated\n"), 0);
		if(issorted(&pa, 1) == 1)
			return (printf("\n"), 0);
	}
	push_swap(&pa, &pb);
	return (free(pa.tab), free(pb.tab), 0);
}
