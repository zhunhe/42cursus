/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 12:13:02 by juhur             #+#    #+#             */
/*   Updated: 2021/04/27 12:56:24 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isalnum -- alphanumeric character test
**
** #include <ctype.h>
**
** Tests for any character for which isalpha(3) or isdigit(3) is true.
** The value of the argument must be representable
** as an "unsigned char" or the value of EOF.
**
** In the ASCII character set, this includes the following characters
**
** '0': 48  'A': 65  'a': 97
** '1': 49  'B': 66  'b': 98
**            ...
** '8': 56  'Y': 89  'y': 121
** '9': 57  'Z': 90  'z': 122
**
** <PARAMETER>
** int c: Source
**
** <RETURN VALUES>
** true: If 1st argument is alphanumeric character.
** false: If 1st argument is not alphanumeric character.
*/

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
