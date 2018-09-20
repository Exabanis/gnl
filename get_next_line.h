/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exabanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 06:49:07 by exabanis          #+#    #+#             */
/*   Updated: 2018/06/17 10:52:33 by exabanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include "libft/libft.h"
# include <fcntl.h>
# define CHECK_C(c) if (!(c)) return (-1);
# define C_CHECK(c) if (!(c)) return (NULL);
# define BUFF_SIZE 32

typedef struct		s_block
{
	char			*temp;
	char			*str;
	int				bytes;
	int				fd;
	struct s_block	*next;
}					t_block;

int					get_next_line(const int fd, char **line);

#endif
