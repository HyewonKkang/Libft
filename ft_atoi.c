#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	n;
	int			neg;

	n = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		neg *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && ft_isdigit(*str))
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	if (neg * n > 2147483647)
		return (-1);
	else if (neg * n < -2147483648)
		return (0);
	return (neg * n);
}
