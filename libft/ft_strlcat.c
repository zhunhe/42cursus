/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:41:26 by juhur             #+#    #+#             */
/*   Updated: 2021/05/02 14:04:39 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strlcat -- size-bounded string copying and concatenation (string.h)
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	idx;
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	while (dst[dst_len])
		++dst_len;
	src_len = 0;
	while (src[src_len])
		++src_len;
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	idx = 0;
	while ((dst_len + idx < dstsize - 1)
		&& (src[idx]))
	{
		dst[dst_len + idx] = src[idx];
		++idx;
	}
	dst[dst_len + idx] = 0;
	return (dst_len + src_len);
}
