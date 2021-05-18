/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:43:13 by juhur             #+#    #+#             */
/*   Updated: 2021/05/17 19:00:33 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memcpy -- copy memory area <string.h>
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void *ptr;

	if (dst == src)
		return (dst);
	ptr = dst;
	while (n--)
		*(unsigned char *)(ptr++) = *(unsigned char *)(src++);
	return (dst);
}
