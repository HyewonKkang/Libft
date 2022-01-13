#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*new_ptr;
	unsigned char	new_value;

	new_ptr = b;
	new_value = c;
	while (len--)
		*new_ptr++ = new_value;
	return (b);
}
