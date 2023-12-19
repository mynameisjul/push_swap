/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:29:51 by julieblaye        #+#    #+#             */
/*   Updated: 2023/12/19 10:16:13 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include	<aio.h>
# include	<stdlib.h>
# include	<unistd.h>
# include	"../libft/libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_line
{
	char	*result;
	char	*rest;
}					t_line;

//GET NEXT LINE UTILS
ssize_t	isinstr(char *s, char c);
char	*ft_endstr(char *rest, size_t index, size_t size);
char	*ft_endstrnomalloc(char *rest, size_t index, size_t size);

//GET NEXT LINE CORE FUNCTIONS
char	*ft_strnjoin(char *beg, char *end, size_t size);
t_line	ft_read(int fd, t_line line);
t_line	get_end_of_line(int fd, char *tmp);
char	*get_next_line(int fd);

#endif
