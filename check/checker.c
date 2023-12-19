/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:25:08 by jblaye            #+#    #+#             */
/*   Updated: 2023/12/19 11:19:43 by jblaye           ###   ########.fr       */
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
	if (ft_strncmp(cmd, "\n", 1) == 0)
		return (1);
	return (0);
}

void	checker(int ac, char **av)
{
	t_pile	pa;
	t_pile	pb;
	int		ok;
	char	*cmd;

	pa = parsing(ac, av);
	pb.tab = (int *) ft_calloc(pa.len, sizeof(int));
	pb.len = 0;
	if (pa.len == 0 || duplicatenbrcheck(pa) == 0)
		return (ft_printf("Error\n"), free(pa.tab), free(pb.tab));
	cmd = get_next_line(0);
	if (!cmd || !pb.tab)
		return (ft_printf("Error\n"), free(pa.tab), free(pb.tab));
	ok = 0;
	while (cmd != 0)
	{
		ok = command(&pa, &pb, cmd);
		if (ok == 0)
			return (ft_printf("Error\n"), free(cmd), free(pa.tab), free(pb.tab));
		free(cmd);
		cmd = get_next_line(0);
	}
	if (issorted(&pa, 1) == 1 && pb.len == 0)
		return (ft_printf("OK\n"), free(pa.tab), free(pb.tab));
	return (ft_printf("KO\n"), free(pa.tab), free(pb.tab));
}

int	main(int ac, char **av)
{
	checker(ac, av);
	return (0);
}
