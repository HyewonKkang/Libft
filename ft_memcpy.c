#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*new_dst;
	unsigned char	*new_src;

	if (!dst && !src)
		return (NULL);
	new_dst = dst;
	new_src = (unsigned char *)src;
	while (n--)
		*new_dst++ = * new_src++;
	return (dst);
}
