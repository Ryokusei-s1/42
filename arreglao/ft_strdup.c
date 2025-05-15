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
