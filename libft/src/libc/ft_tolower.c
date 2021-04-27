/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 17:16:13 by juhur             #+#    #+#             */
/*   Updated: 2021/04/27 17:33:57 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** tolower -- upper case to lower case letter conversion
**
** #include <ctype.h>
**
** Converts an upper-case letter to the corresponding lower-case letter.
** The argument must be representable as an unsigned char or the value of EOF.
**
** tolower() function uses the current locale.
**
** <PARAMETER>
** int c: Source
**
** <RETURN VALUES>
** [a-z]: If 1st argument is uppercase alphabet.
** other: If 1st argument is not uppercase alphabet.
*/

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		c -= ('A' - 'a');
	return (c);
}
