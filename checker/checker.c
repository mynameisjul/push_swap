/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julieblaye <julieblaye@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:25:08 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/18 22:46:34 by julieblaye       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	command(t_pile *pa, t_pile *pb, char *cmd)
{
	if (ft_strncmp(cmd, "rr\n", 3) == 0)
		return (rotate(pa), rotate(pb), 1);
	if (ft_strncmp(cmd, "ra\n", 3) == 0)
		return (rotate(pa), 1);
	if (ft_strncmp(cmd, "rb\n", 3) == 0)
		return (rotate(pb), 1);
	if (ft_strncmp(cmd, "rrr\n", 4) == 0)
		return (rrotate(pa), rrotate(pb), 1);
	if (ft_strncmp(cmd, "rra\n", 4) == 0)
		return (rrotate(pa), 1);
	if (ft_strncmp(cmd, "rrb\n", 4) == 0)
		return (rrotate(pb), 1);
	if (ft_strncmp(cmd, "pa\n", 3) == 0)
		return (push(pb, pa), 1);
	if (ft_strncmp(cmd, "pb\n", 3) == 0)
		return (push(pa, pb), 1);
	if (ft_strncmp(cmd, "ss\n", 3) == 0)
		return (swap(pa), swap(pb), 1);
	if (ft_strncmp(cmd, "sa\n", 3) == 0)
		return (swap(pa), 1);
	if (ft_strncmp(cmd, "sb\n", 3) == 0)
		return (swap(pb), 1);
	return (0);
}

void checker(ac, av)
{
	t_pile	pa;
	t_pile	pb;
	int		ok;
	char	*cmd;

	pa = parsing(ac, av);
	cmd = get_next_line(1);
	if (!cmd)
		return (ft_printf("KO\n"));
	if ((pa.len == 0 || duplicatenbrcheck(pa) == 0))
	{
		if (ft_strncmp(cmd, "Error\n", 6) != 0)
			return (ft_printf("KO\n"));
		if (get_next_line(1) != 0)
			return (ft_printf("KO\n"));
	}
	ok = 0;
	while (cmd != 0)
	{
		ok = command(&pa, &pb, cmd);
		if (ok == 0)
			return (ft_printf("KO\n"));
		free(cmd);
		cmd = get_next_line(1);
	}
	if (issorted(&pa, 1) == 1)
		return (ft_printf("OK\n"));
}
