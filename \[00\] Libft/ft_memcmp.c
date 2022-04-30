/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:17:48 by juhur             #+#    #+#             */
/*   Updated: 2021/09/17 18:09:49 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** memcmp -- compare byte string <string.h>
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (!n)
		return (0);
	while ((n > 0 && --n)
		&& (*(unsigned char *)(s1) == *(unsigned char *)(s2)))
	{
		++s1;
		++s2;
	}
	return (*(unsigned char *)(s1) - *(unsigned char *)(s2));
}
