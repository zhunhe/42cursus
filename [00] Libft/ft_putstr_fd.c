/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:32:57 by juhur             #+#    #+#             */
/*   Updated: 2021/09/17 18:09:03 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Outputs the string āsā to the given file descriptor.
*/

void	ft_putstr_fd(char *s, int fd)
{
	if ((fd < STDIN_FILENO && fd > OPEN_MAX)
		|| (!s))
		return ;
	write(fd, s, ft_strlen(s));
}
