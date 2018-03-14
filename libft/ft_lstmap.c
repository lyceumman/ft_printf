/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:55:43 by oleshche          #+#    #+#             */
/*   Updated: 2017/11/09 19:55:44 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*temp;

	if (!lst || !f)
		return (lst);
	res = f(lst);
	temp = res;
	lst = lst->next;
	while (lst)
	{
		ft_lstadd(&(temp->next), f(lst));
		lst = lst->next;
		temp = temp->next;
	}
	return (res);
}
