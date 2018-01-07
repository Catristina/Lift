
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	new_str = ft_strnew(s1len + s2len);
	if (!new_str)
		return (NULL);
	i = -1;
	j = -1;
	while (++i < s1len)
		*(new_str + i) = *(s1 + i);
	while (++j < s2len)
		*(new_str + i++) = *(s2 + j);
	return (new_str);
}
