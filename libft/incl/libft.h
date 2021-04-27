/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 00:46:25 by juhur             #+#    #+#             */
/*   Updated: 2021/04/27 11:43:49 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** #include <string.h>
*/
void				*ft_memset(void *b, int c, size_t len);
size_t				ft_strlen(char *s);
void				ft_bzero(void *s, size_t n);
/*
** #include <ctype.h>
*/
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
#endif
