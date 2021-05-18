/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 16:43:55 by juhur             #+#    #+#             */
/*   Updated: 2021/05/18 00:09:57 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Applies the function ’f’ to each character of the string ’s’ to create
** a new string (with malloc(3)) resulting from successive applications of ’f’.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	len;
	size_t	idx;

	if (!s || !f)
		return (0);
	len = ft_strlen((char *)s);
	if (!(ret = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	idx = 0;
	while (idx < len)
	{
		ret[idx] = f(idx, s[idx]);
		++idx;
	}
	ret[idx] = 0;
	return (ret);
}
