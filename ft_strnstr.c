/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <emagnani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:33:36 by emagnani          #+#    #+#             */
/*   Updated: 2024/05/21 10:51:56 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t  j;

	i = 0;
	while (i < len)
	{
		if (big[i] == little[i])
		{
			j = i;
			while (i < (j + len))
				i++;
			if (big[i] == little[i])
				return ((char *)&little[i]);
		}
		i++;
	}
	return (NULL);
}
