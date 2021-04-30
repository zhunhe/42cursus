/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:04:34 by juhur             #+#    #+#             */
/*   Updated: 2021/04/30 12:57:59 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memccpy -- copy string until character found (string.h)
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t idx;

	if (!dst && !src)
		return (0);
	if (!n || !*(unsigned char *)src)
		return (0);
	idx = 0;
	while (idx < n)
	{
		if (*(unsigned char *)(src + idx))
			*(unsigned char *)(dst + idx) = *(unsigned char *)(src + idx);
		else
			*(unsigned char *)(dst + idx) = 0;
		if (*(unsigned char *)(src + idx) == (unsigned char)c)
		{
			++idx;
			return (dst + idx);
		}
		++idx;
	}
	return (0);
}
