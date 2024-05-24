/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emagnani <emagnani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:33:36 by emagnani          #+#    #+#             */
/*   Updated: 2024/05/24 13:57:55 by emagnani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free (str[i++]);
	free (str);
}

static int	word_count(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (*s == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] != c && (i == 00 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		x;
	int		wlen;
	char	**tab;

	i = 0;
	x = 0;
	tab = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		wlen = 0;
		while (s[wlen] && s[wlen] != c)
			wlen++;
		tab[i] = malloc((wlen + 1) * sizeof(char));
		if (!tab[i])
		{
			ft_free(tab);
			return (NULL);
		}
		j = 0;
		while (j < wlen)
		{
			tab[i][j] = *s;
			s++;
			j++;
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

/* int	main(void)
{
	printf("%d\n", word_count(" ", ' '));
} */