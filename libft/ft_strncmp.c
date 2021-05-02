/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 10:32:57 by juhur             #+#    #+#             */
/*   Updated: 2021/05/02 14:01:58 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strncmp -- compare strings (string.h)
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t idx;

	if (!n)
		return (0);
	idx = 0;
	while ((idx < n - 1)
	&& (*(s1 + idx) == *(s2 + idx))
	&& (*(s1 + idx) && *(s2 + idx)))
		++idx;
	return (*(unsigned char *)(s1 + idx) - *(unsigned char *)(s2 + idx));
}
