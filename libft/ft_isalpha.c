/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:12:39 by juhur             #+#    #+#             */
/*   Updated: 2021/05/18 02:19:40 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** isalpha -- alphabetic character test <ctype.h>
*/

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}

/*
** isupper -- upper-case character test <ctype.h>
*/

int	ft_isupper(int c)
{
	return ('A' <= c && c <= 'Z');
}

/*
** islower -- lower-case character test <ctype.h>
*/

int	ft_islower(int c)
{
	return ('a' <= c && c <= 'z');
}
