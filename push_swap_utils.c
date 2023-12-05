/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julieblaye <julieblaye@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:15:21 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/02 11:28:44 by julieblaye       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

ssize_t	ft_strlen(char *str)
{
	size_t	i;
	
	i = 0;
	if (!str)
		return (-1);
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_calloc(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *) malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

char	*ft_realloc(char *str, ssize_t size)
{
	char	*end;
	size_t	i;

	i = 0;
	while (str[i] != 0)
		i++;
	end = (char *) ft_calloc(i + size);
	if (!end)
		return (NULL);
	i = 0;
	while (str[i] != 0)
	{
		end[i] = str[i];
		i++;
	}
	free (str);
	return (end);
}
