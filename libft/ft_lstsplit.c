/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:13:08 by oleshche          #+#    #+#             */
/*   Updated: 2017/11/13 18:13:12 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_len(const char *s, char c, int index)
{
	int			len;

	len = 0;
	while (s[index] != c && s[index] != '\0')
	{
		len++;
		index++;
	}
	return (len);
}

static void		del(void *data, size_t size)
{
	ft_memdel(&data);
	size = 0;
}

static int		skip_space(char const *s, char c)
{
	int j;

	j = 0;
	while (s[j] == c)
		j++;
	return (j);
}

t_list			*ft_lstsplit(char const *s, char c)
{
	t_list		*lst;
	t_list		*temp;
	int			i;
	int			len;

	i = 0;
	lst = NULL;
	while (s && s[i] != '\0')
	{
		i += skip_space(s + i, c);
		len = word_len(s, c, i);
		if (!lst)
		{
			if (!(temp = ft_lstnew(ft_strsub(s, i, len), len)))
				return (lst);
			lst = temp;
		}
		else
		{
			ft_lstadd(&(temp->next), ft_lstnew(ft_strsub(s, i, len), len));
			temp ? temp = temp->next : ft_lstdel(&lst, &del);
		}
		i += len;
	}
	return (lst);
}
