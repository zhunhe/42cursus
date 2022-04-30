/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:16:04 by juhur             #+#    #+#             */
/*   Updated: 2021/09/17 18:06:52 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** strlen -- find length of string <string.h>
*/

size_t	ft_strlen(char *s)
{
	size_t	len;

	len = 0;
	while (*(s++))
		++len;
	return (len);
}
