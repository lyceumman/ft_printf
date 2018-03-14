/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:59:33 by oleshche          #+#    #+#             */
/*   Updated: 2017/11/09 18:59:34 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lstnew;
	size_t	size;

	if (!(lstnew = (t_list *)malloc(sizeof(t_list))))
		return (lstnew);
	size = content_size;
	if (content == NULL)
	{
		lstnew->content = NULL;
		lstnew->content_size = 0;
		lstnew->next = NULL;
		return (lstnew);
	}
	if (!(lstnew->content = malloc(content_size)))
		return (NULL);
	ft_memcpy(lstnew->content, content, size);
	lstnew->content_size = size;
	lstnew->next = NULL;
	return (lstnew);
}
