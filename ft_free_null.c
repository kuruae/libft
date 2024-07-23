/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_null.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <emagnani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:35:32 by emagnani          #+#    #+#             */
/*   Updated: 2024/07/23 18:09:00 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_null(void *ptr)
{
	if (ptr && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
		return (ptr);
}
