/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 12:52:28 by juhur             #+#    #+#             */
/*   Updated: 2021/05/18 00:07:48 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_word_cnt(char const *s, char c)
{
	size_t	w_cnt;
	size_t	idx;

	w_cnt = 0;
	idx = 0;
	while (s[idx])
	{
		if ((!idx || s[idx - 1] == c)
		&& s[idx] != c)
			++w_cnt;
		++idx;
	}
	return (w_cnt);
}

static size_t	get_word_len(char const *s, char c)
{
	size_t	w_len;

	w_len = 0;
	while (s[w_len] && s[w_len] != c)
		++w_len;
	return (w_len);
}

static void		ft_split_free(char **ret, size_t idx)
{
	while (idx >= 0)
	{
		free(ret[idx]);
		if (!idx)
			break ;
		--idx;
	}
	free(ret);
}

static char		**ft_split_main(char const *s, char c, char **ret, size_t w_cnt)
{
	size_t	idx;
	size_t	jdx;
	size_t	w_len;

	idx = 0;
	while (idx < w_cnt)
	{
		while ((*s) && *s == c)
			++s;
		w_len = get_word_len(s, c);
		if (!(ret[idx] = (char *)malloc(sizeof(char) * (w_len + 1))))
		{
			ft_split_free(ret, idx);
			return (0);
		}
		jdx = 0;
		while (jdx < w_len)
			ret[idx][jdx++] = *(s++);
		ret[idx++][jdx] = 0;
		++s;
	}
	ret[idx] = 0;
	return (ret);
}

/*
** Allocates (with malloc(3)) and returns an array of strings obtained
** by splitting ’s’ using the character ’c’ as a delimiter.
** The array must be ended by a NULL pointer.
*/

char			**ft_split(char const *s, char c)
{
	size_t	w_cnt;
	char	**ret;

	if (!s)
		return (0);
	w_cnt = get_word_cnt(s, c);
	if (!(ret = (char **)malloc(sizeof(char *) * (w_cnt + 1))))
		return (0);
	return (ft_split_main(s, c, ret, w_cnt));
}
