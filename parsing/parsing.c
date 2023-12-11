/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:24:44 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/11 15:12:04 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*strtointtab(char *str, size_t len)
{
	size_t	i;
	int		*tab;
	
	i = 0;
	tab = (int *) ft_calloc(len, sizeof(int));
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str != 0)
	{
		tab[i] = ft_atoi(str);
		i++;
		if (*str == '+' || *str == '-')
			str++;
		while (*str >= '0' && *str <= '9')
			str++;
		while ((*str >= 9 && *str <= 13) || *str == 32)
			str++;
	}
	return (tab);
}

int	*strtabtointtab(char **av, size_t len)
{
	size_t	i;
	int		*tab;

	i = 0;
	tab = (int *) ft_calloc(len, sizeof(int));
	while (i < len)
	{
		tab[i] = ft_atoi(av[i]);
		i++;
	}
	return (tab);
}

t_pile	parsing(int ac, char **av)
{
	t_pile	inttab;

	inttab.len = 0;
	if (ac == 1)
		return (inttab);
	else if (ac == 2)
	{
		inttab.len = isvalidstrpile(av[1]);
		if (inttab.len == 0)
			return (inttab);
		inttab.tab = strtointtab(av[1], inttab.len);
	}
	else
	{
		inttab.len = isvalidtabpile(ac, av);
		if (inttab.len == 0)
			return (inttab);
		inttab.tab = strtabtointtab(&av[1], inttab.len);
	}
	return (inttab);
}

// #include <stdio.h>

// int main(int ac, char **av)
// {
// 	t_pile inttab;
// 	size_t i = 0;

// 	inttab = parsing(ac, av);
// 	if (inttab.len == 0)
// 		printf("Invalid arguments\n");
// 	while (i < inttab.len)
// 	{
// 		printf("%d\n", inttab.tab[i]);
// 		i++;
// 	}
// 	return (0);
// }