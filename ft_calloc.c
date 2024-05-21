/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <emagnani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 12:17:13 by emagnani          #+#    #+#             */
/*   Updated: 2024/05/21 12:41:15 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			total;
	unsigned char	*temp;
	void			*ptr;

	i = 0;
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	temp = (unsigned char *)ptr;
	while (i < total)
	{
		temp[i] = 0;
		i++;
	}
	return (ptr);
}
