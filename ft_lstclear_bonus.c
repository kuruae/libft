/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <emagnani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:54:55 by emagnani          #+#    #+#             */
/*   Updated: 2024/05/27 17:01:37 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	node = *lst;
	while (node->next)
	{
		del(node->content);
		free (node->content);
		node = node->next;
	}
	free (node);
	node = NULL;
}
