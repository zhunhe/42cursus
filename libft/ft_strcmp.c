/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:33:27 by juhur             #+#    #+#             */
/*   Updated: 2021/04/29 14:55:58 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strcmp -- compare strings (string.h)
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	while ((*s1 == *s2)
		&& (*s1 && *s2))
	{
		++s1;
		++s2;
	}
	return ((int)(*(unsigned char *)s1 - *(unsigned char *)s2));
}
