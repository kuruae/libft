/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <emagnani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:33:36 by emagnani          #+#    #+#             */
/*   Updated: 2024/05/24 15:05:08 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i] == little[j] && big[i] && little[j] &&i < len)
		{
			j++;
			i++;
		}
		if (!little[j])
			return ((char *)&big[i - ft_strlen(little)]);
		k++;
		i = k;
		if (little[j] != big[i])
			i++;
	}
	return (NULL);
}
