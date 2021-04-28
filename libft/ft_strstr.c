/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:31:58 by juhur             #+#    #+#             */
/*   Updated: 2021/04/28 18:59:14 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strstr -- locate a substring in a string (string.h)
*/

int		*get_pi(const char *s, int len)
{
	int	i;
	int	j;
	int	*pi;

	pi = (int *)malloc(sizeof(int) * len);
	i = 0;
	j = 0;
	while (++i < len)
	{
		while (j > 0 && s[i] != s[j])
			j = pi[j - 1];
		if (s[i] == s[j])
			pi[i] = ++j;
	}
	return (pi);
}

char	*kmp(const char *src, const char *to_find, int src_len, int to_find_len)
{
	int	i;
	int	j;
	int *pi;

	pi = get_pi(to_find, to_find_len);
	i = -1;
	j = 0;
	while (++i < src_len)
	{
		if (*(src + i) == *(to_find + j))
		{
			if (++j == to_find_len)
			{
				free(pi);
				return (char *)(src + i - j + 1);
			}
		}
		else if (j > 0)
		{
			j = pi[j];
			--i;
		}
	}
	free(pi);
	return (0);
}

char	*ft_strstr(const char *src, const char *to_find)
{
	int	src_len;
	int to_find_len;

	if (!to_find)
		return ((char *)src);
	if (!src)
		return (0);
	src_len = 0;
	to_find_len = 0;
	while (src[src_len])
		++src_len;
	while (to_find[to_find_len])
		++to_find_len;
	if (to_find_len > src_len)
		return (0);
	return (kmp(src, to_find, src_len, to_find_len));
}
