
#include "libft.h"

int		ft_atoi(const char *str)
{
	long long			nb;
	int					sign;

	nb = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		if (nb > 922337203685477580 && sign == 1)
			return (-1);
		if (nb < -922337203685477580 && sign == -1)
			return (0);
		nb = (nb * 10) + sign * (*str++ - '0');
		if (sign == 1 && nb < 0)
			return (-1);
		if (sign == -1 && nb > 0)
			return (0);
	}
	return ((int)nb);
}
