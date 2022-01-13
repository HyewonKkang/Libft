#include "libft.h"
# define INT_MIN -2147483648
# define INT_MAX 2147483647

int	ft_atoi(const char *str)
{
	int			negative;
	long long	result;

	negative = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		negative *= -1;
	while (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		if (negative * result < INT_MIN)
			return (0);
		else if (negative * result > INT_MAX)
			return (-1);
		str++;
	}
	return (negative * result);
}
