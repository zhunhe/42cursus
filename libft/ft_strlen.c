/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 00:46:00 by juhur             #+#    #+#             */
/*   Updated: 2021/04/28 11:56:38 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strlen -- find length of string (string.h)
*/

size_t	ft_strlen(char *s)
{
	size_t len;

	len = 0;
	while (*(s++))
		++len;
	return (len);
}
