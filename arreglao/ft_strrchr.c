/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silvertape <silvertape@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:42:36 by albalmen          #+#    #+#             */
/*   Updated: 2025/05/15 03:32:54 by silvertape       ###   ########.fr       */
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
