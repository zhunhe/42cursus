/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:38:23 by juhur             #+#    #+#             */
/*   Updated: 2021/05/18 00:06:19 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fd_main(long long n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		ft_putnbr_fd_main(n * (-1), fd);
	}
	else
	{
		if (n >= 10)
			ft_putnbr_fd_main(n / 10, fd);
		ft_putchar_fd((char)(n % 10) + '0', fd);
	}
}

/*
** Outputs the integer ’n’ to the given file descriptor.
*/

void		ft_putnbr_fd(int n, int fd)
{
	if (fd < STDIN_FILENO && fd > OPEN_MAX)
		return ;
	ft_putnbr_fd_main((long long)n, fd);
}
