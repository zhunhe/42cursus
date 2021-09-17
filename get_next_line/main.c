/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:16:42 by juhur             #+#    #+#             */
/*   Updated: 2021/09/17 17:59:46 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	char	*str;
	int		fd;

	if (argc == 1)
	{
		while ((str = get_next_line(0)))
			printf("str[%s]\n", str);
	}
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while ((str = get_next_line(fd)))
			printf("str[%s]\n", str);
	}
	return (0);
}
