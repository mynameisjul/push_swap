/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pilecheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:38:17 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/11 12:52:28 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile isvalidstrpile(char *str)
{
	t_pile	inttab;
	
	inttab.len = 0;
	if (!str)
		return (inttab);
	while (*str != 0)
	{
		while ((*str >= 9 && *str <= 13) || *str == 32)
			str++;
		if (*str == '+' || *str == '-')
			str++;
		if (!(*str >= '0' && *str <= '9'))
		{
			inttab.len = 0;
			return (inttab);
		}
		inttab.len++;
		while (*str >= '0' && *str <= '9')
			str++;
		while ((*str >= 9 && *str <= 13) || *str == 32)
			str++;
	}
	if (*str != 0)
		inttab.len = 0;
	return (inttab);
}

int isvalidnbr(char *str)
{
	if (!str)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
		str++;
	if (!(*str >= '0' && *str <= '9'))
		return (0);
	while (*str >= '0' && *str <= '9')
		str++;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str != 0)
		return (0);
	return (1);
}

int validtabpile(int ac, char **av)
{
	while (ac - 1 > 0)
	{
		if (isvalidnbr(av[ac - 1]) == 0)
			return (0);
		ac--;
	}
	return (1);
}



// int main(int ac, char **av)
// {
// 	(void) ac;
// 	printf("%d\n", isvalidnbr(av[1]));
// 	return (0);
// }