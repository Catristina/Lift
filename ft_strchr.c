
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = -1;
	while (++i < (int)ft_strlen(s) + 1)
		if (s[i] == (char)c)
			return ((char *)s + i);
	return (NULL);
}
