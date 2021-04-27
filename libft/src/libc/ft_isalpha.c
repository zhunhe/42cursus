/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:23:46 by juhur             #+#    #+#             */
/*   Updated: 2021/04/27 12:56:41 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isalpha -- alphabetic character test
**
** #include <ctype.h>
**
** The value of the argument must be representable
** as an "unsigned char" or the value of EOF.
**
** In the ASCII character set, this includes the following characters.
**
** 'A': 65  'a': 97
** 'B': 66  'b': 98
**        ...
** 'Y': 89  'y': 121
** 'Z': 90  'z': 122
**
** <PARAMETER>
** int c: Source
**
** <RETURN VALUES>
** true: If 1st argument is alphabet character.
** false: If 1st argument is not alphabet character.
*/

int	ft_isalpha(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	return (('A' <= uc && uc <= 'Z') || ('a' <= uc && uc <= 'z'));
}
