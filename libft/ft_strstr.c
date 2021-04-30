/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:31:58 by juhur             #+#    #+#             */
/*   Updated: 2021/04/30 12:59:18 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strstr -- locate a substring in a string (string.h)
*/

int		compare(const char *s1, const char *s2)
{
	while (*s2)
	{
		if (*s1 != *s2)
			return (0);
		++s1;
		++s2;
	}
	return (*s2 == '\0');
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle && compare(haystack, needle))
			return ((char *)haystack);
		++haystack;
	}
	return (0);
}
