/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:11:21 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/04 13:54:50 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <aio.h>
# include <stdlib.h>
# include <unistd.h>

// UTILS
char	*ft_calloc(size_t size);
char	*ft_realloc(char *str, size_t size);
ssize_t	ft_strlen(char *str);


// PUSH_SWAP FUNCTIONS
void	swap(int **p);
void	push(int **p1, int **p2);

#endif