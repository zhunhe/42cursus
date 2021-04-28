/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 11:21:19 by juhur             #+#    #+#             */
/*   Updated: 2021/04/28 11:56:03 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** isascii -- test for ASCII character (ctype.h)
**
** Tests for an ASCII character,
** which is any character between 0 and octal 0177 inclusive.
*/

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}
