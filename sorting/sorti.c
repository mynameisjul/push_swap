/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorti.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:30:46 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/18 10:40:59 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	goup(t_pile *pa, t_pile *pb, int i, int j)
{
	while (i > 0 && j > 0)
		{
			rotate(pa);
			rotate(pb);
			ft_printf("rr\n");
			i--;
			j--;
		}
	while (i > 0)
	{
		rotate(pa);
		ft_printf("ra\n");
		i--;
	}
	while (j > 0)
	{
		rotate(pb);
		ft_printf("rb\n");
		j--;
	}
}

void	godown(t_pile *pa, t_pile *pb, int i, int j)
{
	while (i < (int) pa->len && j < (int) pb->len)
		{
			rrotate(pa);
			rrotate(pb);
			ft_printf("rrr\n");
			i++;
			j++;
		}
	while (i < (int) pa->len)
	{
		rrotate(pa);
		ft_printf("rra\n");
		i++;
	}
	while (j < (int) pb->len)
	{
		rrotate(pb);
		ft_printf("rrb\n");
		j++;
	}
}

void	agoupbgodown(t_pile *pa, t_pile *pb, int i, int j)
{
	while (i > 0)
	{
		rotate(pa);
		ft_printf("ra\n");
		i--;
	}
	while (j < (int) pb->len)
	{
		rrotate(pb);
		ft_printf("rrb\n");
		j++;
	}
}

void	agodownbgoup(t_pile *pa, t_pile *pb, int i, int j)
{
	while (i < (int) pa->len)
		{
			rrotate(pa);
			ft_printf("rra\n");
			i++;
		}
	while (j > 0)
	{
		rotate(pb);
		ft_printf("rb\n");
		j--;
	}
}

void	sorti(t_pile *pa, t_pile *pb, int j, int cost)
{
	t_sortcost	sortcost;
	int			i;

	sortcost = sortoptions(pa, pb, j);
	i = finalpos(*pa, pb->tab[j]);
	if (cost == sortcost.up)
		goup(pa, pb, i, j);
	else if (cost == sortcost.down)
		godown(pa, pb, i, j);
	else if (cost == sortcost.aupbdown)
		agoupbgodown(pa, pb, i, j);
	else
		agodownbgoup(pa, pb, i, j);
	push(pb, pa);
	ft_printf("pa\n");
}
