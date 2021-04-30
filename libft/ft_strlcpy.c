/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:21:22 by juhur             #+#    #+#             */
/*   Updated: 2021/04/30 14:48:03 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strlcpy -- size-bounded string copying and concatenation (string.h)
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	src_len;

	if (!src)
		return (0);
	src_len = 0;
	while (src[src_len])
		++src_len;
	if (dstsize)
	{
		idx = 0;
		while ((idx < dstsize - 1)
				&& (src[idx]))
		{
			dst[idx] = src[idx];
			++idx;
		}
		dst[idx] = 0;
	}
	return (src_len);
}
