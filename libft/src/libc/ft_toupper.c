/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 13:07:38 by juhur             #+#    #+#             */
/*   Updated: 2021/04/27 17:33:29 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** toupper -- lower case to upper case letter conversion
**
** #include <ctype.h>
**
** Converts a lower-case letter to the corresponding upper-case letter.
** The argument must be representable as an "unsigned char" or the value of EOF.
**
** toupper() function uses the current locale.
**
** <PARAMETER>
** int c: Source
**
** <RETURN VALUES>
** [A-Z]: If 1st argument is lowercase alphabet.
** other: If 1st argument is not lowercase alphabet.
*/

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c -= ('a' - 'A');
	return (c);
}
