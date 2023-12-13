/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:10:51 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/13 16:32:11 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pile	pa;
	t_pile	pb;
	size_t	i = 0;

	pa = parsing(ac, av);
	printf("palen %zu\n", pa.len);
	pb.len = 0;
	pb.tab = (int *) ft_calloc(pa.len, sizeof(int));
	if (pa.len == 0)
		printf("Invalid argument(s)\n");
	else
	{
		if (duplicatenbrcheck(pa) == 0)
			return (printf("One or more numbers are duplicated\n"), 0);
		if(issorted(&pa) == 1)
			return (printf("\n"), 0);
		printf("medianvalue %d\n", medianvalue(pa));
	}
	mediansort(&pa, &pb, medianvalue(pa));
	i = 0;
	printf("palen %zu\n", pa.len);
	while (i < pa.len)
		{
			printf("%d ", pa.tab[i]);
			i++;
		}
	printf("\n");
	i = 0;
	printf("pblen %zu\n", pb.len);
	while (i < pb.len)
		{
			printf("%d ", pb.tab[i]);
			i++;
		}
	return (free(pa.tab), free(pb.tab), 0);
}
