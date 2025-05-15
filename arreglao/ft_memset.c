#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = ptr;
	while (i < n)
	{
		s[i] = (unsigned char)x;
		i++;
	}
	return (ptr);
}
