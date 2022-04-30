/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:17:31 by juhur             #+#    #+#             */
/*   Updated: 2021/09/17 18:07:02 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strlcpy -- size-bounded string copying and concatenation <string.h>
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	if (!src)
		return (0);
	src_len = ft_strlen((char *)src);
	if (!dstsize)
		return (src_len);
	while ((*src)
		&& (dstsize-- > 1))
		*(dst++) = *(src++);
	*dst = 0;
	return (src_len);
}
