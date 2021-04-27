/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:50:17 by juhur             #+#    #+#             */
/*   Updated: 2021/04/27 11:19:56 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** #include <ctype.h>
**
** isdigit -- decimal-digit character test
**
** Tests for a decimal digit character.
** Regardless of locale, this includes the following characters only:
**
** '0': 48
** '1': 49
**   ...
** '8': 56
** '9': 57
**
** The value of the argument must be representable
** as an "unsigned char" or the value of EOF.
**
** <PARAMETER>
** int c: Source
** 
** <RETURN VALUES>
** true: If 1st argument is digit character.
** false: If 1st argument is not digit character.
*/

int	ft_isdigit(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	return ('0' <= uc && uc <= '9');
}
