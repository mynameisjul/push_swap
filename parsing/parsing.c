/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:38:17 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/07 11:26:01 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int isvalidstrpile(char *str)
{
	if (!str)
		return (0);
	while (*str != 0)
	{
		if (!(*str >= '0' && *str <= '9') && *str != ' ')
			return (0);
		str++;
	}
	return (1);
}

int isvalidnbr(char *str)
{
	if (!str)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
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

char *validpile(int ac, char **av)
{
	if (ac == 1)
		return ("Not enough arguments");
	if (ac == 2)
	{
		if (isvalidstrpile(av[1]) == 0)
			return ("Pile a is invalid");
	}
	while (ac > 0)
	{
		if (isvalidnbr(av[ac]) == 0)
			return ("One or more number is invalid");
		ac--;
	}
	
	return ("ok");
}

int	norepetition()


// int main(int ac, char **av)
// {
// 	(void) ac;
// 	printf("%d\n", isvalidnbr(av[1]));
// 	return (0);
// }