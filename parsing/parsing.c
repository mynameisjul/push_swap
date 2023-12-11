/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:24:44 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/11 17:01:22 by jblaye           ###   ########.fr       */
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
	t_pile	pile;

	pile.len = 0;
	if (ac == 1)
		return (pile);
	else if (ac == 2)
	{
		pile.len = isvalidstrpile(av[1]);
		if (pile.len == 0)
			return (pile);
		pile.tab = strtointtab(av[1], pile.len);
	}
	else
	{
		pile.len = isvalidtabpile(ac, av);
		if (pile.len == 0)
			return (pile);
		pile.tab = strtabtointtab(&av[1], pile.len);
	}
	return (pile);
}

int	duplicatenbrcheck(t_pile pile)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 1;
	if (pile.len > 0)
	{
		while (i < pile.len - 1)
		{
			while (j < pile.len)
			{
				if (pile.tab[i] == pile.tab[j])
					return (0);
				j++;
			}
			i++;
			j = i + 1;
		}
		return (1);
	}
	return (0);
}

// #include <stdio.h>

// int main(int ac, char **av)
// {
// 	t_pile pile;
// 	size_t i = 0;

// 	pile = parsing(ac, av);
// 	if (pile.len == 0)
// 		printf("Invalid argument(s)\n");
// 	else
// 	{
// 		if (duplicatenbrcheck(pile) == 0)
// 			printf("One or more numbers are duplicated\n");
// 		while (i < pile.len)
// 		{
// 			printf("%d\n", pile.tab[i]);
// 			i++;
// 		}
// 	}
// 	return (0);
// }
