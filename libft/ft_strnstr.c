/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 15:48:39 by juhur             #+#    #+#             */
/*   Updated: 2021/05/13 17:36:44 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strnstr -- locate a substring in a string <string.h>
*/

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t to_find_len;

	if (!*to_find)
		return ((char *)str);
	to_find_len = ft_strlen((char *)to_find);
	while (*str && len >= to_find_len)
	{
		if (*str == *to_find && !ft_strncmp(str, to_find, to_find_len))
			return ((char *)str);
		++str;
		--len;
	}
	return (0);
}
