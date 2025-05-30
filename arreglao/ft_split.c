/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albalmen <albalmen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:53:16 by albalmen          #+#    #+#             */
/*   Updated: 2025/05/15 12:53:19 by albalmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countstr(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
	}
	return (j);
}

static void	free_subs(char **subs, size_t k)
{
	while (k > 0)
		free(subs[--k]);
	free(subs);
}

static int	ft_fill_subs(char const *s, char c, size_t j, char **subs)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			subs[k] = ft_substr(s, j, i - j);
			if (!subs[k++])
			{
				free_subs(subs, k - 1);
				return (0);
			}
		}
	}
	subs[k] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**subs;
	size_t	j;

	if (!s)
		return (NULL);
	j = ft_countstr(s, c);
	subs = malloc((j + 1) * sizeof(char *));
	if (!subs)
		return (NULL);
	if (!ft_fill_subs(s, c, j, subs))
		return (NULL);
	return (subs);
}
