/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:29:04 by juhur             #+#    #+#             */
/*   Updated: 2021/09/17 18:07:41 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strdup -- save a copy of a string <string.h>
*/

char	*ft_strdup(const char *s1)
{
	char	*ret;
	char	*p;
	size_t	s1_len;

	s1_len = ft_strlen((char *)s1);
	ret = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (!ret)
		return (0);
	p = ret;
	while (s1_len--)
		*(p++) = *(s1++);
	*p = 0;
	return (ret);
}
