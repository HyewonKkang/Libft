#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalnum(c) || ft_isalpha(c));
}
