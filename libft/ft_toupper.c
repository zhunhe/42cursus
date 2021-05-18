/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:14:14 by juhur             #+#    #+#             */
/*   Updated: 2021/05/16 16:18:28 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** toupper -- lower case to upper case letter conversion <ctype.h>
*/

int	ft_toupper(int c)
{
	if (ft_islower(c))
		c -= ('a' - 'A');
	return (c);
}
