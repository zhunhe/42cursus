/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 21:38:01 by juhur             #+#    #+#             */
/*   Updated: 2021/05/18 00:02:12 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates the list ’lst’ and applies the function ’f’
** to the content of each element. Creates a new list
** resulting of the successive applications of the function ’f’.
** The ’del’ function is used to delete the content of an element if needed.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*temp;

	if (!lst || !f)
		return (0);
	ret = 0;
	while (lst)
	{
		if (!(temp = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		ft_lstadd_back(&ret, temp);
		temp = temp->next;
		lst = lst->next;
	}
	return (ret);
}
