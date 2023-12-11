/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:10:51 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/11 17:12:55 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_pile	pilea;
	t_pile	pileb;
	
	pilea = parsing(ac, av);
	if (pilea.len == 0)
		return (0, printf("Invalid arguments\n"));
	if (duplicatenbrcheck(pilea) == 0)
		return (0, printf("Duplicate numbers in pile\n"));
	pileb.len = pilea.len;
	pileb.tab = (int *) ft_calloc(pileb.len, sizeof(int));
	return (0);
}
