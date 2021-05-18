/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 15:29:12 by juhur             #+#    #+#             */
/*   Updated: 2021/05/18 00:12:05 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_alloc_len(size_t s_len, size_t start, size_t len)
{
	size_t alloc_len;

	if (s_len < start)
		alloc_len = 1;
	else if (len < s_len - start)
		alloc_len = len + 1;
	else
		alloc_len = s_len - start + 1;
	return (alloc_len);
}

/*
** Allocates (with malloc(3)) and returns a substring from the string ’s’.
** The substring begins at index ’start’ and is of maximum size ’len’.
*/

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*ptr;
	size_t	s_len;
	size_t	alloc_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen((char *)s);
	alloc_len = get_alloc_len(s_len, start, len);
	if (!(ret = (char *)malloc(sizeof(char) * alloc_len)))
		return (NULL);
	if (alloc_len == 1)
	{
		*ret = 0;
		return (ret);
	}
	ptr = ret;
	while (alloc_len-- > 1)
		*(ptr++) = *(s++ + start);
	*ptr = 0;
	return (ret);
}
