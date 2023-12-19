/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julieblaye <julieblaye@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:13:07 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/18 22:37:23 by julieblaye       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_pile *src, t_pile *dst)
{
	int	tmp;

	if (src->len > 0)
	{
		tmp = src->tab[0];
		rotate(src);
		src->len--;
		dst->tab[dst->len] = tmp;
		dst->len++;
		rrotate(dst);
	}
}
