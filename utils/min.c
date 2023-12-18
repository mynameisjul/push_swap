/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julieblaye <julieblaye@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:48:44 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/15 16:41:48 by julieblaye       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	mintwo(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int minfour(int a, int b, int c, int d)
{
	if (b < a)
		a = b;
	if (c < a)
		a = c;
	if (d < a)
		a = d;
	return (a);
}