/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:38:40 by juhur             #+#    #+#             */
/*   Updated: 2021/09/17 18:11:33 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** calloc -- memory allocation <stdlib.h>
**
** The calloc() function contiguously allocates enough space for count objects
** that are size bytes of memory each and returns a pointer to the allocated
** memory. The allocated memory is filled with bytes of value zero.
*/

void	*ft_calloc(size_t count, size_t size)
{
	size_t	calloc_size;
	void	*ret;
	void	*p;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	calloc_size = size * count;
	ret = malloc(calloc_size);
	if (!ret)
		return (0);
	p = ret;
	while (calloc_size-- > 0)
		*(unsigned char *)(p++) = 0;
	return (ret);
}
