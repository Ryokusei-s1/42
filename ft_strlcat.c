/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albalmen <albalmen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:40:54 by albalmen          #+#    #+#             */
/*   Updated: 2025/05/14 19:50:34 by albalmen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (srclen += dstsize);
	else
		srclen += dstlen;
	while (src[i] != '\0' && dstlen < dstsize - 1 && dest != src)
	{
		dest[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dest[dstlen] = '\0';
	return (srclen);
}
