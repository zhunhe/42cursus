/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 13:06:30 by juhur             #+#    #+#             */
/*   Updated: 2021/04/30 13:32:55 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memcmp -- compare byte string (string.h)
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t idx;

	idx = 0;
	while ((idx < n - 1)
	&& (*(unsigned char *)(s1 + idx) == *(unsigned char *)(s2 + idx)))
	{
		++idx;
	}
	return (*(unsigned char *)(s1 + idx) - *(unsigned char *)(s2 + idx));
}
