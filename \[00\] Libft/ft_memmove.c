/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:20:50 by juhur             #+#    #+#             */
/*   Updated: 2021/05/17 19:01:34 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memmove -- copy byte string <string.h>
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == src)
		return (dst);
	if (dst < src)
	{
		d = dst;
		s = src;
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d = dst + len - 1;
		s = src + len - 1;
		while (len--)
			*d-- = *s--;
	}
	return (dst);
}
