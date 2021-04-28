/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 00:52:30 by juhur             #+#    #+#             */
/*   Updated: 2021/04/28 11:56:33 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memset -- fill a byte string with a byte value (string.h)
**
** The memset() function writes len bytes of value c
** (converted to an unsigned char) to the string b.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	void	*p;
	size_t	idx;

	p = b;
	idx = 0;
	while (idx < len)
		*(unsigned char *)(p + idx++) = (unsigned char)c;
	return (b);
}
