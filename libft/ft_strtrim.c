/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:49:21 by juhur             #+#    #+#             */
/*   Updated: 2021/05/18 00:13:39 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_index_data(char const *s1, char const *set, size_t *start,
			size_t *end)
{
	*start = 0;
	while (s1[*start] && ft_strchr(set, s1[*start]))
		++(*start);
	*end = ft_strlen((char *)s1) - 1;
	while (s1[*end] && ft_strchr(set, s1[*end]))
	{
		if (!*end)
			break ;
		--(*end);
	}
	if (*end < *start)
		return (0);
	return (1);
}

/*
** Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters
** specified in ’set’ removed from the beginning and the end of the string.
*/

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (0);
	if (!ft_strlen((char *)s1) || !get_index_data(s1, set, &start, &end))
		return (ft_strdup(""));
	if (!(ret = (char *)malloc(sizeof(char) * (end - start + 2))))
		return (0);
	ft_memcpy(ret, s1 + start, end - start + 1);
	*(ret + end - start + 1) = 0;
	return (ret);
}
