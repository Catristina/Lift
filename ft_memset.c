
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;
	size_t	i;

	if (len == 0)
		return (b);
	ptr = b;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (b);
}
