/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 11:21:19 by juhur             #+#    #+#             */
/*   Updated: 2021/04/27 12:33:02 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isascii -- test for ASCII character
**
** #include <ctype.h>
**
** Tests for an ASCII character,
** which is any character between 0 and octal 0177 inclusive.
**
** <PARAMETER>
** int c: Source
** 
** <RETURN VALUES>
** true: If 1st argument is ascii character.
** false: If 1st argument is not ascii character.
*/

int	ft_isascii(int c)
{
	return (0 <= c && c <= 0177);
}
