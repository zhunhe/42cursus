/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 14:08:22 by juhur             #+#    #+#             */
/*   Updated: 2021/04/30 12:58:29 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memcpy -- copy memory area (string.h)
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t idx;

	if (!dst && !src)
		return (0);
	if (!n || !*(unsigned char *)src)
		return (dst);
	idx = 0;
	while (idx < n)
	{
		if (*(unsigned char *)(src + idx))
			*(unsigned char *)(dst + idx) = *(unsigned char *)(src + idx);
		else
			*(unsigned char *)(dst + idx) = 0;
		++idx;
	}
	return (dst);
}
