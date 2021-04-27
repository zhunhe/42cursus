/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 00:46:00 by juhur             #+#    #+#             */
/*   Updated: 2021/04/27 12:33:30 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** strlen -- find length of string
**
** #include <string.h>
**
** Computes the length of the string s.
**
** <PARAMETERS>
** char *s: Source
**
** <RETURN VALUES>
** The strlen() function returns the number of characters.
*/

size_t	ft_strlen(char *s)
{
	size_t len;

	len = 0;
	while (*(s++))
		++len;
	return (len);
}
