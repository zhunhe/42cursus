/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:17:27 by juhur             #+#    #+#             */
/*   Updated: 2021/04/27 13:51:59 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** bzero -- write zeroes to a byte string
**
** #include <string.h>
**
** writes n zeroed bytes to the string s. If n is zero, bzero() does nothing.
**
** <PARAMETERS>
** void *s: Destination
** size_t n: Length
*/

void	ft_bzero(void *s, size_t n)
{
	size_t idx;

	idx = 0;
	while (idx < n)
		*(char *)(s + idx++) = (char)0;
}
