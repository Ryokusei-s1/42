/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albalmen <albalmen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:47:07 by albalmen          #+#    #+#             */
/*   Updated: 2025/05/15 12:47:08 by albalmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	j;

	ptr = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	j = 0;
	while (s[j])
	{
		ptr[j] = s[j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
