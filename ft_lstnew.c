/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhuk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 18:58:17 by azhuk             #+#    #+#             */
/*   Updated: 2016/10/06 09:53:12 by azhuk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new_link;

	if (!(new_link = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content || !content_size)
	{
		new_link->content = NULL;
		new_link->content_size = 0;
		new_link->next = NULL;
	}
	else
	{
		new_link->content = ft_memalloc(content_size);
		new_link->content = ft_memcpy(new_link->content, content, content_size);
		new_link->content_size = content_size;
		new_link->next = NULL;
	}
	return (new_link);
}
