/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:58:49 by juhur             #+#    #+#             */
/*   Updated: 2021/04/29 14:55:35 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** atoi -- convert ASCII string to integer (stdlib.h)
*/

int	ft_atoi(const char *str)
{
	long long	value;
	int			sign;

	value = 0;
	sign = 1;
	while (ft_isspace(*str))
		++str;
	sign = (*str == '-') ? -1 : 1;
	if (*str == '+' || *str == '-')
		++str;
	while (ft_isdigit(*str))
	{
		value = value * 10 + *str - '0';
		if (value * sign > INT_MAX)
			return (-1);
		else if (value * sign < INT_MIN)
			return (0);
		++str;
	}
	return (value * sign);
}

/*
** isspace -- white-space character test (ctype.h)
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
