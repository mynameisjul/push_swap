/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:10:51 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/12 17:57:42 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pile	pile;
	size_t	i = 0;

	pile = parsing(ac, av);
	if (pile.len == 0)
		printf("Invalid argument(s)\n");
	else
	{
		if (duplicatenbrcheck(pile) == 0)
			return (printf("One or more numbers are duplicated\n"), 0);
		while (i < pile.len)
		{
			printf("%d\n", pile.tab[i]);
			i++;
		}
		if(issorted(&pile) == 1)
			return (printf("The list is sorted\n"), 0);
	}
	return (printf("The list isn't sorted\n"), 0);
}
