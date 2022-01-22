#include "libft.h"

int		get_int_len(int n)
{
	int		len;

	if (n < 0)
	{
		len = 1;
		n *= -1;
	}
	else len = 0;
	while (n >= 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		negative;
	int 	nbr;
	int		len;
	char	*res;

	negative = n > 0 ? 1 : -1;
	nbr = n > 0 ? nbr : -nbr;
	len = get_int_len(n);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return NULL;
	res[len] = '\0';
	while (len)
	{
		res[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	if (negative == -1)
		res[len] = '-';
	return (res);
}
