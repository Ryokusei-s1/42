/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albalmen <albalmen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:47:29 by albalmen          #+#    #+#             */
/*   Updated: 2025/05/15 12:47:30 by albalmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char			*str_copy;
	int				i;
	unsigned char	ch;

	ch = (unsigned char) c;
	str_copy = (char *)str;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str_copy[i] == ch)
			return (&str_copy[i]);
		i--;
	}
	return (0);
}
