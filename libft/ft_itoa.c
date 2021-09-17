/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:17:20 by juhur             #+#    #+#             */
/*   Updated: 2021/09/17 18:12:14 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(int n)
{
	size_t		len;
	long long	n_tmp;

	if (n < 0)
		n_tmp = (long long)n * (-1);
	else
		n_tmp = (long long)n;
	if (!n_tmp)
		len = 1;
	else
	{
		len = 0;
		while (n_tmp)
		{
			++len;
			n_tmp /= 10;
		}
	}
	if (n < 0)
		return (len + 1);
	return (len);
}

char	*ft_itoa_main(char *ret, int n, size_t len)
{
	long long	n_tmp;

	if (n < 0)
		n_tmp = (long long)n * (-1);
	else
		n_tmp = (long long)n;
	ret[len--] = 0;
	while (len >= 0)
	{
		ret[len] = (n_tmp % 10) + '0';
		n_tmp /= 10;
		if (!len)
		{
			if (n < 0)
				ret[len] = '-';
			break ;
		}
		--len;
	}
	return (ret);
}

/*
** Allocates (with malloc(3)) and returns a string
** representing the integer received as an argument.
** Negative numbers must be handled.
*/

char	*ft_itoa(int n)
{
	char		*ret;
	size_t		len;

	len = get_len(n);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	return (ft_itoa_main(ret, n, len));
}
