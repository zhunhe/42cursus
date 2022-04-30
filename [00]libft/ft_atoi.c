/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:11:04 by juhur             #+#    #+#             */
/*   Updated: 2021/05/17 23:47:07 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** atoi -- convert ASCII string to integer <stdlib.h>
*/

int	ft_atoi(const char *str)
{
	long long	tmp;
	long long	value;
	int			sign;

	value = 0;
	sign = 1;
	while (ft_isspace(*str))
		++str;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (ft_isdigit(*str))
	{
		tmp = value * 10 + *str - '0';
		if (tmp < value)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		value = tmp;
		++str;
	}
	return ((int)value * sign);
}

/*
** isspace -- white-space character test <ctype.h>
*/

int	ft_isspace(int c)
{
	return (c == ' '
		|| c == '\t'
		|| c == '\n'
		|| c == '\v'
		|| c == '\f'
		|| c == '\r');
}
