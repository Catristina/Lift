
#include "libft.h"

char	*ft_strstr(const char *bg, const char *sm)
{
	int		i;
	int		j;
	int		k;
	int		true;

	if (!ft_strlen(sm))
		return ((char *)bg);
	i = -1;
	true = 0;
	while (bg[++i] && !true)
	{
		if (bg[i] == sm[0])
		{
			j = 0;
			k = i;
			true = 1;
			while (sm[j])
				if (sm[j++] != bg[k++])
					true = 0;
			if (true)
				return ((char *)bg + i);
		}
	}
	return (NULL);
}
