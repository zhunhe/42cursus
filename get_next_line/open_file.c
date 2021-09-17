/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:45:55 by juhur             #+#    #+#             */
/*   Updated: 2021/09/17 17:57:12 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>

/*
** RESULT
** fd[3]
** fd[4]
**  ...
** fd[254]
** fd[255]
** fd[-1]
** fd[-1]
**  ...
*/

int main(void)
{
	int		fd;

	while (1)
	{
		fd = open("spirit_of_c.txt", O_RDONLY);
		printf("fd[%d]\n", fd);
	}
	return (0);
}