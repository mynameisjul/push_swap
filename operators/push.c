/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:13:07 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/12 17:24:50 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_pile *src, t_pile *dst)
{
	int	tmp;

	tmp = src->tab[0];
	rotate(src);
	src->len--;
	dst->tab[dst->len] = tmp;
	dst->len++;
	rrotate(dst);
}
