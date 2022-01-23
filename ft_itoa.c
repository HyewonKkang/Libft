#include "libft.h"

int		get_int_len(long long n)
{
	int		len;

	if (n == 0 || n == -0) return (1);
	len = n < 0 ? 1 : 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int			len;
	long long	nbr;
	char		*res;

	len = get_int_len(n);
	nbr = n < 0 ? -(long long)n : (long long)n;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res) return (NULL);
	res[len--] = '\0';
	while (len >= 0)
	{
		res[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
