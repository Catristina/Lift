
#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	int		contor;

	contor = 0;
	i = -1;
	while (size > 0 && contor == 0 && ++i < size)
		if (dest[i] == '\0')
			contor = 1;
	j = ft_strlen(dest);
	k = ft_strlen(src);
	if (contor == 0)
		return (size + k);
	else
	{
		i = -1;
		while (src[++i] != '\0' && i < size - j - 1)
			dest[j + i] = src[i];
		dest[j + i] = '\0';
	}
	return (j + k);
}
