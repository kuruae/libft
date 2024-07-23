/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_str_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <emagnani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:37:12 by emagnani          #+#    #+#             */
/*   Updated: 2024/07/23 18:20:08 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_str_array(char **array)
{
	size_t	i;

	i = 0;
	if (!array)
		return ;
	while (array[i++])
		array[i] = ft_free_null(array[i]);
	free(array);
	array = NULL;
}
