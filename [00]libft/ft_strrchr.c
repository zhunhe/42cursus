/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:40:02 by juhur             #+#    #+#             */
/*   Updated: 2021/05/03 17:41:13 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strrchr -- locate character in string <string.h>
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen((char *)s);
	if (!c)
		return ((char *)(s + s_len));
	if (!s_len)
		return (0);
	while (s_len >= 0)
	{
		if (*(char *)(s + s_len) == (char)c)
			return ((char *)(s + s_len));
		if (!s_len)
			break ;
		--s_len;
	}
	return (0);
}
