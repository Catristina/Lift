
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str1;
	char	*str2;

	if (n == 0 || dest == src)
		return (dest);
	str1 = (char *)dest;
	str2 = (char *)src;
	while (--n)
		*str1++ = *str2++;
	*str1 = *str2;
	return (dest);
}
