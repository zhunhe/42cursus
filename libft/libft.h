/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 00:46:25 by juhur             #+#    #+#             */
/*   Updated: 2021/05/02 10:35:36 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <limits.h>

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
char				*ft_strstr(const char *haystack, const char *needle);
int					ft_strcmp(const char *s1, const char *s2);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
char				*ft_strchr(const char *s, int c);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

/*
** #include <ctype.h>
*/
int					ft_isalpha(int c);
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_isspace(int c);

/*
** #include <stdlib.h>
*/
int					ft_atoi(const char *str);
#endif
