/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pilecheck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:38:17 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/12 15:04:32 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	isvalidstrpile(char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (len);
	while (*str != 0)
	{
		while ((*str >= 9 && *str <= 13) || *str == 32)
			str++;
		if (*str == '+' || *str == '-')
			str++;
		if (!(*str >= '0' && *str <= '9'))
		{
			len = 0;
			return (len);
		}
		len++;
		while (*str >= '0' && *str <= '9')
			str++;
		while ((*str >= 9 && *str <= 13) || *str == 32)
			str++;
	}
	if (*str != 0)
		len = 0;
	return (len);
}

int	isvalidnbr(char *str)
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

size_t	isvalidtabpile(int ac, char **av)
{
	size_t	len;

	len = ac - 1;
	while (ac - 1 > 0)
	{
		if (isvalidnbr(av[ac - 1]) == 0)
		{
			len = 0;
			return (len);
		}
		ac--;
	}
	return (len);
}

// int main(int ac, char **av)
// {
// 	(void) ac;
// 	printf("%d\n", isvalidnbr(av[1]));
// 	return (0);
// }