/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 12:13:10 by juhur             #+#    #+#             */
/*   Updated: 2021/05/10 18:07:02 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memset -- fill a byte string with a byte value <string.h>
**
** Writes len bytes of value c (converted to an unsigned char) to the string b.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	void *p;

	p = b;
	while (len-- > 0)
		*(unsigned char *)(p++) = (unsigned char)c;
	return (b);
}
