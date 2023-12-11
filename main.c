/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:10:51 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/11 15:15:18 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main()
{
	t_pile	pilea;
	
	pilea = parsing(ac, av);
	if (pilea.len == 0)
		printf("Invalid arguments\n");
	return (0);
}
