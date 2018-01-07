
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*ptr;
	size_t		i;

	ptr = (const char *)s;
	i = -1;
	while (++i < n)
		if (*(ptr + i) == (char)c)
			return ((void *)ptr + i);
	return (NULL);
}
