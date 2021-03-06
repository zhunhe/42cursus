/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:13:06 by juhur             #+#    #+#             */
/*   Updated: 2021/05/03 14:23:59 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** isdigit -- decimal-digit character test <ctype.h>
*/

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
