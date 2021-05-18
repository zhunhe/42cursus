/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:30:10 by juhur             #+#    #+#             */
/*   Updated: 2021/05/18 00:08:35 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a new string,
** which is the result of the concatenation of ’s1’ and ’s2’.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	char	*p;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	if (!(ret = (char *)malloc(s1_len + s2_len + 1)))
		return (0);
	p = ret;
	while (s1_len-- > 0)
		*(p++) = *(s1++);
	while (s2_len-- > 0)
		*(p++) = *(s2++);
	*p = 0;
	return (ret);
}
