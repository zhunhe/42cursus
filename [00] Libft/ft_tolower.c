/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:14:32 by juhur             #+#    #+#             */
/*   Updated: 2021/05/16 16:18:43 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** tolower -- upper case to lower case letter conversion <ctype.h>
*/

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		c -= ('A' - 'a');
	return (c);
}
