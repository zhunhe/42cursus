/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 13:07:38 by juhur             #+#    #+#             */
/*   Updated: 2021/04/28 11:56:54 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** toupper -- lower case to upper case letter conversion (ctype.h)
*/

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c -= ('a' - 'A');
	return (c);
}
