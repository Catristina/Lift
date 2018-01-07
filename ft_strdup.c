
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * (ft_strlen(s1) + 1));
	if (str == NULL)
		return (NULL);
	return (ft_strcpy(str, s1));
}
